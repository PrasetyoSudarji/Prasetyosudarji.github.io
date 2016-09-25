#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int hasil=0;
    float x,y;
    long int Array[100];
    Array[0]=1;
    Array[1]=2;
    for (int i=2;i<100;i++){
        if(Array[i-1]<4000000){
            Array[i]=Array[i-2]+Array[i-1];
        }else{
            Array[i]=0;
        }
    }

    for (int i=0;i<100;i++){
        if(Array[i]<4000000 && Array[i]%2==0){
            cout<<Array[i]<<endl;
            hasil+=Array[i];
        }
    }
    cout<<hasil;
 }
