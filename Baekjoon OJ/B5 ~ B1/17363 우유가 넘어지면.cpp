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

using namespace std;
	
char arr[1001][1001];	

int main(){	

	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		char ccc[152]; scanf("%s",&ccc); char cc;
		for(int j=0;j<m;j++){
			char c=ccc[j];
			if(c==45){
				cc=124;
			}else if(c==124){
				cc=45;
			}else if(c==47){
				cc=92;
			}else if(c==92){
				cc=47;
			}else if(c==94){
				cc=60;
			}else if(c==60){
				cc=118;
			}else if(c==118){
				cc=62;
			}else if(c==62){
				cc=94;
			}else{
				cc=c;
			}
			arr[m-j-1][i]=cc;
		}		
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%c",arr[i][j]);
		}printf("\n");
	}
	
	return 0;
}


