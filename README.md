# Credit-Card-Payment-Calculator

### SPECIFICATION OF REQUIREMENTS
<br>INPUT: 
1. outstanding balance
2. monthly payment
3. basic interest per year
4. net income
5. amount

<br>OUTPUT: 
1.	financial state
2.	the number of month
3.	total amount of interest

<br>CONSTRAINTS:
1.	The monthly payment is not less than 5% from the outstanding balance
2.	An extra interest, 3% will be included if the number of months exceeds 12 months

<br>PROCESS & FORMULA:
1.	calculate the basic interest per month: 
basic interest = (interest rate/12)/100
2.	calculate the payment for every month (month<=12): 
outstanding balance= outstanding balance*(1 + basic interest) – monthly payment 
3.	calculate the new interest after 12 months:
new interest = basic interest + (0.03/12)
4.	calculate the payment after 12 months:
outstanding balance = outstanding balance*(1 + new interest) – monthly payment
5.	calculate the total amount of interest if number of months is less than or equal to 12 months :
total amount of interest = amount*basic interest*month
6.	calculate the total amount of interest if number of months is more than 12 months :
total amount of interest = amount * new interest * month
7.	calculate the financial status 
financial status = (monthly payment/net income)*100
<br>

### Others:

[Pseudocode and Flowchart.docx](https://github.com/ssakinah/Credit-Card-Payment-Calculator/files/7750642/Pseudocode.and.Flowchart.docx)

[Output.docx](https://github.com/ssakinah/Credit-Card-Payment-Calculator/files/7750650/Output.docx)
