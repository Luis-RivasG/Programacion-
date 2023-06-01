#include <iostream>

using namespace std;

float Retiro(float money);
float Deposito();
int main()
{
    cout << "BANCO AMIGA";
    int i = 3;
    string user;
    int pass;
    while (i > 0)
    {
        cout << "PASS: \n";
        cin >> pass;
        if ( pass == 1234)
        {
            //ME FALTA CODIGO
        }
        else
            cout << "Incorrect Password";
        i -= 1;
    }
    if (i <= 0)
    {
        cout << "YOUR ACCOUNT WAS BLOCKED";
    }

    return 0;
}

int atm(string user){
    int opc;
    float money = 1000;
    cout << "WELCOME BACK USER!";
    cout << "Select an option: ";
    cout << "1- Account Status,\n 2- Withdrawals \n, 3- Deposit \n, 4- Log out \n";
    cin >> opc;
    switch (opc)
    {
    case 1:
        money = Retiro(money);
        break;
    
    default:
        opc = 4;
        break;
    }
}
float retiro (float money){
int opc; 
cout << "Select an Opc";
cout << "1- $10.00 \n, 2- $20.00 \n, 3- $50 \n, 4- $100 \n , 5- Go out"; 
cin >> opc;
switch (opc)
{
case 1:
    money = money - 10.00;
    break;
case 2:
    money = money - 20.00;
    break;
case 3:
    money = money - 50.00;
    break;
case 4:
    money = money - 50.00;
    break;
default:
    opc = 5;
    break;
}
}