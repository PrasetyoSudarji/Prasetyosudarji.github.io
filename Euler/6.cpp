#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i;
    long long int hasil1=0,hasil2=0;;
    for (i=1;i<=100;i++){
        hasil1+=(i*i);
    }
    for (i=1;i<=100;i++){
        hasil2+=i;
    }
    hasil2*=hasil2;

    cout<<hasil2-hasil1;
}
