#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_MAX();
int rand_SRAND(int);
int srand_with_time();

int main()
{
    cout << rand_MAX() << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << rand() << " ";
    }

    cout << endl;

    cout << rand_SRAND(2112) << endl;

    cout << endl;

    cout << srand_with_time() << endl;

    return 0;
}

int rand_MAX()
{
    return RAND_MAX;
}

int rand_SRAND(int num)
{
    srand(num);
    return rand();
}

int srand_with_time()
{
    unsigned seed = time(0);
    srand(seed);

    return rand();
}

// 0 and 1
// int srand_with_time()
// {
//     unsigned seed = time(0);
//     srand(seed);

//     return rand() % 2;
// }

// 0 to 9
// int srand_with_time()
// {
//     unsigned seed = time(0);
//     srand(seed);

//     return rand() % 10;
// }