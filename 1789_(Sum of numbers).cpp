#include <iostream>

using namespace std;

long long iNum = 1;
int iAns = 0;

int Sum(long long iS, int iNum, int iAns)
{
  iS -= iNum;

  if(iS < 0)
    return iAns;

  else if(iS == 0)
  {
    iAns++;
    return iAns;
  }

  else
  {
    iNum++;
    iAns++;
    return Sum(iS, iNum, iAns);
  }
}

int main(void)
{
  long long iS;

  cin >> iS;

  cout << Sum(iS, iNum, iAns) << endl;

  return 0;
}
