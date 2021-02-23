#include <iostream>
#include <queue>
#include <deque>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
	char input[100005]; int n; char num[400005];
	int test;scanf("%d",&test); deque<int> dd;
	int rev,err;
	int t;
	
	for(int i=1;i<=test;i++){
		for(int y=0;y<100005;y++){
			input[y]=0;
		} 
		while(dd.empty()==0){
			dd.pop_front();
		}
		scanf("%s",input);
		scanf("%d",&n);
		scanf("%s",num);
		rev=1; err=0;
		char *pch=strtok(num, "[,]");
		while(pch!=NULL){
			dd.push_back(atoi(pch));
			pch=strtok(NULL,"[,]");
		}
		for(int j=0;input[j]!=0;j++){
			if(input[j]=='R'){
				rev*=(-1);
			}else{
				if(dd.empty()==1){
					err=1; break;
				}else{
					if(rev==1){
						dd.pop_front();
					}else{
						dd.pop_back();
					}
				}
			}
		}
		if(err==1){
			printf("error\n");
		}else{
			printf("[");
			while(dd.empty()==0){
				if(rev==1){
					printf("%d",dd.front());
					dd.pop_front();
				}else{
					printf("%d",dd.back());
					dd.pop_back();
				}
				
				if(dd.size()!=0){
					printf(",");
				}
			}
			printf("]\n");
		}
	}
	
	return 0;
}
