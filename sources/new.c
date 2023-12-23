#include "x64-cpu.h"

struct class_s *new(struct class_s *cls, ...) {
	va_list list;
	va_start(list, cls);
	struct class_s *c = (struct class_s *) calloc(cls->size, 1);
	memcpy(c, cls, sizeof(struct class_s));
	__constructor__(c, &list);
	va_end(list);
	return (c);
}
