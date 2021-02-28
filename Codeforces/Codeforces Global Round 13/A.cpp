#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
#include <queue>
#include <map>
#define ll long long
#define ull unsigned long long

using namespace std;

vector<int> v;
int one,zero;

int main(){
	
	int n,q; scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
		if(x==1) one++;
		else zero++;
	}
	for(int i=0;i<q;i++){
		int x; scanf("%d",&x);
		if(x==1){
			int y; scanf("%d",&y); y--;
			if(v[y]==0){
				v[y]=1; zero--; one++;
			}else{
				v[y]=0; zero++; one--;
			}
		}else if(x==2){
			int y; scanf("%d",&y);
			if(one<y) printf("%d\n",0);
			else printf("%d\n",1);
		}
	}
	
	return 0;
}


