// Jutsin Calma
// CECS 282 Lab 12

// Driver file containing the main function of the program

#include <iostream> 
#include<sstream>
#include<typeinfo>
#include <vector> // Vector class-template definition
using namespace std;
template <typename X>

int ReadInput( const string & s, vector <X> & v ) {
    istringstream is( s );//FILL IN BLANK
    int n;
    if(typeid(int)==typeid(X))
    {
    while( is >> n ) {
        v.push_back( n );
    }
    }
    //Check type X for char
    if(typeid(char) == typeid(X))//FILL IN BLANK
    {int i =0;
    while( i<s.length() ) {
        v.push_back( s.at(i) );//FILL IN BLANK
        i++;
    }
    }
    return v.size();
}

// function template palindrome definition
template <typename X>
bool palindrome(const vector<X>& vec) {
   auto r=vec.crbegin(); 
   auto i=vec.cbegin();

   while (r != vec.crend() && i != vec.cend()) {//FILL IN BLANK
      if (*r != *i) { // //FILL IN BLANK
         return false;
      }

      ++r;
      i++;//FILL IN BLANK
   } 

   return true; // the vector is a palindrome
} 

// function template printVector definition
template <typename Y>
void printVector(const vector<Y>& vec) {
   for (auto i=vec.cbegin(); i != vec.cend(); ++i) {//FILL IN BLANK
      cout << *i << ' ';//FILL IN BLANK
   }
} 

// Main function of the program
int main() {
   vector<int> iv;//FILL IN BLANK
   vector<char> ic;//FILL IN BLANK
   int x=0;

   cout<<"Enter single digit separted by a space:"<<endl;
   string s;
   getline( cin, s );
   ReadInput( s, iv );
   printVector(iv);//FILL IN BLANK
   cout << (palindrome(iv) ? " is " : " is not ") << "a palindrome\n";
   cout<<"Enter a string without spaces:"<<endl;
   getline( cin, s );
   ReadInput( s, ic );//FILL IN BLANK
   printVector(ic);//FILL IN BLANK
   cout << (palindrome(ic) ? " is " : " is not ") << "a palindrome\n";//FILL IN BLANK
   
   return 0;
   
} 

