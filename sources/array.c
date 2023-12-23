#include "x64-cpu.h"

void array_constructor(struct class_s *self, va_list *args) {
	struct array_s *self_ = (struct array_s *) self;

	self_->array = NULL;
	self_->push = array_push;
}

void array_destructor(struct class_s *self) {
	struct array_s *self_ = (struct array_s *) self;
	free(self);
}

void array_dump(struct class_s *self, size_t padding) {
	struct array_s *self_ = (struct array_s *) self;
	size_t s = __size__(self_);
	
	for (size_t i = 0; i < s; i++)
		__dump__(self_->array[i]);
}

size_t array_size(struct array_s *self) {
	size_t s = 0;
	if (self->array == NULL) return (s);
	while (self->array[s] != NULL) s++;
	return (s);
}

void array_push(struct array_s *self, struct class_s *elem) {
	size_t s = __size__(self);
	struct class_s **array = calloc(((struct class_s *) elem)->size, s + 2);

	for (size_t i = 0; i < s; i++)
		memcpy(array[i], self->array[i], ((struct class_s *) self->array[i])->size);
	memcpy(array[i], elem, ((struct class_s *) elem)->size);
	for (size_t i = 0; i < s; i++)
		__destructor__(self->array[i]);
	free(self->array);
	self->array = array;
}

struct class_s ARRAY_CLASS = {
	.constructor = &array_constructor,
	.destructor = &array_destructor,
	.size = sizeof(struct gates_s)
};

struct class_s *ARRAY = &ARRAY_CLASS;
