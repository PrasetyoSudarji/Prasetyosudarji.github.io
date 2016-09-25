#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long int hasil=0;
    float x,y;
    for (int i=1;i<1000;i++){
        x = i%3;
        y = i%5;
        if(x==0 || y==0){
            hasil+=i;
        }
    }
    cout<<hasil;
}
