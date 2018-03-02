#include <iostream>
#include <stdio.h>
#include <map>
#include <string>

using namespace std;


typedef struct {
    string address;
    int data;
    string next;
} e;

int main() {
    string start;
    int n, k;
    cin>>start>>n>>k;

    map <string, e> m; 
    e temp;
    for (int i=0; i<n; i++) {
//        cin>>temp.address>>temp.data>>temp.next;
        char address[6];
        char next[6];
        scanf("%s %d %s", address, &temp.data, next);
        temp.address = address;
        temp.next = next;
        m[temp.address] = temp;
    }

    e link[n];
    e current = m[start];
    int size = 0;
    for (int i=0; i<n; i++) {
        link[i] = current;
        size++;
        if (current.next != "-1") {
            current = m[current.next];
        } else {
            break;
        }
    }

    for (int i=0; i<size; i++) {
        if ((i + 1) % k == 0) {
            for (int j=0; j<k/2; j++) {
                int left = i - k + 1 + j;
                int right = i -j;
                temp = link[left];
                link[left] = link[right];
                link[right] = temp;
            }
        }
    }

    for (int i=0; i<size; i++) {
        if (i < size-1) 
            printf("%s %d %s\n", link[i].address.c_str(), link[i].data, link[i+1].address.c_str());
        else
            printf("%s %d %s\n", link[i].address.c_str(), link[i].data, "-1");
    }

    return 0;
}
