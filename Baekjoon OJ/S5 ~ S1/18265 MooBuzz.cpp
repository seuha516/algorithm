#include <iostream>
using namespace std;

long long go(long long st,long long end,long long goal){
	
	long long mid=(st+end)/2;
	
	long long res=mid-(mid/3)-(mid/5)+(mid/15);
	
	if(res==goal){
		return mid;
	}else if(res>goal){
		return go(st,mid-1,goal);
	}else{
		return go(mid+1,end,goal);
	}
	
}


int main(){
	
	
	long long n;scanf("%lld",&n);
	printf("%lld",go((long long)0,(long long)21000000000000,n));
	
	
return 0;}
