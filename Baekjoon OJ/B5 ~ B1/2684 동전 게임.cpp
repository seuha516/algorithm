#include <iostream>
using namespace std;

int main() {

	int n; scanf("%d",&n);
	while(n--){
		char arr[45]={0,};
		scanf("%s",arr); getchar();
		
		int c[8]={0,};
		
		for(int i=0;i<38;i++){
			if(arr[i]=='T'&&arr[i+1]=='T'&&arr[i+2]=='T'){
				c[0]++;
			}else if(arr[i]=='T'&&arr[i+1]=='T'&&arr[i+2]=='H'){
				c[1]++;
			}else if(arr[i]=='T'&&arr[i+1]=='H'&&arr[i+2]=='T'){
				c[2]++;
			}else if(arr[i]=='T'&&arr[i+1]=='H'&&arr[i+2]=='H'){
				c[3]++;
			}else if(arr[i]=='H'&&arr[i+1]=='T'&&arr[i+2]=='T'){
				c[4]++;
			}else if(arr[i]=='H'&&arr[i+1]=='T'&&arr[i+2]=='H'){
				c[5]++;
			}else if(arr[i]=='H'&&arr[i+1]=='H'&&arr[i+2]=='T'){
				c[6]++;
			}else if(arr[i]=='H'&&arr[i+1]=='H'&&arr[i+2]=='H'){
				c[7]++;
			}
		}
		
		for(int i=0;i<8;i++){
				printf("%d ",c[i]);
		}
			printf("\n");
	}
	
return 0;}
