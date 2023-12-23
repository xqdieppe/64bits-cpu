#include "x64-cpu.h"

void pin_constructor(struct class_s *self, va_list *args) {
	int value = va_arg(*args, int);
	struct pin_s *self_ = (struct pin_s *) self;
	
	self_->elec = (unsigned char) value;
}

void pin_destructor(struct class_s *self) {
	free(self);
}

void pin_dump(struct class_s *self, size_t padding) {
	struct pin_s *self_ = (struct pin_s *) self;
	printf("[ electricity: %s ]\n", (self_->elec == 1) ? "true" : "false");
}

void pin_set(struct pin_s *self, unsigned char v) {
	self->elec = v;

	//__map__(gates, )
}

struct class_s PIN_CLASS = {
	.constructor = &pin_constructor,
	.destructor = &pin_destructor,
	.dump = &pin_dump,
	.size = sizeof(struct gates_s)
};

struct class_s *PIN = &PIN_CLASS;
