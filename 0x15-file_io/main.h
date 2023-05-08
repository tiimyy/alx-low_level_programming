#ifndef _MAIN__
#define _MAIN__

#include <sys/types.h>
#include <sys/sat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif
