#include <iostream>
#include <algorithm>
#include <cstring>
int main(){
    int test;
    int n;
    char cloth[31][31];
    char type[31][31];
    int aaa[31];
    int count;
    int dap;
    
    int ccc;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
    	
    	scanf("%d",&n);
    	
    	for(int j=0;j<=30;j++){   
    		aaa[j]=0;
    		for(int f=0;f<=30;f++){
    			cloth[j][f]=0;
    			type[j][f]=0;
			}
		}
		count=1;
		dap=1;   
		
    	for(int j=1;j<=n;j++){
    		scanf("%s %s",&cloth[j],&type[j]);
		}
		
		if(n==0){
			printf("0\n");
		}else{
			for(int k=1;k<=n;k++){
				ccc=0;
				for(int l=1;l<=n;l++){
					if(std::strcmp(type[k],type[l])==0){
						
						if(k>l){
							ccc=1;
							break;
						}else{
							aaa[count]++;
						}	
					}
				}
				if(ccc==0){
					count++;
				}
			}
			for(int y=1;1;y++){
				if(aaa[y]==0){
					break;
				}else{
					dap*=(aaa[y]+1);
				}
			}
		printf("%d\n",dap-1);
		}
	}
    
    return 0;
}
