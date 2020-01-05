/* Code Wars 8 kyu
*  Complete the solution so that it reverses the string value passed into it.
*  solution('world'); // returns 'dlrow'
*/
#include <string>
using namespace std ; 

string reverseString (string str )
{
   string nuevo;
   for (int i = str.length()-1; i >= 0; i--){
     nuevo += str[i];  
   }
   return nuevo;
}
