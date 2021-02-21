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

int main(){
	
	int t;scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int a,b; scanf("%d %d",&a,&b);
		printf("Case %d: ",i);
		
		if(a==1&&b==1){
			printf("Habb Yakk");
		}else if(a==2&&b==2){
			printf("Dobara");
		}else if(a==3&&b==3){
			printf("Dousa");
		}else if(a==4&&b==4){
			printf("Dorgy");
		}else if(a==5&&b==5){
			printf("Dabash");
		}else if(a==6&&b==6){
			printf("Dosh");
		}else if(a+b==11){
			printf("Sheesh Beesh");
		}else{
			
			int x=max(a,b);
			
			if(x==1){
				printf("Yakk");
			}else if(x==2){
				printf("Doh");
			}else if(x==3){
				printf("Seh");
			}else if(x==4){
				printf("Ghar");
			}else if(x==5){
				printf("Bang");
			}else if(x==6){
				printf("Sheesh");
			}
			printf(" ");
			x=min(a,b);
			
			if(x==1){
				printf("Yakk");
			}else if(x==2){
				printf("Doh");
			}else if(x==3){
				printf("Seh");
			}else if(x==4){
				printf("Ghar");
			}else if(x==5){
				printf("Bang");
			}else if(x==6){
				printf("Sheesh");
			}
			
		}
		printf("\n");
	}

return 0;}

