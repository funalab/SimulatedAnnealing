#include <stdio.h>
#include <stdlib.h>

double unif_update(void) {
  double random = ((double)rand() + 1.0) / ((double)RAND_MAX + 2.0);
  return random;
}
