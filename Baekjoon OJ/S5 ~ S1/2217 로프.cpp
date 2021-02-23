#include <iostream>
#include <algorithm>
int main(){
    int n;
    int b[100005];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
    }
    std::sort(b+1,b+n+1);
    int count=0;
    for(int i=1;i<=n;i++){
    	count=std::max(count,(b[i]*(n+1-i)));
	}
    
    printf("%d",count);
    return 0;
}
