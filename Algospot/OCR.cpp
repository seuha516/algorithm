#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

#define TEST 1

using namespace std;

int m,q; 
vector<string> word; // 출현 가능 단어 
vector<double> first_p; // 첫 출현 확률
vector<vector<double> > next_p; // i번 단어 다음이 j번 단어일 확률 
vector<vector<double> > mistake_p; // i번 단어를 j번 단어로 분류할 확률 

vector<int> target; // 타겟 
vector<int> dap; // 답 


double cache[102][502];
int trace[102][502];

double flow(int a,int b,int c){ //전 단어가 word[a]이고 지금 단어가 word[b], 지금 타겟이 word[c]
	double ret=0.0; 
	if(a==501){
		ret+=first_p[b];
	}else{
		ret+=next_p[a][b];
	}
	ret+=mistake_p[b][c];
	return ret;
}

double next(int s,int past,int len){ // dap[s-1]이 word[past]일 때, 나머지를 완성해서 나온 확률 최댓값 
	
	double &ret=cache[s][past]; 
	if(ret!=1.0) return ret;
	if(s==len){
		return ret=0.0;
	}
	ret=-1e200;
	for(int i=0;i<m;i++){
		double hoobo=next(s+1,i,len) + flow(past,i,target[s]);
		if(hoobo>ret){
			ret=hoobo;
			trace[s][past]=i;
		}
	}
	
	return ret;
}

int main(){
	
	scanf("%d %d",&m,&q); // m: 출현 가능 단어 수 , q: 처리할 문장 수 
	for(int i=0;i<m;i++){	char c[12]; scanf("%s",c); word.push_back(c);	}
	for(int i=0;i<m;i++){	double x; scanf("%lf",&x); x=log(x); first_p.push_back(x);	}
	for(int i=0;i<m;i++){ 
		next_p.push_back(vector<double>());
		for(int j=0;j<m;j++){ double x; scanf("%lf",&x); x=log(x); next_p[i].push_back(x); }	
	}
	for(int i=0;i<m;i++){ 
		mistake_p.push_back(vector<double>());
		for(int j=0;j<m;j++){ double x; scanf("%lf",&x); x=log(x); mistake_p[i].push_back(x); }	
	}
	for(int i=0;i<q;i++){
		
		while(!target.empty())target.pop_back();
		while(!target.empty())dap.pop_back();
		for(int j=0;j<102;j++){for(int k=0;k<502;k++){ cache[j][k]=1.0; trace[j][k]=-1;	} 	}
		
		int len; scanf("%d",&len);
		for(int j=0;j<len;j++){
			char c[12]; scanf("%s",c); string x=c;
			for(int k=0;k<m;k++){
				if(x==word[k]){
					target.push_back(k); break;
				}
			}
		}
		next(0,501,len);
		int tt=0,ttt=501;
		while(1){
			printf("%s ",word[trace[tt][ttt]].c_str());
			 ttt=trace[tt][ttt]; tt++;
			if(tt==len) break;
		}printf("\n");		
	} 
	
    return 0;
}

