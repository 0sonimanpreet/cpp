#include<iostream>
using namespace std;

int table (int number){
    cout << "table of " << number << endl;
        for (int i =1; i<=10; i++){
            cout <<number << " X " << i << "=" << number*i << endl;
}
    return 0;
}

int calculation(int i, int num1, int num2){
 
    switch(i){
        case 1:
        cout << num1 << "+" << num2 << "=" << (num1+num2)<< endl;
        break;
        case 2:
        cout << num1 << "-" << num2 << "=" << (num1-num2)<< endl;
        break;
        case 3:
        cout << num1 << "*" << num2 << "=" << (num1*num2)<< endl;
        break;
        case 4:
        cout << num1 << "/" << num2 << "=" << (num1/num2)<< endl;
        break;
        default:
        cout << "invalid number" << endl;
    }
   return 0;
}
int main()  
{   
    int num;
    do{
        cout << "enter 1 for table" << endl; 
        cout << "enter 2 for calculations" << endl;
        cout << "enter 0 for exit" << endl;
        
        cin >> num;
        if (num == 1){
            int number;
            cout << "enter a number " << endl; 
            cin >> number;
            table(number);
            } 
        else if( num ==2){
            cout << "enter 1 for addition" << endl; 
            cout << "enter 2 for subtraction" << endl; 
            cout << "enter 3 for multiplication" << endl; 
            cout << "enter 4 for division" << endl;
            int i;
            int num1, num2;
            cout << "enter a number " << endl;
            cin >> i;
            if (i<= 4){
              cout << "numbers for calculations: " << endl;
              cin >> num1;
              cin >>  num2;
              calculation(i, num1, num2); 
        }
            else {
                cout << "invalid choice" << endl<<endl<<endl; 
            }
        }
        else {
            if(num!=0){
             cout << "invalid number" << endl;
            }
        }
    }while(num);
    return 0;
}  
