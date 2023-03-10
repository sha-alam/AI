#include <bits/stdc++.h>
using namespace std;

void toh(int n, char s, char a, char d)
{
    if (n == 1)
        cout << "move disk 1 from " << s << " to " << d << endl;
    else
    {
        toh(n - 1, s, d, a);
        cout << "move disk " << n << " from " << s << " to " << d << endl;
        toh(n - 1, a, s, d);
    }
}
int main()
{
    int n;
    cin >> n;
    toh(n, 'S', 'A', 'D');
    return 0;
}
