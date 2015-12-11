#include <iostream>

using namespace std;

int main()
{
    int a,m,i,n,j;
    int mas[n];
    cin >> n;
    for (i=0; i <n; i++)
    {
        cout << "mas[" << i << "]=" << endl;
        cin >>a;
    }
    for (i=0; i<n-1; i++)
        for 9j=0; j<n-i-1; j++)
    {
        if (mas[j] > mas[j+1])
        {
            int p;
            p = mas[j];
            mas[j] = mas[j+1];
            mas[j+1] = p;
        }
    }
    k = n/2;
    if (n%2 == 0)
    m = (mas[k-1] + mas[k])/2; 
    else m = mas[k];
    
    cout << m;
    return 0;
}
