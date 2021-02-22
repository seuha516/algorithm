#include <iostream>
int main(){
    int a;
    while(1){
        scanf("%d",&a);
        if(a==0){
            break;
        }else{
            if(a<10){
                printf("yes\n");
            }else if(a<100){
                if(a%11==0){
                    printf("yes\n");
                }else{
                    printf("no\n");
                }
            }else if(a<1000){
                if(a/100==a%10){
                    printf("yes\n");
                }else{
                    printf("no\n");
                }
            }else if(a<10000){
                if(a/1000==a%10&&(a/100)%10==(a/10)%10){
                    printf("yes\n");
                }else{
                    printf("no\n");
                }
            }else if(a<100000){
                if(a/10000==a%10&&(a/1000)%10==(a/10)%10){
                    printf("yes\n");
                }else{
                    printf("no\n");
                }
	        }
	    }
	}
return 0;
}
