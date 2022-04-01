#include<stdio.h>
#include<stdlib.h>

/*
	Insert IT Students using Open Hash -> chaining
	Insert CS Students using Closed Hash ->
*/

typedef char String[30];
typedef int Type;

typedef struct{
	Type ID;
	String fname;
	String lname;
	String mname;
	char course[4];
	Type year;
}StudentInfo;

typedef struct node{
	StudentInfo IT;
	struct node* link;
}OpenHashList, *OpenHashLink;

typedef struct{
	StudentInfo CS;
	Type next;
}CSDetails;

typedef struct{
	CSDetails CSInfo;
	Type availCS;
}ClosedHash;

typedef struct{
	OpenHashLink OH;
	ClosedHash CH;
}Dictionary;

int main(){
	
	
	return 0;
}
