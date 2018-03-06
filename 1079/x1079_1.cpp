#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string add(string a) {
	string b, ans;
	int carry = 0,num;
	b = a;
	reverse(a.begin(),a.end());
	for (int i = 0; i < a.length(); i++) {
		num = a[i] - '0' + b[i] - '0' + carry;
		carry = 0;
		if (num >= 10) {
			carry = 1;
			num -= 10;
		}
		ans += char(num+'0');
		
	}
	if (carry == 1) ans += '1';
	reverse(ans.begin(), ans.end());
	return ans;
}
int main() {
	string a,b;
	int  cnt = 0;
	cin >> a;
	
	
	while (cnt < 10) {
		b = a;
		reverse(a.begin(), a.end());
		
		if (a == b) {
			cout << a << " is a palindromic number.";
			break;
		}
		cout<<b<<" + "<<a<<" = "<<add(b)<<endl;
		a = add(b);
		cnt++;
	}
	if (cnt == 10) {
		cout << "Not found in 10 iterations.";
	}

	//system("pause");
	return 0;
}
