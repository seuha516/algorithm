#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>
#include <random>

using namespace std;

#define sosubumui 6000000 //구할 소수 리스트의 범위 
bool number[sosubumui+1]; vector <int> sosu; int sosugaesoo;
void sosusetting(){
	number[0]=1; number[1]=1;
	for(int i=2;i<=sqrt(sosubumui);i++){
		if(number[i]) continue;
    	int t=i+i;
    	while(t<=sosubumui){
    	number[t]=1;      
        t+=i;
    	}
	}
	for(int i=0;i<=sosubumui;i++){
		if(!number[i]){
			sosu.push_back(i); sosugaesoo++;
		}
	}
}
int main(){
	
	sosusetting();
	int n;scanf("%d",&n);
	int st=0,end=0;
	int temp=2; int dap=0;
	while(1){
		if(st>end)break;
		if(temp==n){
			dap++;
			end++;
			temp+=sosu[end];
		}else if(temp<n){
			end++;
			temp+=sosu[end];
		}else if(temp>n){
			temp-=sosu[st];
			st++;
		}
	}
	printf("%d",dap);
	
	return 0;
}



