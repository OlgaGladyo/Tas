#include <iostream>

using namespace std;

int main()
{
   int t,t1,t2,t3;
   cin >> t1 >> t2 >> t3;
   if (t1 <= 0 || t1 >=1000 || t2 <=0 || t2 >=1000 || t3<=0 || t3>=1000) cout << "Error";
   else t = (t1*t2*t3)/(t1*t2 + t1*t3 + t2*t3);
   cout << "Time = " << t;

    return 0;
}
