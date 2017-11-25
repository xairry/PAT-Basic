#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, K, n1, b, t, n2;
    cin>>T>>K;

    for (int i=0; i<K; i++) {
        cin>>n1>>b>>t>>n2;

        if (t > T) {
            cout<<"Not enough tokens.  Total = "<<T<<"."<<endl;
        } else if ((n1 > n2 & b == 0) || (n1 < n2 & b == 1)) {
            // win
            T += t;
            cout<<"Win "<<t<<"!  Total = "<<T<<"."<<endl;
        } else {
            // lose
            T = T - t;
            cout<<"Lose "<<t<<".  "<<"Total = "<<T<<"."<<endl;
            if (T <= 0) {
                cout<<"Game Over.";
                break;
            }
        }

    }
    
    return 0;
}
