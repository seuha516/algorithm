#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int aa[1055]={0,};aa[0]=1;aa[1]=1;aa[2]=2;
	int a;scanf("%d",&a);
	if(a==1){
		printf("1");
	}else{
		for(int i=3;i<=a;i++){
			for(int j=0;j<=i-2;j++){
				aa[i]+=aa[j]%10007;
			}
			aa[i]++;
		}
		printf("%d",aa[a]%10007);
	}
	
}
