#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* prints Fahrenheit-Celsius table */

float convertToCelsius(int);

main() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.1f\n", fahr, convertToCelsius(fahr));
  }
  return 0;
}

float convertToCelsius(int fahr) {
  float celsius;
  celsius = (5.0 / 9.0) * (fahr - 32);
  return celsius;
}
