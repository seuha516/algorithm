#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>
#include <stack>

using namespace std;

char c[1003];

int main(){

	scanf("%s",c);
	
	int a=0;
	
	vector <char> v;
	for(int i=0;c[i]!=0;i++){
		v.push_back(c[i]);
	}
	
	
	for(int i=0;i<v.size();i++){
		if(v[i]=='*'||v[i]=='/'){
			int st,end;
			int a=0;
			for(int j=1;1;j++){
				if(i+j>=v.size()){
					end=v.size();break;
				}
				if(v[i+j]=='('){
					a++;
					if(a==0){
						end=i+j; break;
					}
				}			
				if(v[i+j]==')'){
					a--;
					if(a==0){
						end=i+j; break;
					}
				}
				if(v[i+j]>='A'&&v[i+j]<='Z'&&a==0){
					end=i+j; break;
				}
			}
			a=0;
			for(int j=1;1;j++){
				if(i-j<0){
					st=0;break;
				}
				if(v[i-j]==')'){
					a++;
					if(a==0){
						st=i-j; break;
					}
				}
				if(v[i-j]=='('){
					a--;
					if(a==0){
						st=i-j; break;
					}
				}
				if(v[i-j]>='A'&&v[i-j]<='Z'&&a==0){
					st=i-j; break;
				}	
			}
			v.insert(v.begin()+end+1,')');
			v.insert(v.begin()+st,'(');
			i++;
		}
	}
	
	for(int i=0;i<v.size();i++){
		if(v[i]=='+'||v[i]=='-'){
			int st,end;
			int a=0;
			for(int j=1;1;j++){
				if(i+j>=v.size()){
					end=v.size();break;
				}
				if(v[i+j]=='('){
					a++;
					if(a==0){
						end=i+j; break;
					}
				}			
				if(v[i+j]==')'){
					a--;
					if(a==0){
						end=i+j; break;
					}
				}
				if(v[i+j]>='A'&&v[i+j]<='Z'&&a==0){
					end=i+j; break;
				}
			}
			a=0;
			for(int j=1;1;j++){
				if(i-j<0){
					st=0;break;
				}
				if(v[i-j]==')'){
					a++;
					if(a==0){
						st=i-j; break;
					}
				}
				if(v[i-j]=='('){
					a--;
					if(a==0){
						st=i-j; break;
					}
				}
				if(v[i-j]>='A'&&v[i-j]<='Z'&&a==0){
					st=i-j; break;
				}	
			}
			v.insert(v.begin()+end+1,')');
			v.insert(v.begin()+st,'(');
			i++;
			
		}
	}
	
	stack <char> s;
	stack <char> q;
	stack <char> test;
	
	int aaaa=0;
	
	int mmm=v.size();
	
	for(int i=0;i<mmm;i++){
		char x=v[i];
		
		if(x>='A'&&x<='Z'){
			printf("%c",x);
		}else if(x=='*'||x=='+'||x=='-'||x=='/'||x=='('){
			s.push(x);
		}else if(x==')'){
			while(s.top()!='('){
				printf("%c",s.top()); s.pop();
			}s.pop();
		}
	}

	return 0;	
}


