#include <stdio.h>

#include "figura.h"

int main() {
  Figura f1, f2, f3;
  rettangolo(&f1, 2.5, 3.7);
  printf("Perimetro: %f\n", perimetro(&f1));
  printf("Area: %f\n", area(&f1));
  quadrato(&f2, 2.5);
  printf("Perimetro: %f\n", perimetro(&f2));
  printf("Area: %f\n", area(&f3));
  triangolo(&f3, 3, 4, 5);
  printf("Perimetro: %f\n", perimetro(&f3));
  printf("Area: %f\n", area(&f3));
  return 0;
}