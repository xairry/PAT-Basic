#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

const int maxn = 10000;

// reverse
string reverse(string a) {
	// output string
	char temp;
	int size = a.size();
	for (int i = 0; i < size / 2; i++) {
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
	return a;
}

// judge
bool is_pal(string a) {
	int size = a.size();
	for (int i = 0; i < size / 2; i++) {
		if (a[i] != a[size - 1 - i]) return false;
	}
	return true;
}

// add
string add(string a, string b) {
	// store the num string
	char snum[maxn];
	// store the num character
	int num_a, num_b, jumper = 0;
	// store the size of string
	int len_a = a.size(), len_b = b.size();
	// get the long string
	int len = (len_a > len_b) ? len_a : len_b;

	// the output string length
	int num_l = 0;

	for (int i = 0; i < len; i++) {
		// if the len larger than the stirng size
		if (i > len_a - 1) num_a = 0;
		else num_a = a[len_a - 1 - i] - '0';
		if (i > len_b - 1) num_b = 0;
		else num_b = b[len_b - 1 - i] - '0';
		// sum
		int sum = num_a + num_b + jumper;
		// add the char into number string
		snum[num_l] = '0' + sum % 10;
		jumper = sum / 10;
		// add the num string length
		num_l++;
	}
	if (jumper > 0) {
		snum[num_l] = '0' + jumper;
		num_l++;
	}
	snum[num_l] = '\0';
	string output = snum;
	return reverse(output);
}


int main() {
	string num1, num2;
	cin >> num1;
	for (int i = 0; i < 10; i++) {
		if (is_pal(num1)) {
			cout << num1 << " is a palindromic number." << endl;
			return 0;
		}
		num2 = reverse(num1);
		cout << num1 << " + " << num2 << " = ";
		num1 = add(num1, num2);
		cout << num1 << endl;
	}
	if (is_pal(num1)) {
		cout << num1 << " is a palindromic number." << endl;
		return 0;
	}
	cout << "Not found in 10 iterations." << endl;
	return 0;
}