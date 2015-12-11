#include <iostream>
using namespace std;

int main()
{
 int a,b,m,k,n,i;
   cin >> n >> k;
   if (k>n) cout << "error";
   else
   {
       a = 1;
       b = n;
       m = 0;
       while ( m !=k)
       {
           m = (a+b)/2;
           i++;
           if (m<k)
            m = a+1;
           else if (m>k)
            m = b - 1;
       }
cout << "Yes, you guess" << "  " << " You spent " << i << " trying" << endl;
   }


    return 0;
}
