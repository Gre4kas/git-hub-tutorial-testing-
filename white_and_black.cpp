#include <iostream> 
using namespace std;
 
int main() 
{ 
   int i, n, m, maxValue = 2; 
   cout << "Enter number of rows: "; 
   cin >> n; 
   cout << "Enter number of columns: "; 
   cin >> m; 
  
   int l = n * m; 
   int *a = new int[l]; 
   for (i = 0; i < l; i++)
   { 
      a[i] = 0; 
   } 
   while (true)
   { 
      for (i = 0; i < l; i++) 
      { 
         cout << a[i]; 
      } 

      cout << "\n"; 

   a[l - 1]++; 

   for (i = l - 1; i > 0; i--) 
   { 
      if (a[i] == maxValue) 
         { 
            a[i] = 0; 
            a[i - 1]++; 
         } 
    else  
      break; 
   } 
      if (a[0] == maxValue) 
         break; 
   } 

      cout << "THE END"; 
}  