#include <iostream>
#include "functions.h"

using namespace std;
/**
@mainpage Главная страница документации
- @ref main Главный класс
- @ref hello Вывод приветствия
- @ref factorial Факториал
*/

/** 
@class main 
@brief Тело программы

@detailed Главный класс, здесь выводится "Привет мир" и высчитывается факториал.
*/ 
int main(){

    print_hello();
    cout << endl;
    cout << "The factorial of 5 is " << factorial(5) << endl;
    return 0;
}

