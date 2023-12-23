#ifndef X64_CPU_H
#define X64_CPU_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "gates-poc.h"
#include "gates.h"
#include "registers.h"
#include "memory.h"
#include "pin.h"

struct class_s *new(struct class_s *cls, ...);

#endif
