
#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    int size;
	int* p;

public:
    Stack() 
    {
        size = 0;
        p = new int[size];
    };

    Stack(int size)
    {
        p = new int[size];
    }
   

    void push(int x)
    {
        top++;
        p[top] = x;
        
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "���� ����" << endl;
        }
        else
        {
            cout << "������� �������: "<< p[top] << endl;
            top--;
        }
    }

    void show()
    {
        if (top >= 0)
        {
            cout << "��� ��������: ";
            for (int i = top; i >= 0; i--)
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

    
};

int main()
{
    setlocale(0, "");

    Stack stack;
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
