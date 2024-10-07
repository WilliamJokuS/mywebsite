#include <bits/stdc++.h>
using namespace std;
int main(){
    char a;
    float num1, num2;
    cout << "What do you want?\nSum(+)\nMultiply(*)\nSubtract(-)\nDivide(/)\nSquare root(v)\n";
    while(cin>>a){
	    if(a=='+') {
	        cout<<"enter your number here...";
	        cin >> num1 >> num2;
	        cout << "your number is... " << num1 + num2;
	    }else if (a== '-') {
	        cout << "enter your number here...";
	    	cin >> num1 >> num2;
	    	cout << "your number is... " << num1 - num2;
	    }else if (a== '*') {
	        cout << "enter your number here...";
	        cin >> num1 >> num2;
	        cout << "your number is... " << num1 * num2<<endl;
	    }else if (a== '/') {
	        cout << "enter your number here...";
	        cin >> num1 >> num2;
	        cout << "your number is... " << num1 / num2;
	    }else if (a== 'v') {
	        cout << "enter your number here...";
	        cin >> num1;
	        cout << "your number is... " << sqrt(num1);
	    }else{
	    	cout<<"Masukin simbol yg bener amjink";
		}
	    cout<<endl;
	}
}
