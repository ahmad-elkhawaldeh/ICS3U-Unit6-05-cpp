// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2021
// This program uses an array


#include<iostream>
using namespace std;


int getAvg(int array[], int size) {

        int total = 0;
        for(int loop = 0; loop < size; loop++)
                total += array[loop];
        return total/size;
}

int main() {
        int array[100];
        int size = 0, number;
        cout << "Please enter 1 mark at a time. Enter -1 to end." << endl;
        //reading scores from user untill he gives -1
        while (true) {
                cout << "What is your mark? (as %) : ";
                cin >> number;
                //stop when user enters -1
                if (number == -1) break;
                array[size++] = number;
        }
        ///printing average
        cout<<"The average is " << getAvg(array,size) << "%";
}
