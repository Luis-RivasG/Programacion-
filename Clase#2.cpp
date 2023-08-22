#include <iostream>

using namespace std;

int suma(int n);
int factorial(int n);
int fibonacci(int n);
int mcd(int a, int b);
int mcm(int x, int y);
int potencia(int c, int d);
void cuenta(int);

int main()
{
    int inicio = 0;
    cin >> inicio;
    cuenta(inicio);
    //cout << suma(10) << endl;
    //cout << factorial(5) << endl;
    //cout << fibonacci(5) << endl;
    //cout << mcd(15, 5) << endl;
    //cout << mcm(2, 1) << endl;
    //cout << potencia(2, 3) << endl;
    
}

int suma(int n)
{
    if (n == 0)
    {
        n = 0;
    }
    else
    {
        n = n + suma(n - 1);
    }
    return n;
}
int factorial(int n)
{
    if (n == 0)
    {
        n = 1;
    }
    else
    {
        n = n * factorial(n - 1);
    }
    return n;
}
int fibonacci(int n)
{
    if (n < 2)
    {
        n = n;
    }
    else
    {
        n = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return n;
}
int mcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    // Llamado directo
    return mcd(b % a, a);
}
int mcm(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return 0;
    }
    // Llamado indirecto
    return (x * y) / mcd(x, y);
}
int potencia(int c, int d)
{
    if (d == 0)
    {
        return 1;
    }
    else if (d == 1)
    {
        return c;
    }
    else
    {
        return c * potencia(c, d - 1);
    }
}
void cuenta(int inicio)
{
    if ( inicio == 0)
    {
        return;
    }
    cout << inicio << endl;
    cuenta(inicio - 1);
}