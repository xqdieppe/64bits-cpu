#ifndef CLASS_H
#define CLASS_H

typedef struct __attribute__((packed)) class_s {
	void (*constructor)(struct class_s *, va_list *args);
	void (*destructor)(struct class_s *);
	void (*dump)(struct class_s *, size_t padding);
	size_t size;
}class_t;

#define __constructor__(self, args) (((struct class_s *) self)->constructor((struct class_s *) self, args))
#define __destructor__(self) (((struct class_s *) self)->destructor((struct class_s *) self))
#define __dump__(self, padding) (((struct class_s *) self)->dump((struct class_s *) self, padding))

#endif
