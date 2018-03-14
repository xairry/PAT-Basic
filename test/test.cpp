<<<<<<< HEAD
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
=======
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
/*struct Point {
  int x,y;
  Point(){}
  Point(int _x,int _y):x(_x),y(_y) {}

}pt[10];
*/
int main(){
  char in;
  scanf("%c",&in);
  getchar();
  if(in == 'C'){
    
    string a;
    char b;
    int cnt=1;
    getline(cin,a,'\n');
    if(a.length() != 0){
    for(int i = 0;i < a.length();i++){
      if(a[i] == a[i+1]){
        cnt++;
      }
       else{
         if(cnt >= 2){
           printf("%d%c",cnt,a[i]);
         }if(cnt == 1){
           printf("%c",a[i]);
         }
         cnt = 1;
      }
    }
   }
  }
  else if(in == 'D'){
    string a;
    int cnt = 0;
    getline(cin,a,'\n');
    for(int i = 0;i < a.length();i++){
      if(a[i] >= '0' && a[i] <= '9'){
        cnt=a[i] - '0';
        if(a[i+1] >= '0' && a[i+1] <= '9'){
          cnt = (a[i] - '0')*10 + (a[i+1] - '0');
          i = i+1;
        }
        for(int j = 0;j < cnt;j++){
          printf("%c",a[i+1]);
        }
        i = i+1;
      }
      else{
        printf("%c",a[i]);
      }
    }
  }
  return 0;
}
>>>>>>> a5b998eee9841f710d687cfebc126c693de1f3ab
