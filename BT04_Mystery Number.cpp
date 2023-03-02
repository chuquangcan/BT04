#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n], fl[100]={};
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        fl[a[i]]++;
    }
    int b[n+1];
    for (int i=0; i<n+1; i++)
    {
        cin >> b[i];
        fl[b[i]]--;
    }
    for (int i=0; i<n+1; i++)
    {
        if (fl[b[i]] != 0)
        {
            cout << b[i];
            return 0;
        }
    }
    return 0;
}

