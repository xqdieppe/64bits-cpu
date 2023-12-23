#ifndef CLASS_H
#define CLASS_H

typedef struct class_s {
	void (*constructor)(struct class_s *, va_list *args);
	void (*destructor)(struct class_s *);
	size_t size;
}class_t;

#endif
