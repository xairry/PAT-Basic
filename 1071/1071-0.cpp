#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, K, n1, b, t, n2, sum;
    sum = 100;
    cin>>T>>K;

    for (int i=0; i<K; i++) {
        cin>>n1>>b>>t>>n2;

        if (t > sum) {
            cout<<"Not enough tokens. Total = "<<sum<<"."<<endl;
        } else if ((n1 > n2 & b == 0) || (n1 < n2 & b == 1)) {
            // win
            sum += t;
            cout<<"Win "<<t<<"! "<<"Total = "<<sum<<"."<<endl;
        } else {
            // lose
            sum = sum - t;
            cout<<"Loss "<<t<<". "<<"Total = "<<sum<<"."<<endl;
            if (sum <= 0) {
                cout<<"Game Over.";
                break;
            }
        }

    }
    
    return 0;
}
