// YUDA PUNYA

#include <stdio.h>
#include <math.h>

int main()
{
  int x = 0;
  int y;
  int faktorial;
  float hasil[x];

  printf(" ");
  scanf("%d", &x);

  for (int i = 0; i < x; i++)
  {
    faktorial = 1;
    printf(" ");
    scanf("%d", &y);
    for (int j = 1; j < y; j++)
    {
      faktorial *= j;
    }
    
    hasil[i] = log10(faktorial);
  }

  for (int i = 0; i < x; i++)
  {
    printf("%.2f\n", hasil[i]);
  }
  return 0;
}