#include <iostream>
#include <algorithm>
#include <cstring>

int main(){
    int n;
    scanf("%d",&n);
    char ww[20];
    int d;
    
    int stack[10005]={0,};
    int point=0;
	    
    for(int i=1;i<=n;i++){
    	
    	for(int j=0;j<20;j++){
    		ww[j]=0;
		}
    	
    	scanf("%s",&ww);
    	if(std::strcmp(ww,"push")==0){
    		scanf("%d",&d);
    		point++;
    		stack[point]=d;
		}else if(std::strcmp(ww,"pop")==0){
			if(point==0){
				printf("-1\n");
			}else{
				printf("%d\n",stack[point]);
				point--;
			}
			
		}else if(std::strcmp(ww,"size")==0){
			printf("%d\n",point);
		}else if(std::strcmp(ww,"empty")==0){
			if(point==0){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}else if(std::strcmp(ww,"top")==0){
			
			if(point==0){
				printf("-1\n");
			}else{
				printf("%d\n",stack[point]);
			}
		}
	}
	
	
    
    return 0;
}
