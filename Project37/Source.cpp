#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int digitals[10];  

    std::cout << "Введите 10 чисел : " ;

    for (int i = 0; i < 10; i++) {
        std::cin >> digitals[i];  
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (digitals[j] > digitals[j + 1]) {
                int b = digitals[j];  
                digitals[j] = digitals[j + 1];  
                digitals[j + 1] = b;  
            }
        }
    }

    std::cout << "Массив в отсортированном виде: ";

    for (int i = 0; i < 10; i++) {
        cout << digitals[i] << " ";  
    }
    
    return 0;
}