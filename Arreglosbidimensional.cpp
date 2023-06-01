#include <iostream>

using namespace std; 

int main ()
{
    int matriz [2][4] = {{1,2,3,4},{5,6,7,8}};
    cout << matriz [0][2];
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        for (int j = 0; j < 4 ; j++)
        {
            cout << matriz [i][j];
        }
        
    }
    
    return 0;
}