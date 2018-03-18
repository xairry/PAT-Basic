#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

typedef struct {
  int n;
  int d;
} d;

const int maxn = 1000000;

int cmp(d a, d b) {
  if (a.d > b.d)
    return 1;
  else 
    return 0;
}

int main() {

  int N;
  scanf("%d", &N);
  
  int * b = new int[N];
  int * d_hash = new int[maxn];
  memset(d_hash, 0, maxn);
  
  for (int i=0; i<N; i++) {
    int b;
    scanf("%d", &b);
    if (b > (i+1)) {
      b = b - (i+1);
    } else {
      b = (i+1) - b;
    }
    d_hash[b]++;
  }
  
  int n_dd = 0;
  for (int i=0; i<maxn; i++) {
    if (d_hash[i] > 1) {
      n_dd++;
    }
  }
  
  d * d_array = new d[n_dd];
  int count = 0;
  for (int i=0; i<maxn; i++) {
    if (d_hash[i] > 1) {
      d_array[count].d = i;
      d_array[count].n = d_hash[i];
      count++;
    }
  }
  
  sort(d_array, d_array+n_dd, cmp);
  
  for (int i=0; i<n_dd; i++) {
    printf("%d %d\n", d_array[i].d, d_array[i].n);
  }
  
  //int cc;
  //scanf("%d", &cc);
  
  return 0;
}

// Use a array to store the back number
// Get the d in the array
// use a hash to store the d
// them store it into a array structur to store the d count
// sort the str_array, print the result

