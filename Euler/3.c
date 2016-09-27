#include <stdio.h>
#include <math.h>

int main(){

    int cek,i;
    long long int x;
	x=600851475143;
	i=2;
   	while(x!=i){
		while(x%i!=0 && i<x){
			i++;
		}
		if(i!=x){
			x=x/i;
		}else{
			x=i;
		}
	}
	printf("%d",x);
	
	
	
}
