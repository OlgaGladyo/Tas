#include iostream
#include stdio.h
using namespace std;

int main()
{
  int n,a,b,i;
  FILE f1, f2;
int x = 0, y=0;

if ((f1=fopen(Cz2.txt, rt))== NULL)
    {cout  Error;
    return -1;
    }
fscanf (f1, %i, &n);
   for (i=1; i=n; i++)
   {
       cin a;
       if (a 4  a1) cout  error;
       cin  b;
       if (b 1000  b1) cout  error;
       fscanf (f1, %i%i , a,b);
       cout  Hello;
       switch (a)
       {
       case 1
           y +=b;
           break;
       case 2
        x +=b;
        break;
       case 3
        y -=b;
        break;
       case 4
        x -=b;
        break;
        }
   }
   f2 = fopen (Coutput.txt, wt);
   fprintf (f2, %i %i , x,y);
   fclose(f1);
   fclose(f2);
   cout  x     y  endl;

      return 0;
}