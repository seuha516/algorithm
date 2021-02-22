#include <iostream>
#include <cstring>
int main(){
    char b[123]={0,};
    scanf("%s",b);
    int t=0;
    for(int i=0;i<std::strlen(b);i++){
        if(b[i]==','){
            t++;
        }
    }
    printf("%d",t+1);
    
    return 0;
}
