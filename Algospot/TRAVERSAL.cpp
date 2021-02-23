#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int n;
vector<int> front,middle;

void print(vector<int>f,vector<int>m){
	if(f.size()==1){
		printf("%d ",f[0]); return;
	}
	int l=find(m.begin(),m.end(),f[0])-m.begin();
	int r=m.size()-l-1;
	
	if(l!=0)print(vector<int>(f.begin()+1,f.begin()+l+1),vector<int>(m.begin(),m.begin()+l));
	if(r!=0)print(vector<int>(f.begin()+l+1,f.end()),vector<int>(m.begin()+l+1,m.end()));
	printf("%d ",f[0]);
		
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		front.clear(); middle.clear();
		
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); front.push_back(x);
		}
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); middle.push_back(x);
		}
		
		print(front,middle); printf("\n");
		
	}
	
	
	return 0;
}
