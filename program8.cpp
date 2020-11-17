//Program 8: Create class methods 


#include <iostream> 
#include <conio.h> 
using namespace std;  
class classmates {  
   public:  
       int roll_no;      
       string name;      
       void insert(int i, string n)    
        {    
            roll_no= i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<roll_no<<"  "<<name<<endl;    
        }    
};  
int main()
{  
    classmates s1;   
    classmates s2;
    s1.insert(40, "Kushal");    
    s2.insert(39, "Nikhil");    
    s1.display();    
    s2.display();  
    return 0;  
}  