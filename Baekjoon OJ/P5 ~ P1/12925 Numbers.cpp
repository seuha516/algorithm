#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

int main(){	
	
	int TC; scanf("%d",&TC);
	for(int i=1;i<=TC;i++){
		
		int n; scanf("%d",&n);
		bool visit[40]={0,};
		
		if(n==2){
			printf("Case #%d: 027\n",i); continue;
		}
		n-=2;
		
		int ttt=0;
		while(n){			
			if(n%2==1){
				visit[ttt]=true;
			}
			ttt++; 
			n/=2;
		}
		
		long long hang[2][2]={{6,-4},{1,0}};
		long long dap[2][2]={{1,0},{0,1}};
		long long temp[2][2]={0,};
		
		for(int j=0;j<40;j++){
			if(visit[j]){
				for(int xx=0;xx<2;xx++){
					for(int yy=0;yy<2;yy++){
						temp[xx][yy]=((dap[xx][0]*hang[0][yy])%1000)+((dap[xx][1]*hang[1][yy])%1000);			
					}
				}
				for(int xx=0;xx<2;xx++){
					for(int yy=0;yy<2;yy++){
						dap[xx][yy]=temp[xx][yy];	
					}
				}
			}
			for(int xx=0;xx<2;xx++){
				for(int yy=0;yy<2;yy++){
					temp[xx][yy]=((hang[xx][0]*hang[0][yy])%1000)+((hang[xx][1]*hang[1][yy])%1000);			
				}
			}
			for(int xx=0;xx<2;xx++){
				for(int yy=0;yy<2;yy++){
					hang[xx][yy]=temp[xx][yy];	
				}
			}
		}
		
		long long realdap=dap[0][0]*28+dap[0][1]*6;
		realdap%=1000;
		if(realdap<=0){
			realdap+=1000;
		}
		realdap--;
		
		printf("Case #%d: ",i);		
		if(realdap>100){
			
		}else if(realdap>10){
			printf("0");
		}else if(realdap>1){
			printf("00");
		}else{
			printf("000");
		}
		printf("%d\n",realdap);
		
	}
	
	return 0;
}
 
