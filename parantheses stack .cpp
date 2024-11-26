#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char* argv[]) {

	stack<char> stk;

	for (int i = 0; i < strlen(argv[1]); i++) {
		char p = argv[1][i];
		
		if (p == '(')
			stk.push(p);

		else if (p == ')') {
			if ((stk.empty()) || (stk.top() == ')'))
				stk.push(p);
			else if (stk.top() == '(')
				stk.pop();
		}
	}

	if (stk.empty())
		cout << "all paranthesis match" << endl;
	else cout<< "not all paranthesis match" << endl;

}