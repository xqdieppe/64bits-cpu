#include <stdio.h>

#include "x64-cpu.h"

int main(int argc, char **argv) {
	//GATE_TEST_FULL(NAND);
	//GATE_TEST_FULL(NOR);
	//REG(rip);
	//ONE_SHORT_MEMORY(0);
	//gates_t g;
	//INIT_FLIP_FLOP(s0,r0,q0,q_0);
	//INIT_FLIP_FLOP(s1,r1,q1,q_1);
	//printf("%d,%d\n", q0, q1);
	//SET_FLIP_FLOP(s0,r0,q0,q_0);
	//printf("%d,%d\n", q0, q1);
	struct pin_s *in0 = (struct pin_s *) new(PIN, 1);
	//struct gates_t *nand = (struct gates_s *) new(NAND, in0, in1, out);
}
