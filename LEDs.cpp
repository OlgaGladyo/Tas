#include <iostream>

using namespace std;

int main()
{
  long a,n;
  cin >> n;
  if (n>0)
  {
      while (n>0)
      {
          switch (n%10)
          {
          case 0 :
            a +=6;
            break;
          case 1:
            a +=2;
            break;
          case 2:
            a +=5;
            break;
          case 3:
            a +=5;
            break;
          case 4:
            a +=4;
            break;
          case 5:
            a +=5;
            break;
          case 6:
            a +=6;
            break;
          case 7:
            a +=3;
            break;
          case 8:
            a +=7;
            break;
          case 9:
            a +=6;
            break;
          }
          n = n/10;
      }
      }
else a = 6;
  cout << "LEDs = " << a << endl;

    return 0;
}
