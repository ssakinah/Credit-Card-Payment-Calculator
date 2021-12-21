/* Credit Card Payment Calculator (CRPC). 
	- calculate the number of month required to settle down the outstanding balance
	- calculate the total amount of interest
	- display the financial state of the cardholder
*/
#include <iostream>
using namespace std;
int main(){
	
//declare the input and output
	float outbalance, mon_payment, interest_rate, basic_interest, new_interest, net_income, financial_state, 
	amount, total_interest;
	int month = 1;
	string status;
	
	cout << "**********Credit Card Payment Calculator*****************"<<endl;
//input for outstanding balance by user	
	cout << "\n\n  Enter outstanding balance: \t\t\t$";
	cin >> outbalance;

//input for interest rate in year by user	
	cout << "\n  Enter interest rate per annum (%): \t\t";
	cin >> interest_rate;
	
//calculate interest per month
	basic_interest= (interest_rate/12) / 100;
	
//input monthly payment by user	
	cout << "\n  Enter your monthly payment: \t\t\t$";
	cin >> mon_payment;
	
//input validation: monthly payment must be more 5% of outstanding balance	
	while(mon_payment < (outbalance*0.05)){
		if (mon_payment < (outbalance*0.05)){
			cout << "\n  Your monthly payment is insufficient..... \n  Enter new monthly payment: \t\t\t$";
			cin >> mon_payment;
		}	
	}
//find the number of month to settle the outstanding balance	
	while (outbalance>0){
		if (month<=12){
			outbalance = outbalance*(1+basic_interest) - mon_payment;
			month = month + 1;
		}
		else{
			new_interest = basic_interest+(0.03/12);
			outbalance = outbalance*(1+new_interest) - mon_payment;
			month = month + 1;
		}
	}
//calculate the total amount of interest
	cout <<"\n  Enter your outstanding balance again: \t$"; 
	//user should enter outstanding balance again because the value of outstanding balance is changing because of the loop
	cin >> amount;
	
		if (month<=12)
			total_interest= amount*basic_interest*month;
		else
			total_interest= amount*new_interest*month;
//input by user (net income)	
	cout << "\n  Enter net income: \t\t\t\t$";
	cin >> net_income;
	
//calculate financial state
	financial_state = (mon_payment/net_income)*100;

//determine the financial state of the user	
	if(financial_state>=30 && month>=24)
		status= "VERY BAD";
	else if (financial_state>=30 && month<=24)
		status= "BAD";
	else if(financial_state>=20 && financial_state<30)
		status= "BAD";
	else if (financial_state>10 && financial_state<20)
		status = "MODERATE";
	else if (financial_state<=10)
		status = "GOOD";
			
//display output
	cout << "_________________________________________________________";	
	cout << "\n\n        Total amount of interest is $" << total_interest << endl;
	cout << "\n\n            Number of Month is " << month << " month" << endl;
	cout << "\n\n\t      Financial state is " << status <<endl;	
}
