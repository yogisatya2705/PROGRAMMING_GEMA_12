// FIBONACI PLINPLAN

#include <stdio.h>

int fib(int n) 
{
  int HF[n];
  HF[0] = 1;
  HF[1] = 1;

  for (int i = 2; i < n; i++)
  {
    HF[i] = HF[i-2] + HF[i-1];
  }

  int JUMLAH = 0;

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 1)
    {
      JUMLAH -= HF[i];
    }else
    {
      JUMLAH += HF[i];
    }
  }
  

  return JUMLAH;
} 

int main (){
  int N = 0;
  scanf("%d", &N);

  int INPUT[N];

  for (int i = 0; i < N; i++){
   scanf("%d", &INPUT[i]);
  }

  printf("\n");

  for (int i = 0; i < N; i++){
   printf("%d\n", fib(INPUT[i]));
  }
  
  return (0);
}