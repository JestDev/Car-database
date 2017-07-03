#ifndef AUTO_SCRIPT_H_INCLUDED
#define AUTO_SCRIPT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Auto {
protected:
    int year;
    int month;
    int day;
    string color;
    float engine_volume;
    int doors;
public:
    int date_year;
    int date_month;
    int date_day;

    void set_date () {
        cout << "Year: ";
        cin >> date_year;
        cout << endl;

        cout << "Month: ";
        cin >> date_month;
        cout << endl;

        cout << "Day: ";
        cin >> date_day;
        cout << endl;
    }

    void get_date () {
        year = date_year;
        month = date_month;
        day = date_day;
    }
};

class AutoData : public Auto {
public:
    string c_color;
    float e_engine_volume;
    int d_doors;

    void set_color () {
        cout << "Color of your car: ";
        cin >> c_color;
        cout << endl;
    }

    void get_color () {
        color = c_color;
    }

    void set_volume () {
        cout << "The volume of engine: ";
        cin >> e_engine_volume;
        cout << endl;
    }

    void get_volume () {
        engine_volume = e_engine_volume;
    }

    void set_doors () {
        cout << "Number of doors in your car: ";
        cin >> d_doors;
        cout << endl;
    }

    void get_doors () {
        doors = d_doors;
    }

    void data () {
        cout << "Some info about your car:" << endl;
        cout << "This car made on " << year << "." << month << "." << day << endl;
        cout << "Color: " << color << endl;
        cout << "Engine volume: " << engine_volume << endl;
        cout << "Number of doors: " << doors << endl;
    }
};

#endif // AUTO_SCRIPT_H_INCLUDED
