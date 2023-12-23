#ifndef PIN_H
#define PIN_H

#define "class.h"

typedef struct pin_s {
	struct class_s main;

	unsigned char elec;
	struct gates_s **gates;
	
	void (*set)(struct pin_s *, unsigned char);
}pin_t;

#endif
