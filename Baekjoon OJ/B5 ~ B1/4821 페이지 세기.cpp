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
#include <deque>

#define TEST 0
#define intmax 2147483647

using namespace std;

int main(){
	
	while(1){
		int x; scanf("%d",&x); if(x==0)break;
		int arr[10005]={0,};
		
		string s; cin >> s; s+=",";
		
		int st=0,end=0; int temp=0;
		int pnt=0;
		
		for(int i=0;i<s.length();i++){
			char c=s[i];
			if(c==','){
				if(pnt==1){
					end=temp; temp=0;
					for(int j=st;j<=end;j++){
						arr[j]=1;
					}
				}else{
					arr[temp]=1;
				}
				pnt=0;
				temp=0;
			}else if(c=='-'){
				if(pnt==0){
					st=temp; temp=0; pnt=1;
				}else{
					
				}
			}else{
				temp*=10; temp+=c-'0';
			}
		}
		int dap=0;		
		for(int i=1;i<=x;i++){
			dap+=arr[i];
		}
		printf("%d\n",dap);
	}
	return 0;	
}

