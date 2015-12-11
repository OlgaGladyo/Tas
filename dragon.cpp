#include <iostream>

using namespace std;

int main()
{
  int a,b,g,n,s,k;
  cout << "Number of all heads = ";
  cin >> a;
  cout << "Number of foots = ";
  cin >> b;
  cout << "Number of dragon's heads = ";
  cin >> k;
  cout << "Number of foots of centipede =  ";
  cin >> s;

 if (s>=b) cout << "Error";
 if (a <= k+1) cout << "Error";
  g = a-k;
  n = b - s*g;
  if (n<=0) cout << "-1";
  cout  << "Number of dragon's foots = " << n << endl;
    return 0;
}
