#include <iostream>

int main() {
	using namespace std; 
	
	int a,b,c;
	
	cin >> a;
	for(int i=1;i<=a;i++){
		scanf("%d,%d",&b,&c);
		cout << b+c << endl;
	}
	
	return 0;
}
