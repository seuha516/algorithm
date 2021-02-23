#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

queue <int> q;

int main() {
	
	char c1[]="push";
	char c2[]="pop";
	char c3[]="size";
	char c4[]="empty";
	char c5[]="front";
	char c6[]="back";
	
	int t;scanf("%d",&t);
	while(t--){
		
		char c[20]={0,}; scanf("%s",c);
		
		if(strcmp(c,c1)==0){
			int x; scanf("%d",&x);
			q.push(x);
		}else if(strcmp(c,c2)==0){
			if(q.empty()) printf("-1\n");
			else{
				printf("%d\n",q.front()); q.pop();
			}
		}else if(strcmp(c,c3)==0){
			printf("%d\n",q.size());
		}else if(strcmp(c,c4)==0){
			printf("%d\n",q.empty());
		}else if(strcmp(c,c5)==0){
			if(q.empty()) printf("-1\n");
			else printf("%d\n",q.front());
		}else if(strcmp(c,c6)==0){
			if(q.empty()) printf("-1\n");
			else printf("%d\n",q.back());
		}
			
		
	}
	
	return 0;
	
}
