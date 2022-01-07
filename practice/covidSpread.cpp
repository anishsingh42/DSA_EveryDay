#include <bits/stdc++.h>
using namespace std;

/*
A disease is spreading through ChefLand!

The disease spreads as follows:

    At the end of day 0

, a single person is infected with the disease.
During the next 10
days, the number of infected people doubles each day, until the disease has spread to all people in ChefLand.
From day 11

    onwards, the number of infected people triples each day, until the disease has spread to all people in ChefLand.

You are given the population of ChefLand N
and a day D. How many people in ChefLand are infected at the end of day D?

*/
long long int infectedPeople(int n, int d)
{
    long long int diseasedppl = 1; // for day 0
    long long int i = 1;

    while (i <= d && diseasedppl <= n)
    {
        if (i <= 10)
        {
            diseasedppl *= 2;
        }
        else
        {
            diseasedppl *= 3;
        }
        i++;
    }

    if (diseasedppl > n)
    {
        diseasedppl = n;
    }
    return diseasedppl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        cout << infectedPeople(n, d) << endl;
    }

    return 0;
}
