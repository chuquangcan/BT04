#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Test;
    cin >> Test;
    for (int t = 0; t<Test; t++)
    {
        int n;
        cin >> n;
        int a[n];
        int d=0, sum=0;
        int suml[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
            suml[i] = 0;
        }
        suml[0] = 0;
        suml[1] = a[0];
        for (int j=2; j<n; j++)
        {
            suml[j] = suml[j-1] + a[j-1];
        }
        for (int i=0; i<n; i++)
        {
            if (sum-a[i]-2*(suml[i]) == 0)
            {
                d++;
                break;
            }
        }
        if (d==0)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
    return 0;
}




