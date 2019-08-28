#include <stdio.h>

int prime(int x)
{
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      return 0;
    }
  }

  return 1;
}

int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);

  int HF[3];
  HF[0] = 1;
  HF[1] = 1;

  int JP = 0, HP = 0;

  // for (int i = 2; i <= n; i++)
  // {
  //   HF[i] = HF[i - 2] + HF[i - 1];
  // }

  // for (int i = 0; i <= n; i++)
  // {
  //   printf("%d ", HF[i]);
  // }

  for (int i = 2; i <= n; i++)
  {
    HF[2] = HF[0] + HF[1];
    HF[0] = HF[1];
    HF[1] = HF[2];

    if (prime(HF[2]))
    {
      JP++;

      HP += HF[2];
    }

    printf("%d ", HF[2]);
  }

  printf("\n");

  // for (int i = 2; i <= n; i++)
  // {
  //   if (prime(HF[i]))
  //   {
  //     JP++;

  //     HP += HF[i];
  //   }
  // }

  printf("\n%d \n%d\n", JP, HP);

  return 0;
}
