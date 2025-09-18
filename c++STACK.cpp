#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> stack;
    
    // Добавляем элементы (push)
    stack.push_back("Apple");
    stack.push_back("Banana");
    stack.push_back("Cherry");
    
    // Работаем с стеком
    cout << "Верхний элемент: " << stack.back() << endl;
    
    // Удаляем верхний элемент (pop)
    stack.pop_back();
    cout << "Новый верхний элемент: " << stack.back() << endl;
    
    return 0;
}
