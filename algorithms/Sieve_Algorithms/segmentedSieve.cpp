#include <bits/stdc++.h>
using namespace std;

int N = 1000000;
vector<bool> sieve(N + 1, true);
void createSieve()
{
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j < N; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> getAllPrimes(int num)
{
    //here num is sqrt(r);
    vector<int> primeNumbers;
    for (int index = 2; index <= num; index++)
    {
        if (sieve[index] == true)
            primeNumbers.push_back(index);
    }

    //remembers index is the element
    return primeNumbers;
}

int main()
{
    //create a sieve array/vector till 10^6
    createSieve();
    int l, r;
    cout << "Left Limit: ";
    cin >> l;
    cout << "Right Limit: ";
    cin >> r;

    //step 1: get all prime numbers in a Data Structure till sqrt(r);
    vector<int> primes = getAllPrimes(sqrt(r));

    //step 2 is to create a dummy array of size r-l+1 and make every element true in the array
    int sizeOfDummyArray = r - l + 1;
    vector<bool> dummy(sizeOfDummyArray, true);

    //step 3 eliminate the multiples of elements in primes
    for (auto pr : primes)
    {
        int firstElement = (l / pr) * pr;
        if (firstElement < l)
            firstElement += pr;

        for (int j = max(firstElement, pr * pr); j <= r; j += pr)
        {
            int index = j - l;
            dummy[index] = false;
        }
    }
    //step 4 get all the prime between l and r
    for (int k = l; k <= r; k++)
    {
        if (dummy[k - l] == true)
        {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
}