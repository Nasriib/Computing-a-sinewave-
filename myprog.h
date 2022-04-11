#ifndef ISIP_EXAMPLE
#define ISIP_EXAMPLE
//include files with math.h for sine
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
//Functions being declared in headerfile for use in program, they are void as they do not return anything
//
void ece1111_allocate(float*** array, long num_channels, long N);
void ece1111_compute_sin(float* array, long N, float freq, float fsamp, float amp, float phase);
void ece1111_deallocate(float** array, long num_channels, long N);

#endif
