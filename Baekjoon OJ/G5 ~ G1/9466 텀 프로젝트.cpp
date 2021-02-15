#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int arr[100005];
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]); arr[i]--;
		}
		
		bool used[100005]={0,};
		int dap=0;
		
		for(int i=0;i<n;i++){
			int now=i; 
			if(used[now]) continue;
			
			vector<int> v;
			while(1){
				v.push_back(now);
				used[now]=1;
				now=arr[now];
				if(used[now]){
					int meet=-1;
					for(int i=0;i<v.size();i++){
						if(v[i]==now){
							meet=i; break;
						}
					}
					if(meet==-1)meet=v.size();
					dap+=meet;
					break;
				}
			}			
		}
		printf("%d\n",dap);
		
	}
	
	return 0;
}

