#include<iostream>
using namespace std;

class Person
   {
   	public:
    	
        int age;
        Person(int initialAge);
        void am_I_Old();
        void yearPasses();
    };

    Person::Person(int initialAge)
	{
        // Add some more code to run some checks on initialAge
		if(initialAge<0)
    	{
   			cout<<"Age is not valid, setting age to 0.\n";
        	age=0;
		}
     	age=initialAge+1;
		
    }

    void Person::am_I_Old()
	{
        // Do some computations in here and print out the correct statement to the console 
		if(age<13)
		{
			cout << "You are young";
		}
		
		else if(age>=13 and age<18)
		{
			cout << "You are a teenager";	
		}	
		else
		{
			cout << "You are old";
		}
		
    }

    void Person::yearPasses()
	{
        // Increment the age of the person in here
		age++;
    }



int main()
{
	int t;
	int age;
    cin >> t;
    
    for(int i=0; i < t; i++) 
	{
    	cin >> age;
        Person p(age);
        
        p.am_I_Old();
        
        cout << '\n';
        
        for(int j=0; j < 3; j++) 
		{
        	p.yearPasses(); 
        }
        
        p.am_I_Old();
      
		cout << '\n';
    }

    return 0;
}

