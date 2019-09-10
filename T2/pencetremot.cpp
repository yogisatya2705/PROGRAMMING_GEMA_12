// PENCET PENCET REMOTE TV

#include <iostream>

using namespace std;

int main()
{
  int n = 0, ref = 0;
  string operan;

  cin >> n;
  int hasil[n];

  for (int i = 0; i < n; i++)
  {
    cin >> operan;
    cin >> ref;

    if (operan.compare("next") == 0)
    {
      hasil[i] = --ref;
      if (hasil[i] < 0) hasil[i] = 99;
    }
    else if (operan.compare("prev") == 0)
    {
      hasil[i] = ++ref;
      if (hasil[i] > 99) hasil[i] = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << hasil[i] << endl;
  }

  return 0;
}