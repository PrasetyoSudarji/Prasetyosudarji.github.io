#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int hasil=0;
    int cek,i;
    long long int x;
     for (x = 2; x<=600851475143; x++)
        { cek = 0;
           for (i = 2; i < x; i++)
        { if (x % i == 0)
          { cek = 1;
        }} if (cek == 0)
          { cout<<x<<", ";
        }
        }
        {
        cout<<endl<<endl<<endl;
        }
}
