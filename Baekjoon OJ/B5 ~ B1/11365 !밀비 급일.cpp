#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    char a[700];
    int k=1;
    while(1){
    	for(int i=0;i<700;i++){
    		a[i]=0;
		}
		if(k==1){
			scanf("%[^\n]",a);
			k=0;
		}else{
			scanf(" %[^\n]",a);
		}
        
        if(strcmp(a,"END")==0){
            break;
        }else{
            reverse(a,a+strlen(a));
            printf("%s\n",a);
        }
    }
    
    return 0;
}
