#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 100;

int main() {
    int R[MAX], n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> R[i];

    for (int i = 1, j, v; i < n; i++) {
        v = R[i];
        j = i - 1;
        while (j >= 0 && R[j] > v) {
            R[j + 1] = R[j];
            j--;
        }
        R[j + 1] = v;
        for (int k = 0; k < n; k++) {
            printf("%d ", R[k]);
        }
        printf("\n");
    }
}
