#include "funcio.h"

#define LEFT 1
#define RIGHT 2
#define DOWN 3
#define UP 4

void modificarPosPunt(int x_min, int x_max, int y_min, int y_max, int dirMov, int& x, int& y){
  switch (dirMov) {
    case LEFT:

      if (x_min < x) {
	x -= 1;
      }
      break;

    case RIGHT:

      if (x < x_max) {
	x += 1;
      }
      break;

    case DOWN:

      if (y < y_max) {
	y += 1;
      }
      break;

    case UP:

      if (y_min < y) {
	y -= 1;
      }
      break;

  }
}
