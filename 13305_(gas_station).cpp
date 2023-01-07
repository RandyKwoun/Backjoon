#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int iCity;
  long long iAns = 0;
  long long iDis[100000] = {};
  long long iOil[100001] = {};

  cin >> iCity;

  for(int i = 0; i < (iCity - 1); i++)
    cin >> iDis[i];

  for(int i = 0; i < iCity; i++)
    cin >> iOil[i];

  iAns = iDis[0] * iOil[0];

  long long iTemp = iOil[0];

  for(int i = 1; i < (iCity - 1); i++)
  {
    iTemp = min(iTemp, iOil[i]);
    iAns += (iTemp * iDis[i]);
  }

  cout << iAns << endl;

  return 0;
}
