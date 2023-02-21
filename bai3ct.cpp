#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = 0;
    if (n > 0)
    {
        while (s+i<=n)
        {
            i++;
            s=s+i;
        }
        cout<<i;
    }
    else
    {
        cout << "N";
    }
}