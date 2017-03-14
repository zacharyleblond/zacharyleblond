//Zachary Leblond
//February 28, 2017

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

void Menu();
int getN(); 
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
float celsius(float);
void problem8();
void problem9();
int bSearch(string [], int, string);
void sortString(string [], int);
void problem10();


    int main(int argv,char *argc[])
    {
	int inN;
        do{
         Menu();
         inN=getN();
         switch(inN){
          case 1:    problem1();break;
          case 2:    problem2();break;
          case 3:    problem3();break;
          case 4:    problem4();break;
          case 5:    problem5();break;
          case 6:    problem6();break;
          case 7:    problem7();break;
          case 8:    problem8();break;
          case 9:    problem9();break;
          case 10:   problem10();break;
          default:   def(inN);}
        }while(inN<11);
        return 1;
    }
    void Menu()
    {
           cout<<"Type 1 for problem 1"<<endl;
           cout<<"Type 2 for problem 2"<<endl;
           cout<<"Type 3 for problem 3"<<endl;
           cout<<"Type 4 for problem 4"<<endl;
           cout<<"Type 5 for problem 5"<<endl;
           cout<<"Type 6 for problem 6"<<endl;
           cout<<"Type 7 for problem 7"<<endl;
           cout<<"Type 8 for problem 8"<<endl;
           cout<<"Type 9 for problem 9"<<endl;
           cout<<"Type 10 for problem 10"<<endl;
           cout<<"Type 11 to exit \n"<<endl;
    }
    int getN()
    {
           int inN;
           cin>>inN;
           return inN;
    }
    void problem1()
    {
        int celsius, fahr;
            cout<<"Celsius to Fahrenheit Converter "
              "Enter a temperature in Celsius: ";
        cin >> celsius;
        fahr = 9 / 5.0 * celsius + 32;
            cout << celsius << " degrees Celsius is " << fahr << " degrees "
                "Fahrenheit. \n";
    }
    void problem2()
    {
        float dollar, yen, euro;   
            cout<<"U.S. dollar to Yen and Euros Converter "
                 "Enter an amount in U.S. dollars: ";
        cin >> dollar;
        euro = dollar * 0.95;
        yen = dollar * 112.78;
            cout << dollar << " dollars is equal to " << euro << " euros or "
                 << yen << " yen.";
    }
    void problem3()
    {
        int month, year, days;   
            cout<<"Days in a month program "
                 "Enter a month (1 - 12): ";
        cin >> month;
            cout << "Enter a year: ";
        cin >> year;
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            days = 30;
            cout << days << " days.\n";
        }
        else if(month == 2)
        {
            if (year % 100 != 0 && year % 4 == 0)
            {
                days = 29;
                cout << days << " days.\n";
            }
            else 
            {
                days = 28;
                cout << days << " days.\n";
            }
        }
        else 
            days = 31;
            cout << days << "days.\n";
    }
    void problem4()
    {
        int num1, num2;
           cout << "Minimum/Maximum Program ";
           cout << "Enter two numbers: ";
           cin >> num1;
           cin >> num2;
           if(num1 > num2)
               cout << num1 << " is larger than " << num2 << endl;
           else
               cout << num2 << " is larger than " << num1 << endl;
    }
    void problem5()
    {
        int gallons, miles, mpg;
        cout << "Miles per gallon calculator";
        cout << "Enter the number of gallons your vehicle can hold: ";
        cin >> gallons;
        cout << "Enter the number of miles your vehicle can travel on a full"
                "tank: ";
        cin >> miles;
        mpg = miles / gallons;
        cout << "Your vehicle gets " << mpg << " miles to the gallon." << endl; 
    }
    void problem6()
    {  
        
        int start, rate, time;
           cout<< "This population program will predict the size of a population"
                   " of organisms.";
           cout << "Enter the starting number of organisms: ";
           cin >> start;
           if(start < 2)
           {
               cout << "Need at least two to populate, Re enter: ";
               cin >> start;
           }
           cout << "Enter their average daily population increase(As a "
                   "percentage): ";
           cin >> rate;
           if(rate < 0)
           {
               cout << "The average daily population increase must be "
                       "positive, Re enter: ";
               cin >> rate;
           }
           rate = (rate * start) / 100;
           cout << "Enter the number of days they will multiply: ";
           cin >> time;
           
           for(int i=0; i < time; i++)
           {
               cout<<"Day " << i+1 <<" : " << start << endl;
               start = start + rate;
           }
    }
    void problem7()
    {
        float fTemp, cTemp;
        cout << "Celsius Temperature Table\n";
        cout << "-------------------------\n";
        cout << "Fahrenheit        Celsius\n";
        cout << "-------------------------\n";
        for(int i = 0; i <= 20; i++)
        {
            cout << i << "       ";
            cTemp = celsius(fTemp);
            cout << "        " << cTemp << endl;
            fTemp++;
        }
    }
    float celsius(float F)
    {
        float c;
        c = (5.0/9.0) * (F - 32);
        return c;
    }
	
    void problem8()
    {
		cout<<"Rain or Shine";
    }
    void problem9()
    {
        const int size = 20;
        int results; 
        string empName;
        string names[size] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                              "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                              "Taylor, Terri", "Johnson, Jill", 
                              "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                              "James, Jean", "Weaver, Jim", "Pore, Bob",
                              "Rutherford, Greg", "Javens, Renee",
                              "Harrison, Rose", "Setzer, Cathy", 
                              "Pike, Gordon", "Holland, Beth"};
        cout << "Enter the name of the employee you'd like to search:";
        cin >> empName;
        sortString(names, size);
        //results = bSearch(names, size, empName);
        if(results == -1)
            cout << empName << " name doesn't exist in the present Array.\n";
        else
            cout << "Element name " << empName << " found at the specified "
                    "index" << results + 1 << " in the array\n";
        cout << "\nElement names list is:\n";
        for(int index = 0; index < size; index++)
        {
            cout << index + 1 << right << setw(10) << names[index] << "\n";
        }
    }
    int bSearch(const string array[], int size, string name)
    {
        int first = 0;
        int last = size - 1;
        int middle, position = -1;
        bool found =false;
        while(!found && first <= last)
        {
            middle = (first + last) / 2;
            if(array[middle].compare(name) == 0)
            {
                found = true;
                position = middle;
            }
            else if(array[middle].compare(name) > 0)
                last = middle - 1;
            else
                first = middle + 1;
        }
        return position;
        
    }
    void sortString(string names[], int size)
    {
        int start, mIndex; //Start Scan and Minimum Index
        string mVal; // Minimum Value
        for(start = 0; start < (size - 1); start++)
        {
            mVal = start;
            mVal = names[start];
            for(int index = start + 1; index < size; index++)
            {
                if(names[index].compare(mVal) < 0) 
                {
                    mVal = names[index];
                    mIndex = index;                
                }
            }
            names[mIndex] = names[start];
            names[start] = mVal;
        }
    }
    void problem10()
    {
	int input;
        int sum = 0;
           cout<<"Sum of all numbers. Enter a positive integer value: ";
           cin >> input;
           for(int i = 0; i <= input; i++)
           {
               sum += i;
           }
           cout << "The sum of all integers from 1 up to " << input << 
                   " is " << sum << endl;
    }
    void def(int inN)
    {
           cout<<"You typed "<<inN<<" to exit the program"<<endl;
    }