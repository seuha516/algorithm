#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#define SOSU_LIMIT 1044

using namespace std;

vector<int> sosu_list;  // SOSU_LIMIT 이하의 소수들 
int sosu_gaesoo;  // 소수의 개수 
void sosu_making(){  // 소수를 만드는 함수 
	bool ok[SOSU_LIMIT+1]={0,};
	for(int i=2;i<=SOSU_LIMIT;i++){
		if(ok[i])continue;
		sosu_list.push_back(i);
		for(int j=i;j<=SOSU_LIMIT;j+=i){
			ok[j]=1;
		}
	}
	sosu_gaesoo=sosu_list.size();
}
bool isitsosu(int x){  // 소수인지 판별 
	 vector<int>::iterator iter;
	 iter=find(sosu_list.begin(),sosu_list.end(),x);
	 if(iter==sosu_list.end())return 0; 
	 else return 1;
}

long long arr[1000500];
long long S[1000500];

long long yak(int x){
	long long d=1; long long ret=1;
	
	int t=0;
	while(1){
		int sosu=sosu_list[t++]; 
		if(sosu*sosu>x) break;
		while(x%sosu==0){
			x/=sosu;
			d*=sosu; d++;
		}
		ret*=d; d=1;
	}
	if(x!=1){
		ret*=(1+x);
	}
	
	return ret;	
}

int main(){
	
	sosu_making();
	
	for(int i=1;i<1000055;i++){
		long long y=yak(i);
		S[i]=S[i-1]+y;
	}
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);		
		printf("%lld\n",S[x]);	
	}
	
    return 0;
}

