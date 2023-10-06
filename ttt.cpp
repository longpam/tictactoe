/*
Author: Long Phan
Date: 10/4/23
Purpose: Tic Tac Toe board that refreshes with each userinput. Normal Tic Tac 
Toe gameplay.
*/

#include <iostream>
using namespace std;

void print_board(char list[]) {
    printf ("   a        b       c\n\n");
    printf ("       |        |    \n");
    printf ("1  %c   |    %c   |    %c\n",list[0], list[1], list[2]);
    printf ("_______|________|________\n");
    printf ("       |        |    \n");
    printf ("2  %c   |    %c   |    %c\n",list[3], list[4], list[5]);
    printf ("_______|________|________\n");
    printf ("       |        |    \n");
    printf ("3  %c   |    %c   |    %c\n",list[6], list[7], list[8]);
    printf ("       |        |\n");
}

int main() {
    char col;
    int row;
    char list[] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    print_board(list);
    cout << "Which column would you like to place your asterisk in: " << endl;
    cin >> col;
    cout << "Which row would you like to place your asterisk in: " << endl;
    cin >> row;
    if (row == 1) { 
        if (col == 'a') {
            list[0] = '*';
        }
        if (col == 'b') {
            list[1] = '*';
        }
        if (col == 'c') {
            list[2] = '*';
        }
        print_board(list);
    }    
    if (row == 2) {
        if (col == 'a') {
            list[3] = '*';
        }
        if (col == 'b') {
            list[4] = '*';
        }
        if (col == 'c') {
            list[5] = '*';
        }
        print_board(list);
    }
    if (row == 3) {
        if (col == 'a') {
            list[6] = '*';
        }
        if (col == 'b') {
            list[7] = '*';
        }
        if (col == 'c') {
            list[8] = '*';
        }
        print_board(list);
   }
return 0;        
}
    
