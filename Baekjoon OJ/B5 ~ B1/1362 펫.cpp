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

int main(){
	
	for(int TC=1;1;TC++){
		int a,b; scanf("%d %d",&a,&b); getchar(); if(a==0&&b==0) break;
		bool die=0;
		while(1){
			char x; int y; scanf("%c %d",&x,&y); getchar();
			if(x=='#'&&y==0){
				if(die){
					printf("%d RIP\n",TC);
				}else if(a*2>b && a<b*2){
					printf("%d :-)\n",TC);
				}else{
					printf("%d :-(\n",TC);
				}
				break;
			}else if(x=='E'){
				b-=y;
				if(b<=0){
					die=1;
				}
			}else{
				b+=y;
			}
		}
	}
	
	return 0;
}

