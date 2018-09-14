#ifndef BSH_LOGGER_H
#define BSH_LOGGER_H

#include <stdio.h>

#define outs(str) fprintf(stdout, str)
#define errs(str) fprintf(stderr, str)

#define outf(fmt, ...) fprintf(stdout, __VA_ARGS__)
#define errf(fmt, ...) fprintf(stderr, __VA_ARGS__)

#endif
