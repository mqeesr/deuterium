#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool isSquare(int num)
{
    return num == 16 || num == 25 || num == 36 || num == 49 || num == 64 || num == 81;
}

int main()
{
    string input;
    cin >> input;

    stack<char> s;

    for (int i = 0; i < input.length(); i++)
    {
        s.push(input[i]);

        if (s.size() >= 2)
        {
            char second = s.top();
            s.pop();
            char first = s.top();
            s.pop();

            int num = (first - '0') * 10 + (second - '0');

            if (!isSquare(num))
            {
                s.push(first);
                s.push(second);
            }
        }
    }

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        string result = "";
        while (!s.empty())
        {
            result += s.top();
            s.pop();
        }

        cout << result << endl;
    }

    return 0;
}