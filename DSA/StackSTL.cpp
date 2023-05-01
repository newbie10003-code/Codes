#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ch, n;
    stack<int>s;
    do
    {
        cout << "Enter: \n1. Push\n2. Pop\n3. Peek\n4. Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value to be pushed:";
            cin >> n;
            s.push(n);
            break;
        case 2:
            cout << "Value delted for element: " << s.top() << endl;
            s.pop();
            break;
        case 3:
            if (s.size() != 0)
            {
                cout << "Top Element: " << s.top() << endl;
                break;
            }
            cout << "Empty Stack" << endl;
            break;
        case 4:
            exit(0);
        default:
            cout << "Wrong Input" << endl;
            break;
        }
    } while (1);
    return 0;
}