#include <iostream>
#include <algorithm>
#include <cstring>

int main(){
    int n;
    scanf("%d",&n);
    char b[55];
    int blong;
    int l,r;
    int ok;
	
    for(int i=1;i<=n;i++){
    	for(int j=0;j<55;j++){
    		b[j]=0;
		}
		l=0;
		r=0;
		ok=1;
    	scanf("%s",&b);
    	blong=std::strlen(b);
    	
    	for(int k=0;k<blong;k++){
    		if(b[k]=='('){
    			l++;
 
			}else{
				r++;

			}
			if(r>l){
				ok=0;
				break;
			}
		}
		if(ok==0){
			printf("NO\n");
		}else{
			if(r==l){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
			
		}
    	
    	
	}
	
    return 0;
}
