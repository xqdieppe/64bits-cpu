#ifndef GATES_POC_H
#define GATES_POC_H

#include "types.h"

#define NAND(i0,i1,o) \
	BIT(&o) = !(BIT(&i0)&BIT(&i1))

#define NOR(i0,i1,o) { \
	uint1_t b0,b1,b2; \
	NAND(i0,i0,b0);NAND(i1,i1,b1); \
	NAND(b0,b1,b2);NAND(b2,b2,o); \
}

#define OR(i0,i1,o) { \
	uint1_t b0,b1; \
	NAND(i0,i0,b0);NAND(i1,i1,b1); \
	NAND(b0,b1,o); \
}

#define AND(i0,i1,o) { \
	uint1_t b0,b1; \
	NAND(i0,i1,b0);NAND(i0,i1,b1); \
	NAND(b0,b1,o); \
}

#define NOT(i,o) \
	NAND(i,i,o);


#define GATE_TEST(gate, in0, in1) { \
	uint1_t i0,i1,o; \
	BIT(&i0)=in0;BIT(&i1)=in1;BIT(&o)=0; \
	gate(i0,i1,o); \
	printf("%s(%d,%d) = %d\n",#gate,BIT(&i0),BIT(&i1),BIT(&o)); \
}

#define GATE_TEST_FULL(gate) \
	GATE_TEST(gate,0,0); \
	GATE_TEST(gate,1,0); \
	GATE_TEST(gate,0,1); \
	GATE_TEST(gate,1,1); \

#endif
