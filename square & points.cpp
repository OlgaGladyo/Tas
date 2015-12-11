#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n,p;
  cin >> n;
  if (n<=0 || n>=1000) cout << "error";
  p = pow(n+1,2);
  cout << p;
    return 0;
}
