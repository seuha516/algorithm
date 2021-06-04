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

int save[20][300000]={0,};

struct node{
	node *l,*r,*p;
	int value;
	char status;
	int num;
}*tree;
vector<node*> v;


int main(){
	
	int k; scanf("%d",&k); getchar();
	string s; cin >> s;
	
	int cnt=1; int match=1<<(k-cnt); int order=0;
	
	for(int i=0;i<((1<<k)-1);i++){
		save[cnt][order]=i;
		
		node* x=new node;
		if(cnt==1){
			x->status=s[i];
			x->value=s[i]=='?'?2:1;
			x->l=x->r=NULL;
			v.push_back(x);
		}else{
			x->p=NULL;
			x->status=s[i];
			x->l=v[save[cnt-1][order*2]];
			x->r=v[save[cnt-1][order*2+1]];
			x->l->p=x;
			x->r->p=x;
			x->value=s[i]=='0'?x->l->value:(s[i]=='1'?x->r->value:x->l->value+x->r->value);
			v.push_back(x);
		}
		x->num=i;
		
		match--; order++;
		if(match==0){
			cnt++;
			order=0;
			match=1<<(k-cnt);
		}
	}
	
	int q; scanf("%d",&q);
	for(int i=0;i<q;i++){
		int p; char c;
		scanf("%d %c",&p,&c); p--;
		
		v[p]->status=c;
		if(p<(1<<(k-1))) v[p]->value=c=='?'?2:1;
		else v[p]->value=c=='0'?v[p]->l->value:(c=='1'?v[p]->r->value:v[p]->l->value+v[p]->r->value);
		
		node* now=v[p]->p;
		
		while(now){
			now->value=now->status=='0'?now->l->value:(now->status=='1'?now->r->value:now->l->value+now->r->value);
			now=now->p;
		}
		
		printf("%d\n",v[(1<<k) - 2]->value);
	}

	return 0;
}

