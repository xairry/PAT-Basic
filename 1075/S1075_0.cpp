#include <string>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
    int id;
    int data;
    int rank;
    int next;
} node;

int cmp(node a, node b) {
    if (a.rank < b.rank)
        return 1;
    else 
        return 0;
}

int main() {

    int start, N, K;
    cin>>start>>N>>K;

    int * hash = new int [100000];

    node * nodes = new node[N];

    for (int i=0; i<N; i++) {
        int from, data, to;
        scanf("%d%d%d", &from, &data, &to);

        hash[from] = to;

        nodes[i].id = from;
        nodes[i].data = data;
    }

    int next;
    int current = start;
    int rank = 0;
    while (current != -1) {
        next = hash[current];
        hash[current] = rank;
        rank++;
        current = next;
    }

    for (int i=0; i<N; i++) {
        nodes[i].rank = hash[nodes[i].id];
        if (nodes[i].data < 0) {
            nodes[i].rank += -2000000;
        } else if (nodes[i].data <= K) {
            nodes[i].rank += -1000000;
        }
    }

    sort(nodes, nodes + N, cmp);

    for (int i=0; i<N; i++) {
        if (i != N-1) {
            printf("%05d %d %05d\n", nodes[i].id, nodes[i].data, nodes[i+1].id);
        } else {
            printf("%05d %d -1\n", nodes[i].id, nodes[i].data);
        }
    }

    return 0;
}

// Use one hash to sotore each node for search to get the original rank
// Use structure array to sotre the node for sort: id, data, rank, next
// Biuld array. The type weight: (negtive: -2000000, [0, K]: -1000000)
// Get the original rank, store in array
