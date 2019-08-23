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
    for (int cm = 0; cm < m[cn]; cm++)
    {
      for (int i = m[cn]; i > cm; i--)
      {
        printf("*");
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
