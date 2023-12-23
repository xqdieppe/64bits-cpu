#ifndef PIN_H
#define PIN_H

#include "class.h"

typedef struct __attribute__((packed)) pin_s {
	struct class_s main;

	unsigned char elec;
	struct gates_s **gates;
	
	void (*set)(struct pin_s *, unsigned char);
}pin_t;

extern struct class_s *PIN;

#endif
