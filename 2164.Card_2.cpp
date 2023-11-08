#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> queAns;
    int iNum;

    cin >> iNum;

    for(int i = 1; i <= iNum; i++)
        queAns.push(i);

    while(queAns.size() != 1)
    {
        queAns.pop();
        queAns.push(queAns.front());
        queAns.pop();
    }

    cout << queAns.front() << '\n';

    return 0;
}
