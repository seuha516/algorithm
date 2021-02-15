#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int tree[100005];
vector <int> seg_tree[400005];

void segmake(int node,int st,int end){
	if(st==end){
		seg_tree[node].push_back(tree[st]);
	}else{
		int mid=(st+end)/2;
		segmake(node*2,st,mid); segmake(node*2+1,mid+1,end);
		int size1=seg_tree[node*2].size();
		int size2=seg_tree[node*2+1].size();
		int cnt1=0; int cnt2=0;
		while(1){
			if(cnt1==size1){
				for(int i=cnt2;i<seg_tree[node*2+1].size();i++){
					seg_tree[node].push_back(seg_tree[node*2+1][i]);
				}
				break;
			}else if(cnt2==size2){
				for(int i=cnt1;i<seg_tree[node*2].size();i++){
					seg_tree[node].push_back(seg_tree[node*2][i]);
				}
				break;
			}
			int a=seg_tree[node*2][cnt1];
			int b=seg_tree[node*2+1][cnt2];
			if(a<=b){
				seg_tree[node].push_back(a); cnt1++;
			}else if(b<a){
				seg_tree[node].push_back(b); cnt2++;
			}
		}
	}	
}
int segfind(int node,int st,int end,int l,int r,int k){
	if(r<st||l>end){
		return 0;
	}else if(l<=st&&end<=r){
		int retval=0;
		retval=upper_bound(seg_tree[node].begin(),seg_tree[node].end(),k)-seg_tree[node].begin();
		retval=end-st-retval+1;
		return retval;
	}else{
		int mid=(st+end)/2;
		return segfind(node*2,st,mid,l,r,k)+segfind(node*2+1,mid+1,end,l,r,k);
	}
}
 
int main(){
	
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",tree+i);
	}
	segmake(1,0,n-1);
	
	int m; scanf("%d",&m);
	int past=0;
	
	for(int i=0;i<m;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		int dap=segfind(1,0,n-1,(a^past)-1,(b^past)-1,(c^past));
		printf("%d\n",dap);
		past=dap;
	}
	
	
	return 0;
}

