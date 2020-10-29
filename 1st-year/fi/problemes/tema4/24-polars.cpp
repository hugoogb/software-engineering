#include <math.h>
#include "24-polars.h"

void polars(float x, float y, float& modul, float& angle){
  float x2, y2;

  x2 = pow(x, 2);
  y2 = pow(y, 2);

  modul = sqrt(x2 + y2);
  angle = atan(y/x);
}
