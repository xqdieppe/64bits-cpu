#include "x64-cpu.h"

void array_constructor(struct class_s *self, va_list *args) {
	struct array_s *self_ = (struct array_s *) self;
}

void array_destructor(struct class_s *self) {
	struct array_s *self_ = (struct array_s *) self;
	free(self);
}

struct class_s ARRAY_CLASS = {
	.constructor = &pin_constructor,
	.destructor = &pin_destructor,
	.size = sizeof(struct gates_s)
};

struct class_s *ARRAY = &ARRAY_CLASS;
