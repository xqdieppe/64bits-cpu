#include "x64-cpu.h"

void pin_constructor(struct class_s *self, va_list *args) {

}

void pin_destructor(struct class_s *self) {
	free(self);
}

struct class_s PIN_CLASS = {
	.constructor = &pin_constructor,
	.destructor = &pin_destructor,
	.size = sizeof(struct gates_s)
};

struct class_s *PIN = &PIN_CLASS;
