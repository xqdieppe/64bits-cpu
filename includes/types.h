#ifndef TYPES_H
#define TYPES_H

typedef struct uint1_s { unsigned char bit:1; } uint1_t;

#define BIT(b) \
	((b)->bit)

#endif
