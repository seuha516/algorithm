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

int num=0;

struct trie_node{
	trie_node* children[26];
	int terminal;
	int no;
	vector<trie_node*> next;
	trie_node* fail;
	vector<int> output;
	trie_node(){
		terminal=-1;
		no=num; num++;
		next.resize(26);
		memset(children,0,sizeof(children));
	}
	~trie_node(){
		for(int i=0;i<26;i++) if(children[i]) delete children[i];
	}
	void insert(const char* key,int id){
		if(*key==0) terminal=id;
		else{
			int next=*key-'a';
			if(children[next]==NULL){
				children[next]=new trie_node();
			}
			children[next]->insert(key+1,id);
		}
	}
	trie_node* find(const char* key){
		if(*key==0) return this;
		int next=*key-'a';
		if(children[next]==NULL) return NULL;
		return children[next]->find(key+1);
	}
};
void make_failfunc(trie_node* root){
	queue<trie_node*> q;
	root->fail=root;
	q.push(root);
	while(!q.empty()){
		trie_node* here=q.front(); q.pop();
		for(int i=0;i<26;i++){
			trie_node* child=here->children[i];
			if(!child) continue;
			if(here==root) child->fail=root;
			else{
				trie_node* temp=here->fail;
				while(temp!=root&&temp->children[i]==NULL){
					temp=temp->fail;
				}
				if(temp->children[i]) temp=temp->children[i];
				child->fail=temp;
			}
			child->output=child->fail->output;
			if(child->terminal!=-1) child->output.push_back(child->terminal);
			q.push(child);
		}
	}
}
vector<pair<int,int>> ahocorasick(const string &s,trie_node* root){
	vector<pair<int,int>> ret;
	trie_node* state=root;
	for(int i=0;i<s.size();i++){
		int chr=s[i]-'a'; 
		while(state!=root&&state->children[chr]==NULL) state=state->fail; 
		if(state->children[chr]) state=state->children[chr];
		for(int j=0;j<state->output.size();j++) ret.push_back({i,state->output[j]});
	}
	return ret;
}

int cache[101][1020];
int cnt(int len,trie_node* state){
	if(state->output.size()) return 0;
	if(len==0) return 1;
	int &ret=cache[len][state->no];
	if(ret!=-1) return ret;
	ret=0;
	for(int i=0;i<26;i++){
		ret+=cnt(len-1,state->next[i]); ret%=10007;
	}
	return ret;
}
void maketable(trie_node* here){
	for(int i=0;i<26;i++){
		trie_node* next=here;
		while(next!=next->fail&&next->children[i]==NULL) next=next->fail;
		if(next->children[i]) next=next->children[i];
		here->next[i]=next;
		if(here->children[i]) maketable(here->children[i]);
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		num=0; memset(cache,-1,sizeof(cache));
		int n,m; scanf("%d %d",&n,&m);
		trie_node* T=new trie_node();
		for(int i=0;i<m;i++){
			char c[12]={0,}; scanf("%s",c);
			T->insert(c,i);
		}
		make_failfunc(T);
		maketable(T);
		printf("%d\n",cnt(n,T));	
	}
	
	return 0;
}


