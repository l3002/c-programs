#include <stdio.h>

/* prints Celsius-Fahrenheit table
    for values = 0,20,...,300; floating-point version */
main() {
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  celsius = lower;
  while (celsius <= upper) {
    fahr = 32 + (9.0 / 5.0) * celsius;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
