#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <queue>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		unsigned int k; int n; scanf("%u %d",&k,&n);
		unsigned int hap=0;	int dap=0;
		queue<unsigned int> q;
		
		unsigned int past=1983U;
		for(int i=0;i<n;i++){
			q.push(past%10000U+1U); hap+=past%10000U+1U;
			while(hap>k){
				hap-=q.front(); q.pop();
			}
			if(hap==k) dap++;
			past=past*214013U+2531011U;
		}
		printf("%d\n",dap);
	}	
	
	return 0;
}
