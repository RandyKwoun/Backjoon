#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int iString, iBrand;

  cin >> iString >> iBrand;

  int i6min, iMin, iTemp1, iTemp2;

  cin >> i6min >> iMin;

  for(int i = 0; i < (iBrand - 1); i++)
  {
    cin >> iTemp1 >> iTemp2;

    i6min = min(i6min, iTemp1);
    iMin = min(iMin, iTemp2);
  }

  int iAns = 0;

  while(true)
  {
    if(iString < 6)
    {
      iAns += min((iString * iMin), i6min);
      break;
    }

    else
    {
      iAns += min((iMin * 6), i6min);
      iString -= 6;
    }
  }

  cout << iAns << endl;

  return 0;
}
