#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <set>
#include <utility>
#define ll long long
#define ull unsigned long long

using namespace std;

vector<ll> soo;

void go(vector<int> vec){
	int vecsize=vec.size();
	if(vecsize==1){
		ll res=(ll)(vec[0]);
		soo.push_back(res);
		return;
	}
	for(int a=0;a<vecsize-1;a++){
		for(int b=a+1;b<vecsize;b++){
			vector<int> next;
			int t1,t2;
			for(int k=0;k<vecsize;k++){
				if(k==a){
					t1=vec[k];
				}else if(k==b){
					t2=vec[k];
				}else{
					next.push_back(vec[k]);
				}
			}
			next.push_back(t1+t2); go(next); next.pop_back();
			next.push_back(t1-t2); go(next); next.pop_back();
			next.push_back(t2-t1); go(next); next.pop_back();
			next.push_back(t1*t2); go(next); next.pop_back();
			if(t2!=0&&t1%t2==0){
				next.push_back(t1/t2); go(next); next.pop_back();
			}
			if(t1!=0&&t2%t1==0){
				next.push_back(t2/t1); go(next); next.pop_back();
			}
		}
	}
}

int main(){
	
	for(int TC=1;1;TC++){
		
		soo.clear();
		
		vector<int> v;
		for(int i=0;i<4;i++){int x; scanf("%d",&x); v.push_back(x);}
		if(v[0]+v[1]+v[2]+v[3]==0) break;
		
		go(v);
		sort(soo.begin(),soo.end());
		soo.erase(unique(soo.begin(),soo.end()),soo.end());
		
		ll m=soo[0],M=soo[0],len=1;
		ll tempm=m,tempM=M,templen=1;
		for(int i=1;i<soo.size();i++){
			if(soo[i-1]+1==soo[i]){
				templen++;
			}else{
				if(templen>=len){
					len=templen; m=tempm, M=soo[i-1];
				}
				tempm=soo[i]; templen=1;
			}
		}
		if(templen>=len){
			len=templen; m=tempm, M=soo[soo.size()-1];
		}
		printf("Case %d: %lld to %lld\n",TC,m,M);
	
	}
	
	return 0;
}

