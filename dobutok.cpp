#include <iostream>

using namespace std;

int main()
{
  int a,b,c,x,d;
  cin >> x;
  if (x/1000 >=1) cout << "Break";
  else{
  a = x % 10;
  x = x / 10;
  b = x %10;
  c = x / 10;
  d = c*b*a;
  }
  cout << "Dobutok = " << d << endl;
    return 0;
}