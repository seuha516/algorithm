#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	long long int n,r,c; scanf("%lld %lld %lld",&n,&r,&c);
	long long int len=pow(2,n);
	long long int hap=len*len;
	long long int dap=0;
	
	while(1){
		
		if(n==1){
			if(r==0&&c==0){
				
			}else if(r==0&&c==1){
				dap+=1;
			}else if(r==1&&c==0){
				dap+=2;
			}else if(r==1&&c==1){
				dap+=3;
			}
			break;
		}else{
			
			if(r<len/2&&c<len/2){
				
			}else if(r<len/2&&c>=len/2){
				dap+=hap/4; c-=len/2;
			}else if(r>=len/2&&c<len/2){
				dap+=hap/2; r-=len/2;
			}else if(r>=len/2&&c>=len/2){
				dap+=hap*3/4; r-=len/2; c-=len/2;
			}
			
			len/=2; hap/=4; n--;
		}
	}
	
	printf("%lld",dap);
	
	
	return 0;
	
}
