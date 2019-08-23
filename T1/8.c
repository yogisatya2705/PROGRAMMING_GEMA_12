#include <stdio.h>

int main()
{
  char p[26] = "abcdefghijklmnopqrstuvwxyz";
  char c[26] = "zyxwvutsrqponmlkjihgfedcba";

  int n = 0;
  scanf("%d", &n);
  getchar();

  char kalimat[n][100], ch;

  for (int i = 0; i < n; i++)
  {
    fgets(kalimat[i], 100, stdin);
  }

  for (int cn = 0; cn < n; cn++)
  {
    for (int i = 0; kalimat[cn][i] != '\0'; i++)
    {
      ch = kalimat[cn][i];

      for (int j = 0; j < 26; j++)
      {
        if (ch == p[j])
        {
          ch = c[j];
          j = 26;
        }
        else if (ch == '(')
        {
          if (kalimat[cn][i + 1] == '\'')
          {
            for (int x = i + 1; kalimat[cn][x] != '\0'; x++)
            {
              if (kalimat[cn][x + 1] == '\'' && kalimat[cn][x + 2] == ')')
              {
                i = x + 2;
                ch = kalimat[cn][i];

                break;
              }
            }
          }
        }
      }

      kalimat[cn][i] = ch;
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%s", kalimat[i]);
  }

  return 0;
}