/*
 * Project One
 *
 *  Date: 01/29/2023
 *  Author: Sarafina Garner
 */

#include <iostream>
using namespace std;

// Shows AM or PM depending on time
string GetAMPM(int Hours12) {
    if (Hours12 > 12) {
        (Hours12 = Hours12 - 12);
        GetAMPM = "AM";
    }
    else if (Hours12 <= 12) {
        GetAMPM = "PM"
    }
}

//converts to 12hr format
int HourFormat12(int Hours12) {
    return (Hours12 == 0 || Hours12 == 12) ? 12 : Hours12 % 12;
}

//prints the 12hr format
void Display_12HourFormat(int seconds, int minutes, int Hours12) {
    cout<<"\t\t*************************\t\t" << endl;
    cout<<"\t\t*\t12-Hour Clock\t*\t\t";
    cout.fill('0');
    cout << "\t\t*\t" << HourFormat12(Hours12) << ":" << minutes << ":" << seconds << " " << GetAMPM(Hours12) << "\t*";
    cout<<"\t\t*************************\t\t" << endl;
}

//prints the 24hr format
void Display_24HourFormat(int seconds, int minutes, int Hours24) {
    cout<<"\t\t*************************\t\t" << endl;
    cout<<"*\t24-Hour Clock\t*\n";
    cout.fill('0');
    cout << "\t\t*\t" << Hours24 << ":" << minutes << ":" << seconds << "\t*";
    cout<<"\t\t*************************\t\t" << endl;
}
    
void AddHour(int hour) {
    hour = (hour + 1) % 24;
}
    
void AddMinute(int hour, int min) {
    if (min == 59) {
        AddHour(hour);
}
min = (min + 1) % 60;
}

void AddSecond(int min, int sec) {
    if (sec == 59) {
        AddMinute(min, sec);
}
sec = (sec + 1) % 60;
}

// return AM or PM
string GetAMPM(int Hours12) {
}

// This method prints the menu options
void Menu() {
    cout << "\n\n************************\n" << endl;
    cout << "* 1 - Add one hour\t*" << endl;
    cout << "* 2 - Add one minute\t*" << endl;
    cout << "* 3 - Add one second\t*" << endl;
    cout << "* 4 - Exit program\t*" << endl;
    cout << "\n\n************************\n" << endl;

}

int main() {  
    int seconds, minutes, hours;

//time in seconds
time_t total_seconds = time(0); 

int option;
do {
// Menu is called
    Menu();
    cin >> option;
    
// user input 1
if (option == 1) {
    HourFormat12(hours);
    AddHour(hours);
    GetAMPM(hours);
    Display_12HourFormat(seconds, minutes, hours);
    Display_24HourFormat(seconds, minutes, hours);
}
    // option is 2
else if (option == 2) {
    AddMinute(minutes, seconds);
    GetAMPM(hours);
}
    // option is 3,
else if (option == 3) {
    AddSecond(minutes, seconds);
    GetAMPM(hours);
        
}
    // option is 4,
else if (option == 4) {
    cout << "Goodbye";
    break;
}
else {
    cout << "Invalid Input." << endl;
}
} 
while (option != 4);
}







