#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
    while(true)
    {
        string strTemp;
        stack<char> stkAns;

        getline(cin, strTemp);

        if(strTemp[0] == '.')
            break;

        for(int i = 0; i < strTemp.length(); i++)
        {
            if(strTemp[i] == '(')
                stkAns.push('(');

            else if(strTemp[i] == '[')
                stkAns.push('[');

            else if(strTemp[i] == ')')
            {
                if(stkAns.empty())
                {
                    cout << "no" << '\n';
                    break;
                }

                else 
                {
                    char cTemp = stkAns.top();
                    if(cTemp == '(')
                        stkAns.pop();

                    else
                    {
                        cout << "no" << '\n';
                        break;
                    }
                }
            }

            else if(strTemp[i] == ']')
            {
                if(stkAns.empty())
                {
                    cout << "no" << '\n';
                    break;
                }

                else 
                {
                    char cTemp = stkAns.top();
                    if(cTemp == '[')
                        stkAns.pop();

                    else
                    {
                        cout << "no" << '\n';
                        break;
                    }
                }
            }

            else if(strTemp[i] == '.')
            {
                if(stkAns.empty())
                    cout << "yes" << '\n';

                else
                    cout << "no" << '\n';
            }
        }

        while(!stkAns.empty())
            stkAns.pop();
    }

    return 0;
}
