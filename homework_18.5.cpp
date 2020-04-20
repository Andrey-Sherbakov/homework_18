
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
            cout << "���� ����" << endl;
        }
        else
        {
            cout << "������� �������: "<< p[num] << endl;
            num--;
        }
    }

    void show()
    {
        if (num >= 1)
        {
            cout << "��� ��������: ";
            for (int i = num; i >= 1; i--)
            {
                cout << p[i] << " ";   
            }
            cout << endl;
        }
        else
        {
            cout << "���� ����\n";
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
    cout << "1)�������� ������� � ����\n";
    cout << "2)������� ������� ������� �����\n";
    cout << "3)�������� ����\n";
    cout << "4)�����\n";

   
    do
    {
        cout << "������� ����� ��������: ";
        cin >> a;
        cout << endl;
        if (a == 1)
        {
            cout << "������� �������: ";
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
            delete stack;
        }
    } while (a != 4);
    
    return 0;
    

}
