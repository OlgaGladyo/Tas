#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cin >> a;
  if (a > 99 || a < 10) cout << "error";
  else
  {
      b = a / 10;
      c = a % 10;
  }
  cout << b << "  " << c << endl;
    return 0;
}
