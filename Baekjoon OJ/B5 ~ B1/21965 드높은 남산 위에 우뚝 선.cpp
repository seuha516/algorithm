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
	
	int n; scanf("%d",&n);
	int past=-1;
	int state=1;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);
		if(x>past){
			if(state!=1) state=-100;
		}else if(x==past){
			state=-100;
		}else{
			if(state==1) state=0;
		}
		past=x; 
	}
	if(state>=0) printf("YES");
	else printf("NO");
	
	return 0;
}


