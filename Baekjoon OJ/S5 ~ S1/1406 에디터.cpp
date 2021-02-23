#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	
	char c[100005];
	scanf("%s",c);
	int x;
	char moon[1000005]={0};
	int link[1000005]={0};
	int pastlink[1000005]={0};
	int t=strlen(c);

	link[0]=1;
	for(int i=1;i<=t;i++){
		moon[i]=c[i-1];
		link[i]=i+1;
		pastlink[i]=i-1;
		if(i==t){
			link[i]=-1;
		}
	}
	int llen=strlen(c);
	
	
	int cursor=t;
	int m; scanf("%d",&m);
	
	int point=llen;
	
	for(int i=0;i<m;i++){
		getchar();
		char wh; scanf("%c",&wh);
		
		if(wh=='L'){
			if(point){
				point=pastlink[point];
				cursor--;
			}
		}else if(wh=='D'){
			if(link[point]!=-1){
				point=link[point];
				cursor++;
			}
		}else if(wh=='B'){
			if(cursor){
				
				link[pastlink[point]]=link[point];
				pastlink[link[point]]=pastlink[point];
				point=pastlink[point];
				
				cursor--;
				t--;
			}
		}else if(wh=='P'){
			getchar();
			char qq;scanf("%c",&qq);
			moon[++llen]=qq;
			pastlink[link[point]]=llen;
			link[llen]=link[point];
			link[point]=llen;
			pastlink[llen]=point;
			point=llen;
			
			
			cursor++;
			t++;
		}
	}

	x=0;
	while(1){
		x=link[x];
		if(x==-1){
			break;
		}
		printf("%c",moon[x]);
	}
	
	
	return 0;
}
