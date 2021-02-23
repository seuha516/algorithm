#include <iostream>
#include <algorithm>
#include <cstring>
int main(){
    int n;
    int r[105];
    int t1,t2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	scanf("%d",&r[i]);
	}
	for(int i=2;i<=n;i++){
    	t1=r[1];
		t2=r[i];
		for(int j=2;j<=1000;j++){
			while(t1%j==0&&t2%j==0){
				t1/=j;
				t2/=j;
			}
		}    	
    	printf("%d/%d\n",t1,t2);
	}
    
    return 0;
}
