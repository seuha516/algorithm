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

using namespace std;

int intpow(int x,int y){   
	int ret=1;
	for(int i=0;i<y;i++){
		ret*=x;
	}
	return ret;
}

int trans(char x){
	if(x=='.')return 0;
	else if(x=='x')return 1;
	else return 2;
}

int cache[20000];


int solve(int x){
	int &ret=cache[x]; if(ret!=99)return x;
	int X=x;
	
	int arr[9];
	int os=0,xs=0;
	vector <int> next;
	int now;
	for(int i=8;i>=0;i--){
		arr[i]=x%3; x/=3;
		if(arr[i]==1)xs++;
		else if(arr[i]==2)os++;
		else next.push_back(i);
	}
	if(xs==os)now=1; else now=2;	
	
	if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[0]!=0){
		return (arr[0]==now)? 1 : -1;
	}else if(arr[3]==arr[4]&&arr[4]==arr[5]&&arr[3]!=0){
		return (arr[3]==now)? 1 : -1;
	}else if(arr[6]==arr[7]&&arr[7]==arr[8]&&arr[6]!=0){
		return (arr[6]==now)? 1 : -1;
	}else if(arr[0]==arr[3]&&arr[3]==arr[6]&&arr[0]!=0){
		return (arr[0]==now)? 1 : -1;
	}else if(arr[1]==arr[4]&&arr[4]==arr[7]&&arr[1]!=0){
		return (arr[1]==now)? 1 : -1;
	}else if(arr[2]==arr[5]&&arr[5]==arr[8]&&arr[2]!=0){
		return (arr[2]==now)? 1 : -1;
	}else if(arr[0]==arr[4]&&arr[4]==arr[8]&&arr[0]!=0){
		return (arr[0]==now)? 1 : -1;
	}else if(arr[2]==arr[4]&&arr[4]==arr[6]&&arr[2]!=0){
		return (arr[2]==now)? 1 : -1;
	}else if(next.empty()){
		return 0;
	}
	
	vector<int> future;
	
	for(int i=0;i<next.size();i++){
		int newx=X+now*(intpow(3,8-next[i]));
		future.push_back(solve(newx));
	}
	sort(future.begin(),future.end());
	
	if(future[0]==-1){
		return 1;
	}else if(future[0]==0){
		return 0;
	}else return -1;

}

int main(){
	
	int TC; scanf("%d",&TC); 
	while(TC--){
		for(int i=0;i<20000;i++)cache[i]=99;
		string s[3]; cin>>s[0]>>s[1]>>s[2];
		int arr[9];
		for(int i=0;i<3;i++){
			arr[i*3]=trans(s[i][0]); arr[i*3+1]=trans(s[i][1]); arr[i*3+2]=trans(s[i][2]);
		}
		int x=0;
		for(int i=0;i<9;i++){
			x*=3; x+=arr[i];
		}
	
		int os=0,xs=0;
		int now;
		for(int i=8;i>=0;i--){
			if(arr[i]==1)xs++;
			else if(arr[i]==2)os++;
		}
		if(xs==os)now=1; else now=2;
		
		int res=solve(x);
		if(now==1){
			if(res==0){
				printf("TIE\n");
			}else if(res==1){
				printf("x\n");
			}else{
				printf("o\n");
			}
		}else{
			if(res==0){
				printf("TIE\n");
			}else if(res==-1){
				printf("x\n");
			}else{
				printf("o\n");
			}
		}
	}
	
	return 0;	
}
