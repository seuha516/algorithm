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

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int m,c,in; scanf("%d %d %d",&m,&c,&in); getchar();
		string code,input; cin >> code >> input; 
		
		map<int,int> portal; stack<int> st;
		for(int i=0;i<c;i++){
			if(code[i]=='['){
				st.push(i);
			}else if(code[i]==']'){
				portal[i]=st.top(); portal[st.top()]=i;
				st.pop();
			}
		}
		
		vector<int> arr(m,0);
		int pnt=0, inputpnt=0;
		int process=0;
		int loop=-1;
		
		for(int i=0;i<c;i++){
			char now=code[i];
			if(now=='-'){
				arr[pnt]=(arr[pnt]+255)%256;
			}else if(now=='+'){
				arr[pnt]=(arr[pnt]+1)%256;
			}else if(now=='<'){
				pnt+=m-1; pnt%=m;
			}else if(now=='>'){
				pnt++; pnt%=m;
			}else if(now=='['){
				if(arr[pnt]==0) i=portal[i];
			}else if(now==']'){
				if(arr[pnt]!=0){
					loop=max(loop,i);
					i=portal[i];
				}
			}else if(now=='.'){
				//printf(">> %d\n",arr[pnt]);
			}else if(now==','){
				arr[pnt]=(inputpnt>=in? 255:input[inputpnt]);
				inputpnt++;
			}
			//printf("[%d¹øÂ°] now(code[%d]) = %c, pnt=%d, inputpnt=%d, arr: ",process++,i,now,pnt,inputpnt);
			//for(int i=0;i<min(m,25);i++) printf("%d ",arr[i]); if(m>25)printf("......"); printf("\n");
			process++;
			if(process==50000000) loop=-1;
			if(process>=100000000){
				printf("Loops %d %d\n",portal[loop],loop); goto next;
			}
		}
		
		printf("Terminates\n");
		next:;
	}
	
	return 0;
}

