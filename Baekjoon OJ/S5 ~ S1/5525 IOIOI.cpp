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

using namespace std;

int main(){	
	int n,m;
	scanf("%d %d",&n,&m); getchar();
	int kk=n;
	char c[m+2]={0,};
	int val[m+2]={0,};
	char pst[m+2]={0,};
	n=2*n+1;
	
	pst[0]='I';
	for(int i=1;i<n;i+=2){
		pst[i]='O';
		pst[i+1]='I';
	}

	int combo=-1;
	int dap=0;

	for(int i=0;i<m;i++){
		scanf("%c",c+i);

		if(c[i]==73){
			if(combo==-1){
			combo=0;
			}else if(combo%2==0){
			combo=0;
			}else{
				combo++;
			}
			
		}else{
			if(combo%2==0){
				combo++;
			}else{
				combo=-1;
			}
		}
			
		int realcombo=0;
		
		if(combo%2==0){
			realcombo=combo/2;
		}
		
		if(realcombo>=kk){
			dap++;
		}
	}
	printf("%d",dap);
	
	
	return 0;
}



