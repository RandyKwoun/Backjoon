#include <iostream>

using namespace std;

int main(void)
{
  char cBoard[51] = {};
  int iLength = 0;

  for(int i = 0; i < 51; i++)
  {
    cin.get(cBoard[i]);

    if(cBoard[i] == '\n')
    {
      iLength++;
      break;
    }

    iLength++;
  }
  
  if(iLength == 1)
  {
    cout << "-1" << endl;
    return 0;
  }

  int Num[51] = {};
  int iTemp = 0, iNum = 0;

  for(int i = 0; i < iLength; i++)
  {
    if(cBoard[i] == '.' || cBoard[i] == '\n')
    {
      if(iTemp % 2 == 1)
      {
        cout << "-1" << endl;
        return 0;
      }
      
      Num[iNum] = iTemp;
      iNum++;
      iTemp = 0;
    }

    else
      iTemp++;
  }

  char cAns[51] = {};
  iTemp = 0;

  for(int i = 0; i < iLength; i += 0)
  {
    if(Num[iTemp] == 2)
    {
      for(int j = 0; j < 2; j++)
        cAns[i + j] = 'B';
      
      i += 2;
      Num[iTemp] -= 2;
    }

    else if(Num[iTemp] >= 4)
    {
      for(int j = 0; j < 4; j++)
        cAns[i + j] = 'A';

      i += 4;
      Num[iTemp] -= 4;
    }

    else
    {
      cAns[i] = '.';
      iTemp++;
      i++;
    }
  }

  iLength--;

  for(int i = 0; i < iLength; i++)
    cout << cAns[i];

  return 0;

}
