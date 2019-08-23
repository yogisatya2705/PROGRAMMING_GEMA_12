#include <stdio.h>

int main()
{
  char p[26] = "abcdefghijklmnopqrstuvwxyz";
  char c[26] = "zyxwvutsrqponmlkjihgfedcba";

  char kalimat[100], ch;

  scanf("%[^\n]s", &kalimat);

  for (int i = 0; kalimat[i] != '\0'; i++)
  {
    ch = kalimat[i];

    for (int j = 0; j < 26; j++)
    {
      if (ch == p[j])
      {
        ch = c[j];
        j = 26;
      }
      else if (ch == '(')
      {
        if (kalimat[i + 1] == '\'')
        {
          for (int x = i + 1; kalimat[x] != '\0'; x++)
          {
            if (kalimat[x + 1] == '\'' && kalimat[x + 2] == ')')
            {
              i = x + 2;
              ch = kalimat[i];

              break;
            }
          }
        }
      }
    }

    kalimat[i] = ch;
  }

  printf("%s", kalimat);

  return 0;
}