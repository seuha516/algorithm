#include <iostream>
#include <queue>

using namespace std;

int main() {
	int test;
	scanf("%d",&test);
	
	int n,m;
	queue<int> q;
	queue<int> sc;
	int temp;
	int k,kk,r,rr;
	int dap;
	int no;
	
	for(int i=1;i<=test;i++){
		while(q.empty()==0){
			q.pop();
			sc.pop();
		}
		dap=0;
	
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++){
			scanf("%d",&temp);
			q.push(j);
			sc.push(temp);
		}
		
		while(1){
			k=sc.front();
			sc.pop();
			kk=q.front();
			q.pop();
			no=0;
			
			for(int y=1;y<=sc.size();y++){
				r=sc.front();
				sc.pop();
				sc.push(r);
				if(r>k){
					no=1;
				}				
			}	
			if(no==1){
				sc.push(k);
				q.push(kk);
			}else{
				dap++;
				if(kk==m){
					printf("%d\n",dap);
					break;
				}
			}
		}		
	}
	
	
	return 0;
}
