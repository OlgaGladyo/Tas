#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k,p,d;
	p=1;
	d=1;
	cout << "Guests=";
	cin >> n;
	n++;
	k=0;
	do
	{
		k++;
		p=p+d;
		d++;
	}
	while(p<n);
	cout<<"Cuts="<<k<<endl<<" Pieces="<<p<<endl;
	return 0;
}
