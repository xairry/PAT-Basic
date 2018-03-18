#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

// use for 

const int maxn = 1000000;

void next(int * a, int * b) {
    
  int last = a[0], current, a_i = 1, b_i = 0, count = 1;
  do {
    current = a[a_i];
    //cout<<current<<"@";
    if (last != current) {
      b[b_i++] = last;
      //cout<<last<<"_"<<count<<endl;
      b[b_i++] = count;
      count = 1;
    } else {
      count++;
    }
    a_i++;
    last = current;
  } while (current != -1);  
}

int main() {
  
  int d, N;
  scanf("%d%d", &d, &N);

  if (N == 1) {
      printf("%d\n", d);
      return 0;
  }
  
  int * a = new int[maxn];
  int * b = new int[maxn];

  memset(a, -1, maxn);
  a[0] = d;
  for (int i=0; i<N-1; i++) {
    memset(b, -1, maxn);
    next(a, b);
    memset(a, -1, maxn);
    int j = 0;
    do {
      a[j] = b[j];
      j++;
    } while (b[j] != -1);
  }
  
  int b_i = 0;
  while (b[b_i] != -1) {
    printf("%d", b[b_i]);
    b_i++;
  }
   
  return 0;
}
