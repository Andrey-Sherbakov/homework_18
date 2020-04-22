
#include <iostream>
using namespace std;

class Stack
{
private:
    int a;
    int size;
	int* p;

public:
    Stack() 
    {
        a = -1;
        size = 0;
        p = new int[size];
    };

    void CreateArray()
    {
        int* arr = new int[size];
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i] = p[i];
        }
        p = arr;
    }
 


    void push(int x)
    {
        if (a == -1)
        {
            p[size] = x;
            a++;

        }
        else
        {
            size++;
            CreateArray();
            p[size] = x;
            a++;
        }
        
    }

    void pop()
    {
        if (a < 0)
        {
            cout << "Стэк пуст" << endl;
        }
        else
        {
            cout << "Верхний элемент: "<< p[size] << endl;
            size--;
            a--;
        }
    }

    void show()
    {
        if (a >= 0)
        {
            cout << "Все элементы: ";
            for (int i = size; i >= 0; i--)
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

    
};

int main()
{
    setlocale(0, "");

    Stack stack;
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
            stack.push(x);
            cout << endl;
        }
        else if (a == 2)
        {
            stack.pop();
        }
        else if (a == 3)
        {
            stack.show();
        }
       
    } while (a != 4);
    
    return 0;
    

}
