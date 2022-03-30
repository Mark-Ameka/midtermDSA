#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef char String[30];
typedef int Type;

typedef struct{
	Type TotalBlk;
	Type TotalLt;
	Type countHouse;
}HouseInfo;

typedef struct{
	String subName;
	String subLoc;
	Type homeOwners;
	HouseInfo totalOfHouses;
}SubInfo;

typedef struct node{
	SubInfo SubData;
	struct node *link;
}NodeList, *NodeLink;

typedef NodeLink SubDic[MAX];

int hashFunc(String subNameValue){
	//Code here...
}

void SubInit(SubDic S){
	//Code here...
}

void SubAtSorted(SubDic S, SubInfo newSub){
	//Code here...
}

void SubToPop(SubDic S){
	SubInfo SBDVSNS[MAX] = {"Evissa", "Calawisan", 402, {14, 30, 420}, "Ialo", "Cebu", 370, {35, 42, 211},
							"Kivian", "Mandaue", 356, {15, 30, 363}, "Tibanna", "Talamban", 551, {15, 30, 622},
							"OurHome", "Bohol", 537, {14, 30, 774}, "JoinUs", "Talamban", 405, {12, 60, 646},
							"Astana", "Calawisan", 447, {12, 30, 232}, "Ovalos", "Manila", 112, {55, 52, 724},
							"Navona", "Calawisan", 112, {19, 40, 333}, "Refruee", "Bohol", 782, {12, 22, 122}};
	Type indx;
	
	for(indx = 0; indx < MAX; indx++){
		//Call SubAtSorted()
	}
}

void SubToDel(SubDic S, String subName){
	//Code here...
}

void SubToDisplay(SubDic S){
	//Code here...
}

int main(){
	//Call here...
	return 0;
}
