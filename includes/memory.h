#ifndef MEMORY_H
#define MEMORY_H

#include "flip_flop.h"

#define ONE_BIT_MEMORY(index) \
	INIT_FLIP_FLOP(s##index,r##index,q##index,q_##index);

#define ONE_BYTE_MEMORY(index) \
	ONE_BIT_MEMORY(index##_0); \
	ONE_BIT_MEMORY(index##_1); \
	ONE_BIT_MEMORY(index##_2); \
	ONE_BIT_MEMORY(index##_3); \
	ONE_BIT_MEMORY(index##_4); \
	ONE_BIT_MEMORY(index##_5); \
	ONE_BIT_MEMORY(index##_6); \
	ONE_BIT_MEMORY(index##_7); \

#define ONE_SHORT_MEMORY(index) \
	ONE_BYTE_MEMORY(index##_0); \
	ONE_BYTE_MEMORY(index##_1); \

#endif
