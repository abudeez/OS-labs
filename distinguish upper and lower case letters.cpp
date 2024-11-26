#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
	//string x = argv[1];
	string l;
	string u;
	string x = "SAY MY NAME you are heisenberg";
	for (int i = 0; i < x.size(); i++) {
		if (x[i] == 32) {
			l += x[i];
			u += x[i];
		}
		else if (x[i] > 'Z')
			l += x[i];
		else if (x[i] < 'a')
			u += x[i];
	} 

	cout <<"original string : " << x << "\r\nlower case string : " << l << "\r\nupper case string : " << u << endl;

	system("pause");
	return 0;
}
