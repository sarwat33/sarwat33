#include <iostream>
#include <stack>
using namespace std;
int main()
{

   long long int a , b , prefix = 0 , len = 0;
   stack <int>  container;
   int sum , i=0 ,test;
   cin >> test;
   while(test--)
   {

   cin >> sum;
   while(prefix != sum)
   {
       prefix = prefix + i;
       if(prefix < sum)
       {
           container.push(i);
           i ++;
       }
       else
       {
           break ;
       }

   }
   if(prefix == sum)
   {
       container.push(i);
   }
   // cout << container.top() << endl;
   if(container.top()%2==0)
   {
       cout << "Imran" << endl;
   }
   else if(container.top()%2==1)
   {
       cout << "Aminul" << endl;
   }

   prefix = 0;
   i = 0;
   sum = 0;
   len = container.size();
   for(int j=1;j<=len;j++)
   {
       container.pop();
   }


   }

   return 0;

}
