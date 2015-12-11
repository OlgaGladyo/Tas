#inc#include <iostream>

using namespace std;

int main()
{
 int a,b,c,d,s,ch,z;
 cin >> a >> b >> c >> d;
 if (b == 0 || d == 0) cout << "error";
 else {
z = (a*d) + (c*b);
 ch = b*d;
 s = z/ch;
 if (z%ch == 0) cout << s;
 else cout << z << "/" << ch;
 }
    return 0;
}
