#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

struct Tree{
	int x,y,r,level;
	Tree* parent;
	vector<Tree*> children;
};
int height(Tree *x){
	int h=0;
	for(int i=0;i<x->children.size();i++){
		h=max(h,height(x->children[i])+1);
	}
	return h;
}

bool isin(const Tree *a, const Tree *b){
	int dis=(a->x-b->x)*(a->x-b->x) + (a->y-b->y)*(a->y-b->y);
	return dis<(a->r-b->r)*(a->r-b->r);
}	

bool compare(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b){
	if(a.first==b.first){
		return a.second.first>b.second.first; 
	}else{
		return a.first>b.first; 
	} 
}

int go(Tree *x){
	int childnum=(x->children).size();
	if(childnum==0) return 0;
	else if(childnum==1){
		return height(x);
	}else{
		vector<int> deep;
		for(int i=0;i<childnum;i++){
			deep.push_back(height(x->children[i]));
		}sort(deep.begin(),deep.end());
		return deep[deep.size()-1]+deep[deep.size()-2]+2;
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int n; scanf("%d",&n);
		int x0,y0,r0; scanf("%d %d %d",&x0,&y0,&r0);
		Tree t0; t0.x=x0; t0.y=y0; t0.r=r0; t0.level=0;
		
		vector<pair<int,pair<int,int> > > wall;
		for(int i=1;i<n;i++){
			int x,y,r; scanf("%d %d %d",&x,&y,&r);
			wall.push_back({r,{x,y}});
		}sort(wall.begin(),wall.end(),compare);
		
		
		Tree T[205];
		
		for(int i=0;i<n-1;i++){
			int x=wall[i].second.first,y=wall[i].second.second,r=wall[i].first;
			Tree *papa=&t0; 
			Tree *newt=&T[i]; newt->x=x; newt->y=y; newt->r=r;
			
			while(1){
				bool find=0; int papa_size=papa->children.size();
				for(int j=0;j<papa_size;j++){
					if(isin((papa->children)[j],newt)){
						find=1; papa=(papa->children[j]); break;
					}
				}
				if(!find){
					newt->level=papa->level+1;
					newt->parent=papa;
					(papa->children).push_back(newt);
					break;
				}
			}
		}
		
		int dap=0;
		for(int i=0;i<n-1;i++){
			dap=max(dap,go(&(T[i])));
		}dap=max(dap,go(&t0));
		
		printf("%d\n",dap);
		
	}
	
	return 0;
}
