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

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	int t;scanf("%d",&t); int c=0;
	while(t--){
		
		int a,b;scanf("%d %d",&a,&b);
		c++;
		
		if(a<=b){
			printf("Data Set %d:\nno drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=5*b){
			printf("Data Set %d:\ndrought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=25*b){
			printf("Data Set %d:\nmega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=125*b){
			printf("Data Set %d:\nmega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=625*b){
			printf("Data Set %d:\nmega mega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=3125*b){
			printf("Data Set %d:\nmega mega mega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=15625*b){
			printf("Data Set %d:\nmega mega mega mega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=78125*b){
			printf("Data Set %d:\nmega mega mega mega mega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=390625*b){
			printf("Data Set %d:\nmega mega mega mega mega mega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}else if(a<=1953125*b){
			printf("Data Set %d:\nmega mega mega mega mega mega mega mega drought\n",c); 
			if(t!=0){
				printf("\n");
			}
			continue;
		}
	
		
		
	}
	
return 0;}





