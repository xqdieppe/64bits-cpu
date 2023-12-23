#include "x64-cpu.h"

void array_constructor(struct class_s *self, va_list *args) {
	struct array_s *self_ = (struct array_s *) self;
}

void array_destructor(struct class_s *self) {
	struct array_s *self_ = (struct array_s *) self;
	free(self);
}

size_t array_size(struct array_s *self) {
	size_t s = 0;
	if (self->array == NULL) return (s);
	while (self->array[s] != NULL) s++;
	return (s);
}

void array_push(struct array_s *self, void *elem) {
	size_t s = __size__(self);

	for (size_t i = 0; i < s; i++) {
	
	}
	self->array
}

struct class_s ARRAY_CLASS = {
	.constructor = &pin_constructor,
	.destructor = &pin_destructor,
	.size = sizeof(struct gates_s)
};

struct class_s *ARRAY = &ARRAY_CLASS;
