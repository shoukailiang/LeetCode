#include <stdlib.h>
#include <iostream>
using namespace std;
class Solution1
{
public:
  string toLowerCase(string str)
  {
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
      {
        str[i] += 32;
      }
    }
    return str;
  }
};
int main()
{
  string str = Solution1().toLowerCase("SDFSDFJS");
  cout << str << " ";
  system("pause");
  return 0;
}