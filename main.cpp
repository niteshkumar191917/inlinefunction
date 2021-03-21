#include <iostream> 
using namespace std; 
inline int cube(int a) 
{ 
return a*a*a; 
} 
inline int square(int b) 
{ 
return b*b; 
}
int main() 
{ 
int a = 11;
cout << "The cube of 11 is: " << cube(a) << "n"; 
cout << "\nThe square of 11 is " << square(a) << "n";
return 0; 
}  