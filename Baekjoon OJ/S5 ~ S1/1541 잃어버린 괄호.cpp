#include <iostream>
#include <algorithm>
int main(){
    int num=0;
    int temp=0;
    int dap=0;
    int minus=0;
    char a[1000]={0,};
    int count=1;
    
    scanf("%s",a+1);
    
    while(1){
		
		if((int)a[count]!=43&&(int)a[count]!=45&&(int)a[count]!=0){
			num*=10;
			num+=((int)a[count]-48);

			
		}else if((int)a[count]==45){
			if(minus==0){
				dap+=num;
			}else{
				dap-=num;
			}

			num=0;
			minus=1;
		}else if((int)a[count]==43){
			if(minus==0){
				dap+=num;
			}else{
				dap-=num;
			}

			num=0;
		}else if((int)a[count]==0){
			if(minus==0){
				dap+=num;
			}else{
				dap-=num;
			}
			break;
		}
		count++;
	}
        
    printf("%d",dap);
    
    
    return 0;
}
