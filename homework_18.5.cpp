
#include <iostream>
using namespace std;

class Stack
{
public:

    void push(int x)
    {
        num++;
        p[num] = x;
    }

    void pop()
    {
        if (num <= 0)
        {
            cout << "Стэк пуст" << endl;
        }
        else
        {
            cout << "Верхний элемент: "<< p[num] << endl;
            num--;
        }
    }

    void show()
    {
        if (num >= 1)
        {
            cout << "Все элементы: ";
            for (int i = num; i >= 1; i--)
            {
                cout << p[i] << " ";   
            }
            cout << endl;
        }
        else
        {
            cout << "Стэк пуст\n";
        }
    }

    void end()
    {
        delete p;
    }

private:
    int num = 0;
    int* p = new int[num];
};

int main()
{
    setlocale(0, "");

    Stack* stack = new Stack;
    int a, x;
    cout << "1)Добавить элемент в стэк\n";
    cout << "2)Достать верхний элемент стэка\n";
    cout << "3)Показать стэк\n";
    cout << "4)Выход\n";

   
    do
    {
        cout << "Введите номер действия: ";
        cin >> a;
        cout << endl;
        if (a == 1)
        {
            cout << "Введите элемент: ";
            cin >> x;
            stack->push(x);
            cout << endl;
        }
        else if (a == 2)
        {
            stack->pop();
        }
        else if (a == 3)
        {
            stack->show();
        }
        else if (a == 4)
        {
            stack->end();
        }
    } while (a != 4);
    
    return 0;
    

}
