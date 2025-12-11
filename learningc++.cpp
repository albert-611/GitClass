#include <iostream>
using namespace std;

bool val(int a){

    if (a%2 == 0)
    {
        return true;
    }

    else{
        return false;
    }
    
}
int main(){

   bool result = val(20);

   if (result)
   {
        cout<<"Even Number"<<endl;
   }
   else{
        cout<<"Odd Number"<<endl;
   }
   
   
}