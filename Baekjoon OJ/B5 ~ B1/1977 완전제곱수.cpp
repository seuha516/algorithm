#include <iostream>
int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    int c[104]={0,};
    for(int i=0;i<102;i++){
        c[i]=i*i;
    }
    int anum,bnum,asoso=0,bsoso=0;
    for(int i=1;i<102;i++){
        if(c[i]<a&&a<=c[i+1]-1){
            anum=i+1;
            asoso=1;
        }else if(c[i]==a){
            anum=i;
        }
        if(c[i]<b&&b<=c[i+1]-1){
            bnum=i;
            bsoso=1;
        }else if(c[i]==b){
            bnum=i;
        }
    }
    int ans=0;
    
    for(int i=anum;i<=bnum;i++){
        ans=ans+c[i];
    }
    if(anum>=bnum){
        printf("-1");
    }else{
        printf("%d\n%d",ans,c[anum]);
    }
    
    
    return 0;
}
