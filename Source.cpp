#include<iostream>
using namespace std;
int main() {
	int num, n;
	cout << "Enter number :";
	cin >> n;
	char ch = 97;
	for (int i = 1; i <= n; i++) {
		for (int j = n - 1; j >= i; j--)
			cout << " ";
		for (num = 1; num <= i; num++) {
			cout << ch;
			ch++;
		}
		ch = 97;
		cout << endl;

	}
	system("pause");
	return 0;
}
