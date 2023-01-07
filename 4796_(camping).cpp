#include <iostream>

using namespace std;

int main(void)
{
  int iL, iP, iV;
  int iCnt = 1;

  while(true)
  {
    int iAns = 0;

    cin >> iL >> iP >> iV;

    if(iL == 0 && iP == 0 && iV == 0)
      break;

    int iTemp;
    iTemp = iV / iP;

    if((iV % iP) > iL)
      iAns = (iTemp * iL) + iL;

    else  
      iAns = (iTemp * iL) + (iV % iP);

    cout << "Case " << iCnt << ": " << iAns << endl;

    iCnt++;

  }

  return 0;
}
