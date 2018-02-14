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