// Standard C headers
#include <stdio.h>
#include <stdlib.h>

// Duck headers
#include "../duck-base/base.h"

int main() {
  printf("duck-server: %s\n", duck_ok());
  return EXIT_SUCCESS;
}
