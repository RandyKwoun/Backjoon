#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> queAns;
    int iLength;
    int iGap;

    cin >> iLength >> iGap;

    for(int i = 1; i <= iLength; i++)
        queAns.push(i);

    cout << "<";

    while(queAns.size() != 1)
    {
        for(int i = 0; i < iGap - 1; i++)
        {            
            queAns.push(queAns.front());
            queAns.pop();
        }

        cout << queAns.front() << ", ";
        queAns.pop();
    }

    cout << queAns.front() << ">" << '\n';


    return 0;
}
