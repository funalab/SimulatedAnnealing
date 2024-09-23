#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double unif_param(void) {
  double random =
      (double)(rand() - (double)RAND_MAX / 2) / (double)(RAND_MAX / 2);
  return random;
}
