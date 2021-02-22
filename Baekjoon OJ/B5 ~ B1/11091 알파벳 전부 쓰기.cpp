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

int main(){
	
	int t;scanf("%d",&t); getchar();
	
	while(t--){
		
		char c[300]={0,};
		scanf("%[^\n]s",c); getchar();
		
		if(c[0]=='*') break;
		
		bool alp[27]={0,};
		
		for(int i=0;c[i]!=0;i++){
			if(c[i]>='a' && c[i]<='z') alp[c[i]-'a']=1;
			if(c[i]>='A' && c[i]<='Z') alp[c[i]-'A']=1;
		}
		
		int ok=1;
		for(int i=0;i<26;i++){
			if(!alp[i]){
				ok=0;
			}
		}
		if(ok){
			printf("pangram\n");
		}else{
			printf("missing ");
			for(int i=0;i<26;i++){
				if(!alp[i]) printf("%c",i+'a');
			}printf("\n");
		}
	}
	
	return 0;
}

