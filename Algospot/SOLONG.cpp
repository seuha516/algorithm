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

bool compare(const pair<int,string>& a,const pair<int,string>& b){
	if(a.first==b.first) return a.second<b.second;
	else return a.first>b.first;
}

struct trie_node{
	trie_node* children[26];
	int terminal,first;
	trie_node(){
		terminal=-1; first=-1;
		memset(children,0,sizeof(children));
	}
	~trie_node(){
		for(int i=0;i<26;i++) if(children[i]) delete children[i];
	}
	void insert(const char* key,int id){
		if(first==-1) first=id;\
		if(*key==0) terminal=id;
		else{
			int next=*key-'A';
			if(children[next]==NULL) children[next]=new trie_node();
			children[next]->insert(key+1,id);
		}
	}
	trie_node* find(const char* key){
		if(*key==0) return this;
		int next=*key-'A';
		if(children[next]==NULL) return NULL;\
		return children[next]->find(key+1);
	}
	int type(const char* key,int id){
		if(*key==0) return 0;
		if(first==id) return 1;
		int next=*key-'A';
		return 1+children[next]->type(key+1,id);
	}
};

int cnt_key(trie_node* T,const char* word){
	trie_node* node=T->find(word);
	if(node==NULL||node->terminal==-1) return strlen(word);
	return T->type(word,node->terminal);
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		
		vector<pair<int,string>> v;
		for(int i=0;i<n;i++){
			char c[12]={0,}; int r;
			scanf("%s %d",c,&r); getchar();
			string s=c;
			v.push_back({r,s});
		}
		sort(v.begin(),v.end(),compare);
		
		trie_node* T=new trie_node();		
		for(int i=0;i<n;i++){\
			T->insert(v[i].second.c_str(),i);
		}
		T->first=-1;
		
		int dap=m-1;
		for(int i=0;i<m;i++){
			char c[12]={0,}; scanf("%s",c);
			string s=c;
			dap+=cnt_key(T,s.c_str());
		}
		printf("%d\n",dap);	
	}
	
	return 0;
}



