#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private : 
		string accountHolder;
		int accountNumber;
		string accountType;
		double balance;
		
	public :
        // Default Constructor
		BankAccount(){
			accountHolder = "Amar Patil";
			accountNumber = 123456;
			accountType = "Saving";
			balance = 5000.00;
			cout<<"Default constructor called for "<< accountHolder<< endl;
		}
    	// Parameterized Constructor
    	BankAccount(string accountName, int accountNo , string accountTypo , double bal){
    		accountHolder = accountName;
			accountNumber = accountNo;
			accountType = accountTypo;
			balance = bal;
			cout << "Parameterized constructor called for " << accountHolder << endl;
    		
		}
		
		void getAccountHolder(){
			cout << "Holder: " << accountHolder<< endl;
		}
		
		void getAccountNumber(){
			cout<<"Account Number: "<< accountNumber <<endl;
			
		}
		
		void getAccountType(){
			cout << "Type: "<< accountType<< endl;
		}
		
		void getBalance(){
			cout<< "Balance: "<< balance << endl<<endl;
		}
		
		void setAccountType(string type){
			accountType = type;
			cout<< "Updated the account type to "<<accountType << endl<<endl;
			
		}
		
		double deposite(double amount){
			if (amount>0){
				balance += amount;
				cout<< "Depositing "<< amount << endl;
				cout << "New Balance: "<< balance<< endl<<endl;
			}
			else{
				cout <<"Please enter valid amount"<<endl;
				cin >> amount;
					if (amount>0){
						balance += amount;
						cout<< "Depositing "<< amount << endl;
						cout << "New Balance: "<< balance<< endl<<endl;
					}
				
			}
		}
		
		void withdraw(double amount){
			if(amount<= balance){
				balance -= amount;
				cout<< "Withdrawing "<<amount << endl;
				cout<< "New Balance: "<< balance<< endl<<endl;	
			}
			else
			{
				cout <<"Insufficient Balance"<<endl;
			}
		}
		
		void displayAccountDetails(){
		 		cout << "Holder: " << accountHolder<< endl;	
				cout<<"Account Number: "<< accountNumber <<endl;
				cout << "Type: "<< accountType<< endl;
				cout<< "Balance: "<< balance << endl;
		}
};

int main(){
	BankAccount b1;
	b1.getAccountHolder();
	b1.getAccountNumber();
	b1.getAccountType();
	b1.getBalance();
	
	int depoamt;
	cout<< "Enter deposited amount: ";
	cin>>depoamt;
	b1.deposite(depoamt);
	int withdrawamt;
	cout<<"Enter withdraw amount: ";
	cin >>withdrawamt;	
	b1.withdraw(withdrawamt);

	
	BankAccount b2("Amar patil",123456,"Current",5500);
	b2.getAccountHolder();
	b2.getAccountNumber();
	b2.getAccountType();
	b2.getBalance();
	
	int amt;
	cout<< "Enter deposited amount: ";
	cin>>amt;
	b2.deposite(amt);
	int amount;
	cout<<"Enter withdraw amount: ";
	cin >>amount;	
	b2.withdraw(amount);
	
	string type= "Current";
	b2.setAccountType(type);
	b2.displayAccountDetails();
	return 0;

	
}
