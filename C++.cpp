#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;
    
    // Добавляем пары ключ-значение
    ages["Anna"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;
    
    // Выводим значения
    cout << "Возраст Bob: " << ages["Bob"] << endl;
    
    return 0;
}
