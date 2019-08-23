// SOGUN PUNYA

#include <stdio.h>

int main()
{

  int n, m;
  scanf("%i %i", &n, &m);
  char test[n][100];

  for (int i = 0; i < n; i++)
  {
    scanf("%s", test[i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int x = 0;
      char temp = test[i][x];
      while ((test[i][x + 1] != '\0') || (test[i][x + 1] != NULL))
      {
        test[i][x] = test[i][x + 1];
        x++;
      }
      if (test[i][x + 1] == '\0')
        test[i][x] = temp;

      printf("%s", test[i]);
    }
    puts("");
  }

  return 0;
}