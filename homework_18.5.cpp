
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
            p[size] = x;
            a++;
        }
        
    }

    void pop()
    {
        if (a < 0)
        {
            cout << "���� ����" << endl;
        }
        else
        {
            cout << "������� �������: "<< p[size] << endl;
            size--;
            a--;
        }
    }

    void show()
    {
        if (a >= 0)
        {
            cout << "��� ��������: ";
            for (int i = size; i >= 0; i--)
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
        else if (a == 4)
        {
            //stack.end();
        }
    } while (a != 4);
    
    return 0;
    

}
