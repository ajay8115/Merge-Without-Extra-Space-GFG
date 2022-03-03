// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    void merge(int a1[], int a2[], int n, int m)
    {
        int i = 0, j = 0, k = n - 1;
        while (i <= k and j < m)
        {
            if (a1[i] < a2[j])
            {
                i++;
            }
            else
            {
                swap(a2[j], a1[k]);
                j++;
                k--;
            }
        }

        sort(a1, a1 + n);
        sort(a2, a2 + m);
    }
};

