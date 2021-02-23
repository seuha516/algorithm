#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n,m;
	int mm[500005]={0,};
	scanf("%d",&n);
	vector<int> vc(n);
	for(int i=0;i<n;i++){
		scanf("%d",&vc[i]);
	}
	scanf("%d",&m);
	sort(vc.begin(),vc.end());
	
	int t;
	int lo, up;
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		printf("%d ",upper_bound(vc.begin(),vc.end(),t)-lower_bound(vc.begin(),vc.end(),t));
	}
	

	return 0;
}
