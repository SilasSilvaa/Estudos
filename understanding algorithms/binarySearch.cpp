
#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};

    int value;
    std::cout << "Type a value" << std::endl;
    std::cin >> value;

    int baixo = 0;
    int alto = sizeof(arr) - 1;

    while (baixo <= alto)
    {
        int meio = (baixo + alto) / 2;
        int chute = arr[meio];

        if (chute == value)
        {
            std::cout << meio;
            return meio;
        }
        else if (chute > value)
        {
            alto = meio - 1;
        }
        else
        {
            baixo = meio + 1;
        }
    }

    return 0;
}