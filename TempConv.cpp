#include<iostream>
using namespace std;

int main(){
    int choice;
    float Ctemp, Ktemp, Ftemp;
    cout<<"********Temperature Conversion Software********\n";
    do{
    cout<<"Please select the unit of temperature that you want to enter:\n";
    cout<<"1: Celsius"<<endl
        <<"2: Kelvin"<<endl
        <<"3: Fahrenheit\n"
        <<"4: Exit Program\n";

    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter the temperature for conversion in Celsius\n";
        cin>>Ctemp;
        Ftemp=(Ctemp*9/5)+32;
        cout<<Ctemp <<" in Fahrenheit is "<<Ftemp<<endl;
        Ktemp=Ctemp+273.15;
        cout<<Ctemp <<" in Kelvin is "<<Ktemp<<endl;
        break;

        case 2:
        cout<<"Enter the temperature for conversion in Kelvin\n";
        cin>>Ktemp;
        Ctemp=Ktemp-273.15;
        cout<<Ktemp <<" in Celsius is "<<Ctemp<<endl;
        Ftemp=(Ktemp - 273.15) * 9/5 + 32 ;
        cout<<Ktemp <<" in Fahrenheit is "<<Ftemp<<endl;
        break;

        case 3:
        cout<<"Enter the temperature for conversion in Fahrenheit\n";
        cin>>Ftemp;
        Ctemp=(Ftemp - 32) * 5/9;
        cout<<Ftemp <<" in Celsius is "<<Ctemp<<endl;
        Ktemp=(Ftemp - 32) * 5/9 + 273.15 ;
        cout<<Ftemp <<" in Kelvin is "<<Ktemp<<endl;
        break;

        case 4:
        break;
    }
    }
    while(choice!=4);
    return 0;
}