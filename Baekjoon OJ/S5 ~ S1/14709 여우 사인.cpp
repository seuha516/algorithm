#include <iostream>
int main(){
    int a,b=0,c=0,d=0,e,f;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d %d",&e,&f);
        if(e==1&&f==3){
            b++;
        }
        if(e==3&&f==1){
            b++;
        }
        if(e==4&&f==3){
            c++;
        }
        if(e==3&&f==4){
            c++;
        }
        if(e==1&&f==4){
            d++;
        }
        if(e==4&&f==1){
            d++;
        }
    }
    if(b==1&&c==1&&d==1&&a==3){
        printf("Wa-pa-pa-pa-pa-pa-pow!");
    }else{
        printf("Woof-meow-tweet-squeek"); 
    }
    
    return 0;
}
