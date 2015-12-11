#include <iostream>

using namespace std;

int main()
{
  int n,a,b,i;
  cin >> n;

 /* for (i=1;i<=n; i++)
  {
      cout << "a[" << i <<"] = ";
      cin >>a[i];
if (a [i] >4 || a[i]<1) cout << "error";
  }
 for (j=1;j<=n; j++)
  {
      cout << "b[" << j <<"] = ";
      cin >>b[j];
if (b [j] >1000 || b[j]<1) cout << "error";
  }*/
  int x = 0, y=0;
   for (i=1; i<=n; i++)
   {
       cin >>a;
       //if (a >4 || a<1) cout << "error";
       cin >> b;
       //if (b >1000 || b<1) cout << "error";
       switch (a)
       {
       case 1:
           y +=b;
           break;
       case 2:
        x +=b;
        break;
       case 3:
        y -=b;
        break;
       case 4:
        x -=b;
        break;
        }
   }
   cout << x << " " << y << endl;

      return 0;
}
