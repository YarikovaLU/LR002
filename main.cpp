#include <iostream>

using namespace std;

// you may type whatever you want
int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n';
<<<<<<< HEAD
    if (a > b) {
        cout << a << "\n";
    }
    else {
        cout << b << "\n";
    }
=======
     if (a < b){
        cout << a << "\n";
     }
     else{
        cout << b << "\n";
     }
>>>>>>> code: добавлен вывод минимума
    return 0;
}
