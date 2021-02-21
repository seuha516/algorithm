#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int checkodd(int a, int b, int c){
	
	int len=a-1;
	int order=(b+1)/2;

	if(len==3){
		if((order+c)%2==0){
			return 0;
		}else{
			return 1;
		}		
	}else{
		if(b<a/2){ //upper side 
			int y=a/4;
			if(c<=y||a-y<=c){
				return 0;
			}else{
				return checkodd(a/2,b,c-y);
			}
		}else{	//lower side 
			if(c==a/2){
				return 0;
			}else if(c>a/2){
				return checkodd(a/2,b-(a/2),c-(a/2));
			}else{
				return checkodd(a/2,b-(a/2),c);
			}
		}
	}
}

int checkeven(int a, int b, int c){
	
	int order=b/2;
	
	if(a==4){
		if(order==1&&(c==1||c==4)){
			return 0;
		}else return 1;
	}else{
		if(b<=a/2){ //upper side 
			int y=a/4;
			if(c<=y||a-y<c){
				return 0;
			}else{
				return checkeven(a/2,b,c-y);
			}
		}else{	//lower side 

			if(c>a/2){
				return checkeven(a/2,b-(a/2),c-(a/2));
			}else{
				return checkeven(a/2,b-(a/2),c);
			}
		}
	}
}

int main(){
    
    int x; scanf("%d",&x);
    
    int num=x/3;
    
    if(num==1){
    	printf("  *   \n * *  \n*****");
	}else if(num==2){
		printf("     *      \n    * *     \n   *****    \n  *     *   \n * *   * *  \n***** *****");
	}else{
		
		for(int i=1;i<=num;i++){
			
			if(i%2==1){
				printf("   ");	
				for(int j=1;j<=num-1;j++){
					if(checkodd(num,i,j)){
						printf("  *   ");
					}else{
						printf("      ");
					}
				}
				printf("   \n");	
				printf("   ");	
				for(int j=1;j<=num-1;j++){
					if(checkodd(num,i,j)){
						printf(" * *  ");
					}else{
						printf("      ");
					}
				}
				printf("   \n");
				printf("   ");	
				for(int j=1;j<=num-1;j++){
					if(checkodd(num,i,j)){
						printf("***** ");
					}else{
						printf("      ");
					}
				}
				printf("   \n");
									
			}else{
				
				for(int j=1;j<=num;j++){
					if(checkeven(num,i,j)){
						printf("  *   ");
					}else{
						printf("      ");
					}
				}
				printf("\n");		
				for(int j=1;j<=num;j++){
					if(checkeven(num,i,j)){
						printf(" * *  ");
					}else{
						printf("      ");
					}
				}
				printf("\n");
				for(int j=1;j<=num;j++){
					if(checkeven(num,i,j)){
						if(i==num&&j==num){
							printf("*****");
						}else{
							printf("***** ");
						}
					}else{
						if(j==num){
							printf("      ");
						}else{
							printf("      ");
						}
					}
				}
				if(i!=num){
					printf("\n");
				}
			}			
		}
	}
	
    return 0;
}

