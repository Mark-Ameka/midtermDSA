// Closed Hashing (Progressive Overflow)
// -kind of like chaining implemented in cursorbased environment.
#include <stdio.h>
#include <string.h>
#include <windows.h>

// use id to mark as EMPTY or DELETED
#define SIZE 11
#define EMPTY 999
#define DELETED 1000
typedef char String[15];

typedef struct{
	int id;
	String color_name; // (use color_name as key) <- important
	String hex_value;	
	String complement[3]; // list of color_name
	int complement_count;	
} Color;

typedef struct {
	Color value;
	int next; 
} Node;

typedef struct {
	Node data[SIZE];
	int avail;
} Dictionary;

// initializes prime and synonyms
void init_Dict(Dictionary *D) {

}

// key == color_name, feel free to create your own hashing algo.
int hash_func(String key) {

}

// Given a set, inserts it all to the dictionary
void Set2Dict(Dictionary *D, Color SET[], int set_count) {

}

// returns the index if it is a member, returns -1 if not 
int member(Dictionary D, String key) {

}

// helper functions
void visualize(Dictionary D) {
    for (int i = 0; i < SIZE/2; i++) {
        printf("i[%d]: ", i);
        for (int k = i; k != -1 && D.data[k].value.id != EMPTY; k = D.data[k].next) {
            printf("|%2d %2d| ", D.data[k].value.id, D.data[k].next);
        }
        printf("\n");
    }
    printf("\n");
}

// complete all the other functions before trying this
void magic(Dictionary D, String key) {
    int index, complement;
    index = member(D, key);
    if (index != -1) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(h, D.data[index].value.id);
        printf("%s", D.data[index].value.color_name);

        // print the complements
        for (int i = 0; i < D.data[index].value.complement_count; i++) {
            SetConsoleTextAttribute(h, 15);
            printf(" --> ");
            complement = member(D, D.data[index].value.complement[i]);
            SetConsoleTextAttribute(h, D.data[complement].value.id);
            printf("%s", D.data[complement].value.color_name);
        }

        SetConsoleTextAttribute(h, 15);
    } else {
        printf("color not found\n");
    }
}

int main() {

    // Given Data
    Color SET[7] = {
        {0, "black", "#000000", {""}, 0},
        {1, "blue", "#0000FF", {"red"}, 1},
        {2, "green", "#00FF00", {"red", "violet"}, 2},
        {4, "red", "#FF0000", {"blue", "green"}, 2},
        {5, "magenta", "#FF00FF", {"green"}, 1},
        {3, "cyan", "#00FFFF", {"yellow", "magenta"}, 2},
        {14, "yellow", "#FFFF00", {"blue"}, 1}
    };


    return 0;
}