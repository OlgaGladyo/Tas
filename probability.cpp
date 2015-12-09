#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n,i;
    double j, p, f;

    cin >> n;

    if (n > 367) cout << "100%";
    else {

        f = 1;
    for (i=1; i<=n; i++)
        f = f* (365-n+i);

    p = f/ pow (365, n);
    j = (1-p) * 100;
    }

    cout << setprecision(10) << "Probability = "  << j << endl;
    return 0;
}
