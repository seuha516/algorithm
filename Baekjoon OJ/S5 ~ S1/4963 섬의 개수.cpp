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
	
int arr[52][52]; bool visit [52][52];
int w,h;

void pr(int w,int h){
	printf("\n=============\n");
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");	
	}
	printf("=============\n\n");
}

int x[8]={-1,1,0,0,1,1,-1,-1};
int y[8]={0,0,-1,1,1,-1,1,-1};

int check(int a,int b,int m){
	int aa=a+x[m]; int bb=b+y[m];
	
	if(aa<0||aa>h-1||bb<0||bb>w-1){
		return 0;
	}else{
		
		if(visit[aa][bb]){
			return 0;
		}else if(arr[aa][bb]){
			return 1;
		}else{
			return 0;
		}
	}
}

int main(){	

	while(1){
		
		scanf("%d %d",&w,&h);
		if(w==0&&h==0){
			break;
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				scanf("%d",&arr[i][j]);
			}			
		}
		queue <int> q1; queue <int> q2;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				visit[i][j]=0;
			}			
		}
			
		int dap=0;
		
		while(1){			
			int jonjae=0;
			
			for(int i=0;i<h;i++){
				for(int j=0;j<w;j++){
					if(arr[i][j]&&!visit[i][j]){
						q1.push(i); q2.push(j); visit[i][j]=1;
						jonjae=1;dap++; break;
					}
				}	
				if(jonjae){
					break;
				}		
			}
			if(!jonjae){
				break;
			}else{
				while(1){
					int aa=q1.front(); int bb=q2.front();
					q1.pop(); q2.pop();
					for(int i=0;i<8;i++){
						if(check(aa,bb,i)){
							int aaa=aa+x[i]; int bbb=bb+y[i];
							q1.push(aaa);q2.push(bbb);visit[aaa][bbb]=1;				
						}
					}
					if(q1.empty()){
						break;
					}
				}
			}
		}
		
		printf("%d\n",dap);
	}
	
	return 0;
}



