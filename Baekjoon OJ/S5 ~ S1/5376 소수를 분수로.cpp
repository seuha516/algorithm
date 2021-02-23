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

#define TEST 0

using namespace std;

long long GCD(long long a,long long b){
	long long t=a%b;
	if(t==0)return b;
	else return GCD(b,t);	
}

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		string s; cin >> s;
		
		long long i; long long t=1; long long x=0; long long ok=0;
		for(i=2;i<s.length();i++){
			if(s[i]=='('){
				ok=1;break;
			}
			t*=10;
			x*=10; x+=s[i]-'0';
		}		
		if(!ok){
			long long g=GCD(x,t);
			x/=g; t/=g;
			printf("%lld/%ld\n",x,t); continue;
		}
		
		long long j; long long tt=1; long long xx=0;
		for(j=i+1;j<s.length();j++){
			if(s[j]==')'){
				break;
			}
			tt*=10;
			xx*=10; xx+=s[j]-'0';
		}
		tt--; long long ttt=tt;tt*=t;	x*=ttt; t*=ttt; x+=xx;
		long long g=GCD(x,tt); x/=g; tt/=g;
		
		printf("%lld/%lld\n",x,tt);
		
	}
	
    return 0;
}



