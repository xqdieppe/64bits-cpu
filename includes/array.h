#ifndef ARRAY_H
#define ARRAY_H

#include "class.h"

typedef struct array_s {
	struct class_s main;

	void **array;

	void (*length)(struct array_s *);
	void (*push)(struct array_s *, void *);
	void (*get)(struct array_s *, int);
	void (*map)(struct array_s *, void (*)(void *, int, struct array_s *))
}array_t;

extern struct class_s *PIN;

#endif
