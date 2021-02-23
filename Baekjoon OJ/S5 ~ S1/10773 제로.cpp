#include <iostream>
#include <algorithm>
#include <cstring>

int main(){
    int n;
    scanf("%d",&n);
    
    int stack[100005];
    int point=0;
	for(int i=1;i<=100003;i++){
		stack[i]=-1;
	}
	int d;
	
	
    for(int i=1;i<=n;i++){
    	scanf("%d",&d);
    	if (d!=0){
    		point++;
    		stack[point]=d;	
    		
		}else{
			stack[point]=-1;
			point--;
			
		}

	}
	int dap=0;
	for(int i=1;stack[i]!=-1;i++){
		dap+=stack[i];
	}
	
	printf("%d",dap);
    
    return 0;
}
