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

using namespace std;

vector <vector<int> > v;
int parent[100002];

void check(int a){
   
   for(int i=0;i<v[a].size();i++){
   		if(v[a][i]!=parent[a]){
			parent[v[a][i]]=a;
			check(v[a][i]);
		}
    }
}

int main(){   
   
   int n; scanf("%d",&n);
   
   for(int i=0;i<100001;i++){
		vector <int> vv;
		v.push_back(vv);
   }
   
   for(int i=0;i<n-1;i++){
      int a,b; scanf("%d %d",&a,&b);
      v[a].push_back(b);
      v[b].push_back(a);
   }
   
   check(1);
   for(int i=2;i<=n;i++){
   	printf("%d\n",parent[i]);
   }
   
   return 0;
}



