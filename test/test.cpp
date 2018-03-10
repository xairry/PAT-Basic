#include<list>
#include<iostream>
using namespace std;
int main(){
 list<int> a1{1,2,3,4,5};
    list<int>::iterator it;
    cout << "insert before:";
    for(it = a1.begin();it!=a1.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    
    a1.insert(a1.begin(),0);
    cout << "insert(pos,num) after:";
    for(it = a1.begin();it!=a1.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    
    a1.insert(a1.begin(),2,88);
    cout << "insert(pos,n,num) after:";
    for(it = a1.begin();it!=a1.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    int arr[5] = {11,22,33,44,55};
    a1.insert(a1.begin(),arr,arr+3);
    cout << "insert(pos,beg,end) after:";
    for(it = a1.begin();it!=a1.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}
