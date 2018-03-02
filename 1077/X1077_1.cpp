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
  int num = 0,m = 0;
  scanf("%d %d",&num,&m);
  int score[num];
  
  for(int i = 0;i < num;i++){
    
    int max = -1,min = m,cnt = 0,sum = 0,result = 0;
    double G1 = 0.00,G2 = 0.00;

    for(int j = 0;j < num;j++){
      scanf("%d",&score[j]);
    }
    
    for(int o = 1;o < num;o++){
      if(score[o] >= 0 && score[o] <= m){
        if(score[o] > max) max = score[o];
        if(score[o] < min) min = score[o];
        G1 += score[o];
        cnt++;
      }
    }
    
    G1 = (G1-max-min)/(cnt-2);
    G2 = score[0];
    result = int ((G1+G2)/2+0.5); 
    
    printf("%d\n",result);

  
  }
  return 0;
}