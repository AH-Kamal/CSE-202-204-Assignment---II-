#include <bits/stdc++.h>
using namespace std;

int EvaluatePostfix(string exp);
int PerformOperation(char _operator, int op1, int op2);
int main()
{
    string exp = "5, 6, 2, +, *, 12, 4, /, -";

    int ans = EvaluatePostfix(exp);

    cout<<ans<<endl;


    return 0;
}

int EvaluatePostfix(string exp)
{
    stack<int> s;

    for (int i = 0; exp[i]; i++)
    {
        if (exp[i] == ' ' || exp[i] == ',') continue;

        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();

            int result = PerformOperation(exp[i], op1, op2);

            s.push(result);
        }

        else if (isdigit(exp[i]))
        {
            int operand = 0;

            while (i < exp.size() && (exp[i] >= 48 && exp[i] <= 57))
            {
                operand = operand*10 + exp[i] - 48;
                i++;
            }
            i--;

            s.push(operand);
        }
    }

    return s.top();
}

int PerformOperation(char _operator, int op1, int op2)
{
    if (_operator == '+') return op1 + op2;
    else if (_operator == '-') return op1 - op2;
    else if (_operator == '*') return op1*op2;
    else if (_operator == '/') return op1/op2;

    else cout<<"Unexpected Error \n";
	return -1;
}
