#include <iostream>

using namespace std;

int main()
{
    int t1, t2, t3, s1, s2, h1, h2, m1, m2, h3,m3,s3;
    cout << "enter 1 = ";
    cin >> h1 >> m1 >> s1 ;
    cout << "enter 2 = ";
    cin >> h2 >> m2 >> s2;
    t1 = s1 + 60 * m1 + 3600 * h1 ;
    t2 = s2 + 60 * m2 + 3600 * h2 ;
    t3 = t2 - t1;
    h3 = t3/3600;
    t3 = t3%3600;
    m3 = t3/60;
    s3 = t3%60;

    cout << h3 << " "<<" " << m3 << " "<< s3 << endl;

    return 0;
}
