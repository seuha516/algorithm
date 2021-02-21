#include <stdio.h>

int main()
{
	int k,d,a; scanf("%d/%d/%d",&k,&d,&a);
	//printf("%d %d %d %d\n",k,d,a,(k+a<d || d==0));
	printf("%s",(k+a<d || d==0)? "hasu" : "gosu");
	
    return 0;
}
