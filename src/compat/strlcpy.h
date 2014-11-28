/*
 * This file needs a "translation unit" - it needs anything for the compiler to
 * compile. Since the point of this file is to not exist, declare an unused
 * variable here.
 */
int unused;

#ifndef HAVE_STRLCPY
#define HAVE_STRLCPY

#include <sys/types.h>

size_t   strlcpy(char *, const char *, size_t);

#endif /* !HAVE_STRLCPY */
