#include <iostream>

using namespace std;

int main()
{
    float suma, total;
    suma = 1;
    for(int i=0; i < 100; i++){
        total = 0;
        for(int j=0; j<100; j++){
            total = total + 0.00001;
        }
        suma = suma + total;
    }
    cout<<"Suma: "<<suma;
    system("PAUSE");
    return 0;
}
