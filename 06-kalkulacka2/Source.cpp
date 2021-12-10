# include <iostream>
using namespace std;

int main()
{
    char operacia;
    float cislo1, cislo2;
    string rozho;

    do {
        cout << "Zadaj priklad napr. 10 + 5" << endl;
        cin >> cislo1 >> operacia >> cislo2;

        switch (operacia)
        {
        case '+':
            cout << cislo1 << " + " << cislo2 << " = " << cislo1 + cislo2;
            break;

        case '-':
            cout << cislo1 << " - " << cislo2 << " = " << cislo1 - cislo2;
            break;

        case '*':
            cout << cislo1 << " * " << cislo2 << " = " << cislo1 * cislo2;
            break;

        case '/':
            cout << cislo1 << " / " << cislo2 << " = " << cislo1 / cislo2;
            break;

        default:
            cout << "Zly operator!!!";
            break;
        }

        cout << "Chces pokracovat? (ano/nie) " << endl;
        cin >> rozho;
    } while (rozho == "ano");

    


    return 0;
}