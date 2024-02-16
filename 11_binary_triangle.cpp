#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n;
        cin >> n;

        int start = 1;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                start = 0;
            else
                start = 1;

            for (int j = 1; j <= i; j++)
            {
                cout << start;

                if (start == 0)
                    start = 1;
                else
                    start = 0;
            }
            cout << endl;
        }
    }

    return 0;
}