#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

long long hap(long long n){
	return (n+1)*n/2;
}

int main(){	

	long long sam[1005]={0,}; //삼각분할 
	long long sa[1005]={0,}; //사각분할 
	
	sam[0]=0; sam[1]=0; sam[2]=1; sam[3]=1;
	sa[2]=1; sa[4]=1;
	
	for(int i=4;i<1005;i++){	
		for(int j=0;j<i-2;j++){
			sam[i]+=sam[j+2]*sam[i-1-j];
			sam[i]%=1000000000;
		}
	}
	
	for(int i=6;i<1005;i+=2){	
		for(int j=2;j<=i-2;j+=2){
			for(int k=2;k<=i-j;k+=2){
				sa[i]+=((sa[j]*sa[k])%1000000000)*sa[i+2-j-k];
				sa[i]%=1000000000;	
			}		
		}
	}
	
	int x; scanf("%d",&x);
	printf("%d\n%d",sam[x],sa[x]);
		
	return 0;
}
 
