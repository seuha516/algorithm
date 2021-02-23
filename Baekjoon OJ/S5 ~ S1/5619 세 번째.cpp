#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647
#define LIMIT 100000

using namespace std;

int jari(int x){ // x의 자리수 (x > 0) 
	int ret=0;
	while(x){
		x/=10; ret++;
	}
	return ret;
}
int intpow(int x,int y){
	int ret=1;
	for(int i=0;i<y;i++){
		ret*=x;
	}
	return ret;
} 
int main(){
	
	int n; scanf("%d",&n);
	
	int a1=10005,a2=10010,a3=10015,a4=22222;
	
	while(n--){
		int x; scanf("%d",&x);
		if(x<a1){
			a4=a3; a3=a2; a2=a1; a1=x;
		}else if(x<a2){
			a4=a3; a3=a2; a2=x;
		}else if(x<a3){
			a4=a3; a3=x;
		}else if(x<a4){
			a4=x;
		}
	}
	
	vector<int> v;
	
	v.push_back(a1*intpow(10,jari(a2))+a2);
	v.push_back(a1*intpow(10,jari(a3))+a3);
	v.push_back(a1*intpow(10,jari(a4))+a4);
	v.push_back(a2*intpow(10,jari(a1))+a1);
	v.push_back(a2*intpow(10,jari(a3))+a3);
	v.push_back(a2*intpow(10,jari(a4))+a4);
	v.push_back(a3*intpow(10,jari(a2))+a2);
	v.push_back(a3*intpow(10,jari(a1))+a1);
	v.push_back(a3*intpow(10,jari(a4))+a4);
	v.push_back(a4*intpow(10,jari(a2))+a2);
	v.push_back(a4*intpow(10,jari(a3))+a3);
	v.push_back(a4*intpow(10,jari(a1))+a1);
	
	sort(v.begin(),v.end());
	
	printf("%d",v[2]);
	
	
	return 0;	
}


