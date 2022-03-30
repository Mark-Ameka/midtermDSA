/*================= Employee Management Closed Hashing Implementation =================
  ================= March 29, 2022 ===================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20
#define EMPTY -1
#define DELETED 0

typedef char String[30];
typedef int Type;
typedef float Funds;
typedef struct{
	String EmployeeF;
	String EmployeeM;
	String EmployeeL;
}EmployeeName;

typedef struct{
	Funds Bonus;
	Funds RetirementFee;
}Benefits;

typedef struct{
	String CompanyName;
	Funds CompanyEarnings;
	Type YearsActive;
}EmplComp;

typedef struct{
	Type EmployeeID;
	EmployeeName Designation;
	Type AccountYear;
	Funds SalaryMonth;
	Benefits Extra;
	EmplComp Company;
}EmployeeInfo;

typedef struct{
	EmployeeInfo EmployeeDocu;
	Type EmployeeNext;
}EmployeeApp;

typedef struct{
	EmployeeApp EmployeeData[MAX];
	Type AvailEmployee;
}Dictionary;

Type EmployeeHash(Type EmployeeID){
	//Code here...
}

void EmployeeDocuInit(Dictionary *E){
	//Code here...
}

void EmployeeAtInsert(Dictionary *E, EmployeeInfo newEmployee){
	//Code here...
}

void EmployeeToPop(Dictionary *E){
	EmployeeInfo EMPLYSS[10] = {
			{1772, {"Mark", "Dupio", "Mendoza"}, 1998, 23882.45, {2500.20, 13000.00}, {"United Company", 2888412.00, 19}},
			{3553, {"Stacy", "Jel", "Cruz"}, 2001, 15872.22, {4881.20, 17000.00}, {"Preffers", 582734.00, 20}},
			{2362, {"Tori", "Crie", "Jellica"}, 1999, 14724.71, {1553.60, 19000.00}, {"Reeginee", 1887252.00, 13}},
			{1273, {"Ben", "Cruz", "Holly"}, 2005, 18772.52, {1500.83, 11000.00}, {"Fast Company", 186412.00, 8}},
			{1616, {"Travis", "Hobug", "Manuez"}, 2001, 12862.33, {1245.12, 15000.00}, {"United Company", 522184.00, 9}},
			{5882, {"Steven", "Zomez", "Ralf"}, 2011, 15992.52, {1500.83, 10000.00}, {"Reeginee", 200342.00, 7}},
			{6332, {"Bryan", "Inigo", "Ola"}, 2010, 12994.52, {2000.81, 11822.00}, {"Reeginee", 295733.00, 10}},
			{7337, {"Jane", "Ola", "Azenya"}, 1997, 11929.52, {4000.63, 12770.00}, {"JoinUs", 499924.00, 15}},
			{4444, {"Kia", "Lopez", "Simmons"}, 1999, 18882.52, {2015.87, 10002.00}, {"Preffers", 1972643.00, 20}},
			{1777, {"Sokki", "Greece", "Holly"}, 1992, 14777.52, {2994.23, 12888.00}, {"Fast Company", 682412.00, 17}}};
	
	Type indx;
	for(indx = 0; indx < MAX; indx++){
		//Call EmployeeAtInsert here...
	}
}

void EmployeeToDel(Dictionary *E, Type EmployeeID){
	//Code here...
}

void EmployeeVisual(Dictionary E){
	//Display Employees
	//Code here...
}

int main(){
	//Call here...
	return 0;
}
