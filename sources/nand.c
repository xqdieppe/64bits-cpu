#include "gates.h"

void nand_constructor(struct class_s *self, va_list *args) {

}

void nand_destructor(struct class_s *self) {
	free(self);
}

struct class_s NAND_CLASS = {
	.constructor = &nand_constructor,
	.desctructor = &nand_destructor,
	.size = sizeof(struct gates_s)
}

struct class_s *NAND = &NAND_CLASS;
