#include <iostream>

using namespace std;

/*
We need to find the number of zeros in factorial of a number.
If the factorial of a number has 'k' trailing zeros, it means the
factorial is divisible by '10^k'.
We can write '10^k' as '(2^k)*(5^k)'.
Therefore, the number of trailing zeros will depend on number of 2's
and 5's present in its factors.
In the factorial, there will be lots of even numbers, implying an abundance of 2's.
Therefore, the trailing zeros will depend only on no. of 5's.
So, in factorial of a number, ex. 16, the multiples of 5 are 5,10 and 15.
So, the number of 5's present are- 1 + 2 + 3;
*/

/*
1 1
2 2
3 6
4 24
5 120
6 720
7 5040
8 40320
9 362880
10 3628800
11 39916800
12 479001600
13 6227020800
14 87178291200
15 1307674368000
*/

int main()
{
    // get number to be processed
    int n;
    cin >> n;

    // nearest multiple of 5 less than or equal to our number
    int nearest_multiple = (n/5);

    cout << nearest_multiple << "\n";

    return 0;
}

