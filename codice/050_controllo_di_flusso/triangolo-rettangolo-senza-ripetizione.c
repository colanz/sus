#include <stdio.h>

main() {
  int a, b, c;
  printf("Inserisci i tre lati\n");
  scanf("%d%d%d", &a, &b, &c);    // supponiamo che c sia il più grande
  if (!(a * a + b * b == c * c))  // teorema di Pitagora
    printf("Non r");
  else
    printf("R");
  printf("ettangolo\n");
}