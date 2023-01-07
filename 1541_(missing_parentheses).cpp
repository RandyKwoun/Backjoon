#include <iostream>

using namespace std;

int main(void)
{
  int iNum, iAns = 0;
  char cSign;

  cin >> iAns;

  while(true)
  {
    cin.get(cSign);

    if(cSign == '\n')
      break;

    else if(cSign == '+')
    {
      cin >> iNum;
      iAns += iNum;
    }

    else 
    {
      while(true)
      {
        cin >> iNum;
        
        iAns -= iNum;

        cin.get(cSign);

        if(cSign == '\n')
          break;
      }

      break;
    }
  }

  cout << iAns << endl;

  return 0;
}
