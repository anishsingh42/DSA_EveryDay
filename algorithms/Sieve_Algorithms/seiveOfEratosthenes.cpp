#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    //sieve of erathosthenes
    vector<bool> primes(n + 1, true);

    primes[0] = primes[n] = primes[1] = false;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (primes[i] == true)
        {
            for (int j = 2*i; j < n; j = j + i)
            {
                primes[j] = false;
            }
        }
    }
    return count(primes.begin(), primes.end(), true);
}

int main()
{
    int n;
    cin >> n;
    cout << countPrimes(n) << endl;
    return 0;
}

//T.C = O(nlog(log(n)))

/*
first letting 2 be prime and marking every multiple of 2 nonprime , therefore number of operations = n/2

similarly with 3, 5, 7, 11 , ... = n/3 , n/5 , n/7 , n/11 , ...

therefore
n/2 + n/3 + n/5 + n/7 + n/11 + ....
n(1/2 + 1/3 + 1/5 + 1/7 + 1/11 + ...)
= n(log(log(n)))
*/