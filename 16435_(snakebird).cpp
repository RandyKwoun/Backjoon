#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int iN, iAns;
  int Height[1001] = {};

  cin >> iN >> iAns;

  for(int i = 0; i < iN; i++)
    cin >> Height[i];

  sort(Height, Height + iN);

  for(int i = 0; i < iN; i++)
  {
    if(iAns >= Height[i])
      iAns++;

    else
      break;
  }

  cout << iAns << endl;

  return 0;
}
