#include "function_pointers.h"
/**
  *print_name- prints a name of a person
  *@name: string
  *@f: a pointer to a function
  *Returns: 0 always
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
