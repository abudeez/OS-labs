#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
	
	int x = atoi(argv[1]);

	long f=1;

	for (int i = x; i > 0; i--) {
		f= f * i;
	}
	cout << f<< endl;
	system("pause");
	return 0;
}