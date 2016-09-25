#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int hasil=0;
    int x=0,cek,i;
    do{
        cek = 0;
        for (i = 2; i < x; i++){
            if (x % i == 0){
                cek = 1;
            }
        }
        if (cek == 0){
            cout<<x<<", ";
            hasil+=x;
        }
        x++;
    }while(x<2000000);


}
