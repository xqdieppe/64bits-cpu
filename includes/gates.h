#ifndef GATES_H
#define GATES_H

#include "class.h"
#include "types.h"

typedef struct gates_s {
	struct class_s main;

	unsigned char *in0;
	unsigned char *in1;
	unsigned char *out;

	void (*set_in0)(struct gates_s *, unsigned char);
	void (*set_in1)(struct gates_s *, unsigned char);
	void (*set_out)(struct gates_s *, unsigned char);
	void (*exec)(struct gates_s *);
}gates_t;

#define __exec__(self) ((self)->exec(self))

#endif
