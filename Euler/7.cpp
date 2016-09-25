#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int hasil=0;
    int cek,i,indeks=0;
    long long int x=2;
    do{
        cek = 0;
        for (i = 2; i < x; i++){
            if (x % i == 0){
                cek = 1;
            }
        }
        if (cek == 0){
            cout<<x<<", ";
            indeks++;
        }
        x++;
    }while(indeks!=10001);
    cout<<endl<<indeks;
}

