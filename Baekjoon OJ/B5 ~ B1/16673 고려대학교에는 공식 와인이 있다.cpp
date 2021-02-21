#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;

int aa(int c,int k,int p){
	return (k*c+p*c*c);
}

int main(){
	int c,k,p;scanf("%d %d %d",&c,&k,&p);
	int t=0;
	for(int i=1;i<=c;i++){
		t+=aa(i,k,p);
	}
	printf("%d",t);
	
	return 0;
}

