#include <stdio.h>

int main()
{
	int x=0;
	
    int t=6;while(t--){
    	char a;scanf("%c",&a);getchar();
		if(a=='W')x++;
	}
	switch (x){
		case 0: printf("-1");break;
		case 1:
		case 2: printf("3");break;
		case 3:
		case 4: printf("2");break;
		case 5:
		case 6: printf("1");break;
	}

    return 0;
}
