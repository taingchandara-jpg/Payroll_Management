#ifndef SORT_H
#define SORT_H

#include <iostream>

#include "../Components/sorting/sort_by_least_attendance.h"
#include "../Components/sorting/sort_by_most_attendance.h"
#include "../Components/display_all_data.h"
#include "../Model/structure.h"
using namespace std;
    const int default_space = 8;
    const int S_space = 12;
    const int M_space = 18;
    const int L_space = 24;
void sort(Employee * e,string file_name){
    int choice;
    while(true){
        if(e->size == 0){
            cout << "Employee doesn't enter their attendance yet!" << endl;
            return;
        }
        cout << endl;
        cout << string(50,'=')<<endl;
        cout << "1 -> sort from least to most attendance." << endl;
        cout << "2 -> sort from most to least attendance." << endl;
        cout << "0 -> Exit." << endl;
        cout << string(50,'=')<<endl;
        cout << "Enter choic: ";
        cin >> choice;
        cout << endl;
        if(choice == 1){
            sort_by_least_attendance(e,e->size);
            display_all_data(e,file_name);
        }else if(choice == 2){
            sort_by_most_attendance(e,e->size);
            display_all_data(e,file_name);
        }else if(choice == 0){
            break;
        }else {
            cout << "Invalid choice!!!" << endl;
        }
    }
}

#endif