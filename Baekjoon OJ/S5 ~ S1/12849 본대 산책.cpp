#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main(){
	
	long long arr[8]={0,};
	long long tarr[8]={0,};
	arr[0]=1;
	 
	int d; scanf("%d",&d);
	for(int i=0;i<d;i++){
		tarr[0]=arr[1]+arr[2];
		tarr[1]=arr[0]+arr[2]+arr[3];
		tarr[2]=arr[0]+arr[1]+arr[3]+arr[4];
		tarr[3]=arr[1]+arr[2]+arr[4]+arr[5];
		tarr[4]=arr[2]+arr[3]+arr[5]+arr[7];
		tarr[5]=arr[3]+arr[4]+arr[6];
		tarr[6]=arr[5]+arr[7];
		tarr[7]=arr[4]+arr[6];
		for(int j=0;j<8;j++)arr[j]=tarr[j]%1000000007;
	}
	printf("%lld",arr[0]);
	
	
	
	return 0;
}
