#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define TEST 1

using namespace std;

int main(){
	
	int test_case; scanf("%d",&test_case);
	while(test_case--){
		int n,l; scanf("%d %d",&n,&l);
		vector<int> v;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x);
			v.push_back(x);
		}
		double dap=1511.0;
		for(int i=l;i<=n;i++){
			int hap=0;
			for(int j=0;j<i;j++){
				hap+=v[j];
				
			}
			dap=min(dap,(double)hap/(double)i);
			for(int j=i;j<n;j++){
				hap+=v[j]-v[j-i];
				dap=min(dap,(double)hap/(double)i);
			}
		}printf("%0.10lf\n",dap);
	}
	
    return 0;
}
