#ifndef ARRAY_H
#define ARRAY_H

#include "class.h"

typedef struct array_s {
	struct class_s main;

	struct class_s **array;

	size_t (*length)(struct array_s *);
	struct class_s *(*push)(struct array_s *, struct class_s *);
	void (*get)(struct array_s *, int);
	void (*map)(struct array_s *, void (*)(struct class_s *, int, struct array_s *))
}array_t;

extern struct class_s *ARRAY;

#endif
