#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    /*
    0. Faça um programa em C++ que peça um inteiro ao usuário, e exiba sua tabuada.
    */

    // int num;
    // cout << "Enter number " << endl;
    // cin >> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     cout << num << " x " << i << " = " << num * i << endl;
    // }

    // ---------------------

    /*
    1. Faça um programa que receba dois números inteiros e gere os números inteiros que
    estão no intervalo compreendido por eles.
    */

    // int num1, num2;
    // cout << "Enter number 1 and number 2" << endl;
    // cin >> num1 >> num2;

    // for (int i = num1 + 1; i < num2; i++)
    // {
    //     cout << i << " ";
    // }

    // ---------------------

    /*
    2. Faça um programa que peça uma nota, entre zero e dez.
    Mostre uma mensagem caso o valor seja inválido e
    continue pedindo até que o usuário informe um valor válido.
    */

    // int num;

    // while (true)
    // {
    //     cout << "Enter number" << endl;

    //     cin >> num;

    //     if (num < 0 || num > 10)
    //     {
    //         cout << "Enter a number between 0 and 10";
    //         break;
    //     }
    // }

    // ---------------------

    /*
    3. Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro.
    Depois modifique o programa para que ele mostre os números um ao lado do outro.
    */

    // for (int i = 1; i <= 20; i++)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i <= 20; i++)
    // {
    //     cout << i << " ";
    // }

    // ---------------------

    /*
    4. Escreva programas que exibam os seguintes padrões na tela,
    de acordo com o número que o usuário fornecer, que será sempre o número de linhas:
    */

    // int n;
    // cout << "Enter number " << endl;
    // cin >> n;

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << j + i << " ";
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int l = i + 1; l <= n; l++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << j + i << " ";
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 0; i < n; i++)
    // {
    //     for (int l = i + 1; l < n; l++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 1; i <= n; i++)
    // {
    //     int num = i % 2;

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num;
    //         num = 1 - num;
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = 0; i < n; i++)
    // {
    //     for (int l = i; l < n; l++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }

    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = n - 1; i > 0; i--)
    // {
    //     for (int l = i - 1; l < n; l++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << "*";
    //     }

    //     for (int j = i - 1; j > 0; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // ------------

    // for (int i = n; i > 0; i--)
    // {
    //     // for (int l = 0; l > i; l++)
    //     // {
    //     //     cout << " ";
    //     // }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // // ------------

    // for (int i = n; i > 0; i--)
    // {
    //     for (int l = i; l < n; l++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // // ------------

    // for (int i = n; i > 0; i--)
    // {

    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << " " << j;
    //     }

    //     cout << endl;
    // }

    // // ------------

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int l = i; l < n; l++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // // ------------

    // for (int i = n; i > 0; i--)
    // {
    //     for (int l = i; l < n; l++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }

    //     for (int k = i - 1; k > 0; k--)
    //     {
    //         cout << k;
    //     }
    //     cout << endl;
    // }

    // ------------

    /*
    5. Faça um programa que leia 5 números e informe o maior número.
    */

    // int max = 0, num;
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Enter number " << endl;
    //     cin >> num;

    //     if (num > max)
    //     {
    //         max = num;
    //     }
    // }

    // cout << "Max number " << max << endl;

    /*
    6. Faça um programa que leia 5 números e informe a soma e a média dos números.
    */

    // int sum = 0, num, count = 0;

    // for (count; count < 5; count++)
    // {
    //     cout << "Enter number" << endl;
    //     cin >> num;

    //     sum += num;
    // }
    // cout << count << endl;
    // cout << sum << endl;
    // cout << "Average: " << (sum / count);

    /*
    7. Faça um programa que calcule o mostre a média aritmética de N notas.
    */

    // int num, sum = 0, i = 0;

    // while (true)
    // {
    //     cout << "Enter num or enter -1 for exit" << endl;
    //     cin >> num;

    //     if (num == -1)
    //     {
    //         break;
    //     }

    //     sum += num;
    //     i++;
    // }

    // cout << "Sum: " << sum << endl;
    // cout << "Average: " << (sum / i);

    /*
    8. Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.
    Ao final, mostre também a soma dos números.
    */

    // int sum = 0;

    // for (int i = 1; i <= 50; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << " ";
    //         sum += i;
    //     }
    // }
    // cout << endl;
    // cout << "Sum: " << sum;

    /*
    9. Crie um programa que pede um número ao usuário e calcule o somatório até aquele valor.
    */

    // int num, sum = 0;
    // cout << "Enter num" << endl;
    // cin >> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }

    // cout << sum << endl;

    /*
    10. Crie um programa que pede um número ao usuário, e calcula seu fatorial. Ex.: 5!=5.4.3.2.1=120
    */

    // int n, fat = 1;
    // cout << "Enter number" << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     fat *= i;
    //     cout << fat << " ";
    // }

    /*
    11. A série de Fibonacci é formada pela sequência 0,1,1,2,3,5,8,13,21,34,55,...
    Onde o próximo termo é sempre a soma dos dois anteriores.
    Faça um programa capaz de gerar a série até o n−ésimo termo, que o usuário deverá fornecer.
    */

    // int n, ult = 1, penult = 0;
    // cout << "Enter number " << endl;
    // cin >> n;

    // for (int i = 3; i < n; i++)
    // {
    //     int prox = penult + ult;

    //     cout << prox << endl;

    //     penult = ult;
    //     ult = prox;
    // }

    /*
    12. Faça um programa que peça dois números, base e expoente,
    calcule e mostre o primeiro número elevado ao segundo número.
    Não utilize a função de potência da linguagem.
    */

    // int b, x, total = 1;

    // cout << "Enter b" << endl;
    // cin >> b;

    // cout << "Enter x" << endl;
    // cin >> x;

    // for (int i = 0; i < x; i++)
    // {
    //     total *= b;
    // }

    // cout << "Total: " << total;

    /*
    13. Faça um programa que peça um número inteiro e determine se ele é ou não um número primo.
    Um número primo é aquele que é divisível somente por ele mesmo e por 1.
    */

    // int n, count = 0;

    // cout << "Enter number" << endl;
    // cin >> n;

    // for (int i = n; i > 0; i--)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }

    // count == 2 ? cout << n << " E Numero primo" : cout << n << " Nao e numero primo";

    /*
    14. Faça um programa que mostre todos os primos entre 1 e N
    sendo N um número inteiro fornecido pelo usuário.
    */
    // int n, count = 1;

    // cout << "Enter number" << endl;
    // cin >> n;

    // for (int i = 2; i <= n; i++)
    // {
    //     count = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             count++;
    //         }
    //     }

    //     if (count == 2)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // return 0;

    /*
    15. Faça um programa que exibe todas as combinações de jogos possíveis da Mega-Sena.
    */

    // int dez1, dez2, dez3, dez4, dez5, dez6, sum = 0;

    // for (dez1 = 1; dez1 <= 55; dez1++)
    //     for (dez2 = dez1 + 1; dez2 <= 56; dez2++)
    //         for (dez3 = dez2 + 1; dez3 <= 57; dez3++)
    //             for (dez4 = dez3 + 1; dez4 <= 58; dez4++)
    //                 for (dez5 = dez4 + 1; dez5 <= 59; dez5++)
    //                     for (dez6 = dez5 + 1; dez6 <= 60; dez6++)
    //                         sum++;

    // cout << "Total : " << sum << endl;

    /*
    16. Programe um software que recebe um número do usuário e diga se ele é um número perfeito ou não.
    */
    // int n, sum = 0;
    // cout << "Enter number" << endl;
    // cin >> n;

    // for (int i = 1; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // sum == n ? cout << "Perfect number" : cout << "Not perfect";

    /*
    Verificar
    17. Programe um software que recebe dois números inteiros do usuário, e diga qual o MDC,
    máximo divisor comum desses números.
    */
    // int a, b, count = 0, countb = 0;

    // cout << "Enter number a and b" << endl;
    // cin >> a >> b;

    // while (a != 0 && b != 0)
    // {
    // }

    /*
    18. Programe um software que recebe um número menor que 1000,
    e diga qual o valor da unidade, da dezena e da centena.
    */

    // int num;
    // cout << "Enter number wiht max 4 digits" << endl;
    // cin >> num;

    // for (int i = 1; i <= 1000; i *= 10)
    // {
    //     cout << (num / i) % 10 << endl;
    // }

    /*
    19. Programe um software que calcula a soma dos dígitos de um número.
    */

    // int n, x = 1, sum = 0;

    // cout << "Enter Number" << endl;
    // cin >> n;
    // while (n / x >= 10)
    // {
    //     x *= 10;
    // }

    // for (int i = 1; i <= x; i *= 10)
    // {
    //     sum += (n / i) % 10;
    // }
    // cout << sum;

    /*
    20. Faça um programa que mostre os n termos da Série a seguir:
    S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m.
    Imprima no final a soma da série.
    */
}