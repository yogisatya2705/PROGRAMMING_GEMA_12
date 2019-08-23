#include <stdio.h>

int main()
{
  int n = 0;
  scanf("%d", &n);

  int m[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &m[i]);
  }

  for (int cn = 0; cn < n; cn++)
  {
    for (int cm = 1; cm <= m[cn]; cm++)
    {
      for (int i = 0; i <= cm; i++)
      {
        for (int j = 0; j < m[cn] - cm; j++)
        {
          printf(" ");
        }

        for (int j = cm; j > i; j--)
        {
          printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
          printf("*");
        }

        for (int j = 0; j < i; j++)
        {
          printf("*");
        }

        printf("\n");
      }
    }
  }

  return 0;
}
