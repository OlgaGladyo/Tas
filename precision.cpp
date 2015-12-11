#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int m,n,k;
 cin >> m >> n >> k;
 double a;
 a = m/n;
 cout << setprecision(k) << fixed << a;
    return 0;
}
