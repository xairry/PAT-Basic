#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin>>n;

    int say_a, say_b, hand_a, hand_b, cent_a, cent_b;
    cent_a = cent_b = 0;

    for (int i=0; i<n; i++) {
        cin>>say_a>>hand_a>>say_b>>hand_b;
        int sum = say_a + say_b;
        if (hand_a != hand_b) {
            if (hand_a == sum) {
                cent_a++;
            } else if (hand_b == sum) {
                cent_b++;
            }
        }
    }

    cout<<cent_b<<" "<<cent_a;
    return 0;
}
