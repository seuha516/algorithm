#include <iostream>
#include <vector>

using namespace std;

vector<pair<int,int>> v;
int arr[1005];

int main(){
		
	int n; scanf("%d",&n); int t=987654321; int idx=-1;
	for(int i=0;i<n;i++){
		int x,y; scanf("%d %d",&x,&y); v.push_back({x,y});
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i]=max(arr[i],(v[i].first-v[j].first)*(v[i].first-v[j].first)+(v[i].second-v[j].second)*(v[i].second-v[j].second));
		}
		if(arr[i]<t){
			t=arr[i];
			idx=i;
		}
	}
	printf("%d %d",v[idx].first,v[idx].second);
	
	return 0;
}
