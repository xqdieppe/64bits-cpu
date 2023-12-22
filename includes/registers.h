#ifndef REGISTERS_H
#define REGISTERS_H

#include "flip_flop.h"

#define REG_BIT(name,n) \
	INIT_FLIP_FLOP(name##_s##n,name##_r##n,name##_q##n,name##_q_##n) 

#define REG(name) { \
	REG_BIT(name,0); \
	REG_BIT(name,1); \
	REG_BIT(name,2); \
	REG_BIT(name,3); \
	REG_BIT(name,4); \
	REG_BIT(name,5); \
	REG_BIT(name,6); \
	REG_BIT(name,7); \
}

#endif
