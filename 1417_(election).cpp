#include <iostream>

using namespace std;

int main(void)
{
  int iN, iAns = 0;
  int M[51] = {}; 

  cin >> iN;

  for(int i = 0; i < iN; i++)
    cin >> M[i];

    if(iN == 1)
  {
    cout << "0" << endl;
    return 0;
  }

  while(true)
  {
    int iMax = 0, iPlace = 0;

    for(int i = 0; i < iN; i++) // Find iMax and iPlace
    {
      if(iMax <= M[i])
      {
        iMax = M[i];
        iPlace = i;
      }
    }

    if(iPlace == 0)
      break;

    else
    {
      M[iPlace]--;
      iAns++;
      M[0]++;
    }
  }

  cout << iAns << endl;

  return 0;
}
