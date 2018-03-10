#include <iostream>
#include <cstring>
using namespace std;
typedef struct{
		string name;
		string sid;
		int grade;
	}stu;
int n; 
int main(){
	stu max,min;
	max.grade = -1;
	min.grade = 0Xfffffff;
	cin >> n;
	for( int i=0;i < n;i++){
		stu temp;
		cin >> temp.name;
		cin >> temp.sid;
		cin >> temp.grade;
		if(temp.grade > max.grade){
			max.grade = temp.grade;
			max.name = temp.name;
			max.sid = temp.sid;
		}
		if(temp.grade < min.grade){
			min.grade = temp.grade;
			min.name = temp.name;
			min.sid = temp.sid;
		}
	}
	cout<<max.name<<" "<<max.sid<<endl;
	cout<<min.name<<" "<<min.sid<<endl;
}
