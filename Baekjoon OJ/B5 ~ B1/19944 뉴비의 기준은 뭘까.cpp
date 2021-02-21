#include <iostream>
#include <string>

int main()
{
	int n,m; scanf("%d %d",&n,&m);
	if(m <= n && m>2){
		printf("OLDBIE!");
		
	}else if(m<3){
		printf("NEWBIE!");
	}else{
		printf("TLE!");
	}
	
    return 0;
}
