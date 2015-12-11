#include <iostream>

using namespace std;

int main()
{
    int n,n500,n200,n100,n50,n20, n10,s;
    cin >> n;
    n500 = n/500;
    n = n%500;
    n200 = n/200;
    n = n%200;
    n100 = n/100;
    n = n%100;
    n50 = n/50;
    n = n%50;
    n20 = n/20;
    n = n%20;
    n10 = n/10;
    n = n%10;
    if (n !=0) cout  << "error";
    s = n10+n20+n50+n100+n200+n500;
    cout << s;
    return 0;
}