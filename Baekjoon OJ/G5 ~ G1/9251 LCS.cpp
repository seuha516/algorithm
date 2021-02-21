#include <iostream>
#include <cstring>

int min(int a, int b){
	if(a>b){
		return b;
	}else{
		return a;
	}
}

int max(int a, int b){
	if(a<b){
		return b;
	}else{
		return a;
	}
}

int main() {
	char a[1002]={0,};
	char b[1002]={0,};
	int al,bl;
	scanf("%s",&a);
	scanf("%s",&b);

	al=strlen(a);
	bl=strlen(b);
	
	int c[al+2][bl+2];
	for(int i=0;i<=al+1;i++){
		for(int j=0;j<=bl+1;j++){
			c[i][j]=0;
		}
	}
	for(int f=0;f<=al-1;f++){
		for(int g=0;g<=bl-1;g++){
			if(a[f]==b[g]){
				c[f+1][g+1]=c[f][g]+1;
			}else{
				c[f+1][g+1]=max(c[f][g+1],c[f+1][g]);
			}
		}
	}
	printf("%d",c[al][bl]);
	return 0;
}
