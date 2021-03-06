#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

int h,m,a,b;
bool reflect(int x,int y){
	int t[4],T[4];
	t[0]=x/10; t[1]=x%10; t[2]=y/10; t[3]=y%10;
	for(int i=0;i<4;i++){
		if(t[i]==3||t[i]==4||t[i]==6||t[i]==7||t[i]==9) return 0;
		int next;
		if(t[i]<2||t[i]==8) next=t[i];
		else if(t[i]==2 || t[i]==5) next=7-t[i];
		T[3-i]=next;
	}
	x=T[0]*10+T[1]; y=T[2]*10+T[3];
	if(x>=h||y>=m) return 0;
	else return 1;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		scanf("%d %d %d:%d",&h,&m,&a,&b);
		
		while(1){
			if(reflect(a,b)){
				printf("%02d:%02d\n",a,b); break;
			}
			b++; a+=b/m; b%=m; a%=h;
		}
		
	}
	
	return 0;
}

