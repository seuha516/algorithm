#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

struct splay_node{
	splay_node *l,*r,*p;
	int key,cnt;
}*tree;
void s_update(splay_node *x){
	x->cnt=1;
	if(x->l) x->cnt+=x->l->cnt;
	if(x->r) x->cnt+=x->r->cnt;
}
void s_rotate(splay_node* x){
	splay_node* p=x->p;
	splay_node* b=NULL;
	if(!p) return;
	if(x==p->l){
		p->l=b=x->r;
		x->r=p;
	}else{
		p->r=b=x->l;
		x->l=p;
	}
	x->p=p->p;
	p->p=x;
	if(b) b->p=p;
	(x->p? (p==x->p->l? x->p->l:x->p->r):tree)=x;
	s_update(p); s_update(x);
}
void s_splay(splay_node* x){
	while(x->p){
		splay_node *p=x->p;
		splay_node *g=p->p;
		if(g){
			if((x==p->l)==(p==g->l)) s_rotate(p);
			else s_rotate(x);
		}
		s_rotate(x);
	}
}
void s_insert(int key){
	splay_node* p=tree;
	splay_node** pp;
	if(!p){
		splay_node* x=new splay_node;
		tree=x;
		x->l=x->r=x->p=NULL;
		x->key=key;
		return;
	}
	while(1){
		if(key==p->key) return;
		if(key<p->key){
			if(!p->l){
				pp=&p->l; break;
			}
			p=p->l;
		}else{
			if(!p->r){
				pp=&p->r; break;
			}
			p=p->r;
		}
	}
	splay_node* x=new splay_node;
	*pp=x;
	x->l=x->r=NULL;
	x->p=p;
	x->key=key;
	s_splay(x);
}
bool s_find(int key){
	splay_node* p=tree;
	if(!p) return false;
	while(p){
		if(key==p->key) break;
		if(key<p->key){
			if(!p->l) break;
			p=p->l;
		}else{
			if(!p->r) break;
			p=p->r;
		}
	}
	s_splay(p);
	return key==p->key;
}
void s_delete(int key){
	if(!s_find(key)) return;
	splay_node* p=tree;
	if(p->l && p->r){
		tree=p->l; tree->p=NULL;
		splay_node *x=tree;
		while(x->r) x=x->r;
		x->r=p->r;
		p->r->p=x;
		delete p;
		return;
	}
	if(p->l){
		tree=p->l;
		tree->p=NULL;
		delete p;
		return;
	}
	if(p->r){
		tree=p->r;
		tree->p=NULL;
		delete p;
		return;
	}
	delete p;
	tree=NULL;
}
void s_kth(int k){
	splay_node* x=tree;
	while(1){
		while(x->l&&x->l->cnt>k) x=x->l;
		if(x->l) k-=x->l->cnt;
		if(!k--) break;
		x=x->r;
	}
	s_splay(x);
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		vector<int> v,dap; 
		for(int i=0;i<n;i++){int x; scanf("%d",&x); v.push_back(x);}
		for(int i=1;i<=n;i++) s_insert(i);
		for(int i=n-1;i>=0;i--){
			int point=i-v[i];
			s_kth(point);
			dap.push_back(tree->key);
			s_delete(tree->key);
		}
		for(int i=n-1;i>=0;i--) printf("%d ",dap[i]); printf("\n");
	}
	
	return 0;
}


