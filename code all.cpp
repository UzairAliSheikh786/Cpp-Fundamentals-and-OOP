//1. Add Employee
//2. View All Employees
//3. Find Highest Paid Employee
//4. Search Employee by ID
//5. Exit
#include<iostream>
#include<fstream>

using namespace std;

struct Emp{
	string name;
	int id;
	float salary;
};
void dataEntry(Emp ez[],int sze);
void display(Emp ep[],int szee);
void maxSalary(Emp em[], int size);
void searchEmp(Emp emp[],int sz);
int main()

{    
    int c;
    cout<<"Welcome To Employeee Management Progam"<<endl;
    int i;
    cout<<"How many Employees Are Working in Your Office:";
	cin>>i;
	Emp e[i];
	
	cout<<"Enter Your Choice:"<<endl<<"1.Add Employee Data"<<endl<<
	"2.View All Employees"<<endl<<"3.Find Highest Paid Employee"
	<<endl<<"4.Search Employee By ID"<<endl<<"5.EXIT"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
         dataEntry(e,i);
       break;
	case 2:
		display(e,i);
		break;
	case 3:
		maxSalary(e,i);
		break;
	case 4:
		searchEmp(e,i);
		break;
	case 5:
		cout<<"EXITING ............";
		return 0;

	}
}
void dataEntry(Emp ez[],int sze)
{
    fstream f("EMPLOYEES.txt",ios::app);
	for(int j=0;j<sze;j++)
	{
	cout<<endl<<"Employee details of Employee no :"<<j+1<<endl;
	cout<<"Enter name of Employee:";
	
	getline(cin,ez[j].name);
	
	cout<<"Enter ID of Employee:";
	
	cin>>ez[j].id;
	
	cout<<"Enter salary of Employee:";
	
    cin>>ez[j].salary;
    
    f<<"Name:"<<ez[j].name<<endl;
    f<<"ID:"<<ez[j].id<<endl;
    f<<"Salary:"<<ez[j].salary<<endl; 
    f<<"--------------------"<<endl;
    cin.ignore();
    f.close();
    }
		}
void maxSalary(Emp em[], int s)
{
	int max=0;
	for(int k=0;k<s;k++)
	{
		if(em[k].salary>em[max].salary)
		{
			max=k;
		}
	}
cout<<em[max].name<<endl;
cout<<em[max].id<<endl;
cout<<em[max].salary<<endl;
}
void searchEmp(Emp emp[],int sz)
{
	int ides;
	cout<<"Enter Id of Employee to Search:";
	cin>>ides;
		for(int k=0;k<sz;k++)
	{
		if(emp[k].id==ides)
		{
			cout<<emp[k].name<<endl;
            cout<<emp[k].id<<endl;
            cout<<emp[k].salary<<endl;
		}
	}
		
	}
void display(Emp ep[],int szee)
{
	 cout<<endl<<"All Employees Details:";
    for(int j=0;j<szee;j++)
	{
	cout<<endl<<"Employee NAME:"<<ep[j].name;
    cout<<endl<<"Employee ID:"<<ep[j].id;
    cout<<endl<<"Employee Salary:"<<ep[j].salary;
    cout<<endl;
    cout<<"FILE DATA:"<<endl;
    	ifstream fin("EMPLOYEES.txt");
    string line;
 while(getline(fin,line))
 {
 	cout<<line;
 }
 fin.close(); 

}
}
	


