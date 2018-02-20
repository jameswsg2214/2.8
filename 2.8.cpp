#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int n,r,sum=0,temp,digit,a,b;    
    int calc()
    {
        for(int i =a; i <=b; i++)
  {
        sum = 0;
        n = i;

        for(; n > 0; n /= 10)
        {
            digit = n % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }
return 0;  
    }
};
int main()
{
  sample s;
  cout<<"Enter the Number=  ";    
  cin>>s.a;
  cin>>s.b;
  s.calc();
  return 0;
}
