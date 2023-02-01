#include <iostream>
#include <math.h>
using namespace std;


int main ()
{
    int a[100], i, j, k, n=6, m = 4, sum, flag, ind;
    for(i=0; i<n; i++)
    {
        a[i] = 0;
    }
    while (true)
    {
        sum = 0;

        for(i=0;i<n;i++){
            sum += a[i];
        }
        flag = 1;
        for(i=0; i<n;i++)
        {  
            if(!a[i])
            {
                ind = i;
                break;
            }
        }
        for(i=ind+1; i<n; i++)
        {
            if(a[i])
            {
                flag = 0;
            }
        }
        if(sum == n && flag)
        { 
            for(i=0; i<n; i++)
            {
                if(a[i])
                {
                    cout << a[i];
                }
            }
            cout << "\n";

        }
        a[n-1]++;
        for(i=n-1; i > 0; i--)
        {
            if (a[i] == m)
            {
                a[i] = 0;
                a[i - 1]++;
            }
            else 
            {
                break;
            }
        }
        if(a[0] == m)
        {
            break;
        }
    }
}