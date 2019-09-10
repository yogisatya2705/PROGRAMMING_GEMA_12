// MANTRA SHOGUN MODIF
#include <iostream>

using namespace std;

int peluang_komb(int N, int K, int index, int loopstart)
{
  if (index == K)
  {
    return 1;
  }
  
  int hsl = 0;
  for (int i = loopstart; i < N; i++)
  {
    hsl += peluang_komb(N, K, index + 1, i);
  }
  
  return hsl;
}

int main()
{
  int T = 0, N = 0, K = 0;
  
  cin >> T;
  int hsl[T];

  for (int i = 0; i < T; i++)
  {
    cin >> N >> K;
    hsl[i] = peluang_komb(N, K, 0, 0);
  }

  for (int i = 0; i < T; i++)
  {
    cout << hsl[i] << "\n";
  }
  
}