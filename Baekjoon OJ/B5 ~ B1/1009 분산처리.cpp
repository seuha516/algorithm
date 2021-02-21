#include <iostream>

int main() {
	using namespace std;

	int test,a,b,dap=1;

	cin >> test;
	for(int i=1;i<=test;i++){
        dap=1;
		cin >> a;
		cin >> b;
		a=a%10;
		b=b%4;
		if(b==0){
            b=4;
		}
		for(int j=1;j<=b;j++){
            dap=(dap*a)%10;
		}
		if (dap==0){
            dap=10;
		}
        cout << dap << endl;
	}
	return 0;
}

