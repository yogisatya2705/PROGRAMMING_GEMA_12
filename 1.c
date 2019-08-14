// SOAL BERBALAS PANTUN

#include <stdio.h>

int main(){
  int N = 0;
  scanf("%d", &N);

  int A[N], B[N];

  for (int i = 0; i < N; i++){
   scanf("%d", &A[i]);
  }

  for (int i = 0; i < N; i++){
   scanf("%d", &B[i]);
  }

  int JUMLAH = 0;

  // 2
  // 1 2
  // 3 4

  // N * (A[i] + B[i])

  for (int i = 0; i < N; i++){
    JUMLAH += A[i] + B[i];
  }

  JUMLAH *= N;

  printf("%d", JUMLAH);

  return(0);
}