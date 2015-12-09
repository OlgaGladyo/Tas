#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int k,p,b,n,i,z;
	cout<<"Days=";
	cin>>n;
	i=1;
	p=2;
	b=2;
	while (i<n)
	{
		i++;
		p *= 2; //konfet today
		k = b / 2; // viddav
		z = p - k;	//zjiv
		b = (b - k) + p;
		cout<<"Day="<<i<<" p="<<p<<" viddav="<<k<<" zjiv="<<z<<" borg="<<b<<endl;
		
	}
	return 0;
}
