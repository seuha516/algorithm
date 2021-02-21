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
#include <stack>
#define SOSU_LIMIT 1000000

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

stack<int> s;

bool ff=0;

void go(int x,int num){
	
	if(ff) return;
	if(num==1){
		if(isitsosu(x)){
			s.push(x);
			while(!s.empty()){
				printf("%d ",s.top()); s.pop();
			}
			ff=1;
			return;
		}else{
			return;
		}
	}
	
	for(int i=0;i<sosu_gaesoo;i++){
		int sosu=sosu_list[i];
		if(sosu>=x) break;
		s.push(sosu);
		go(x-sosu,num-1);
		if(!s.empty())s.pop();
	}
	
}

int main(){
	
	sosu_making();
	
	int n; scanf("%d",&n);
	go(n,4);
	if(ff==0)printf("-1");
	
    return 0;
}



