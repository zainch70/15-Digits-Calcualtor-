
#include<iostream>
#include<math.h>//for power() function.
using namespace std;
int main()
{
   const int size=15;
     long long  first=0, sec=0, result=0;
            char f[size],s[size];
            
            char sym;
             cout<<"\nEnter  Number 1 \t:\t";
             
            cin.getline(f,size);

            first=atoll(f);
            
            cout<<"\nEnter  Number 2 \t:\t";
            
            cin.getline(s,size);
            
            sec=atoll(s);
            
            
            cout<<"\n-------------------------------15 DIGIT CALCULATOR-------------------------------------------\t";
            cout<<endl;
            cout<<"MENU :\t";
            cout<<"(Note = Kindly select from following options.)\t";
            cout<<endl;
            cout<<"1- Addition."<<endl;
            cout<<"2- Subtraction."<<endl;
            cout<<"3- Multiplication."<<endl;
            cout<<"4- Integer Division."<<endl;
            cout<<"5- Modulus."<<endl;
            cout<<"6- Power."<<endl;
            cout<<"7- Exit."<<endl;
            cout<<"------------------------------------------------------------------------------------------------"<<endl;








            cin>>sym; //input a symbol
          cout<<"\n\n\n-----------------------------------------------------------------------------\n\n\n";
            //Mathematical operations

            switch (sym)
            {
                case '1':
                    result = first + sec; 
                    cout<< "Sum is :\t"<<first << " + " <<sec << " = " << result;
                    break;
                case '2':
                    result = first - sec; 
                    cout<<"Subtraction is :\t"<<first << " - " << sec << " = " << result;
                    break;
                case '3':
                    result = first * sec; 
                    cout<<"Multiplication is :\t"<<first << " * " << sec << " = " << result;
                    break;
                case '4':
                    result = first / sec; 
                    cout<<"Division is :\t"<<first << " / " << sec << " = " << result;
                    break;
                case '5':
                    result = first % sec;
                    cout<<"Modulus is :\t"<<first << " % " << sec << " = " << result;
                    break;
                case '6':
                    result =pow(first,sec); 
                    cout<<"Power is :\t"<<first << " ^ " << sec << " = " << result;
                    break;
                case'7':
                    break;
                default:
                    cout<<"\nWrong Input";

            }
            cout<<"\n\n\n-----------------------------------------------------------------------------\n\n\n";
            return 0;
}