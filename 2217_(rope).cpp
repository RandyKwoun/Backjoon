#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int Num[100002] = {};
  int iNum, iAns = 0;

  cin >> iNum;

  for(int i = 0; i < iNum; i++)
    cin >> Num[i];

  sort(Num, Num + iNum);

  iAns = Num[0] * iNum;

  for(int i = 1; i < iNum; i++)
    iAns = max(iAns, Num[i] * (iNum - i));

  cout << iAns << endl;

  return 0;
}
