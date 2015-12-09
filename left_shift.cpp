#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void left_shift(int *x, int m, int n)
{
	int buf,i,j,p;
	p = n % m;
	for (i=0;i<p;i++)
	{
	buf = x[0];
	for (j=1;j<m;j++)
	{
		x[j-1]=x[j];
	}
	x[m-1]=buf;
	}
 } 
 
int main(int argc, char** argv) {
	int d[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int h=20;
	int g=50;
	left_shift(d,h,g);
	for(int i=0;i<20;i++)
	cout<<d[i]<<"  ";
	return 0;
}
