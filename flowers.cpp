#include <iostream>

using namespace std;

int main()
{
 int m,k,i;
 cin >>m;

 i =1;
  while (i <=m )
  {
 cin >>k;
      if (k%3 == 0) cout << "GCV  " << "\n";
      else if (k%3 == 1) cout << "CVG  " << "\n";
      else cout << "VGC" << "\n";
      i++;
  }
    return 0;
}