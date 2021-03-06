#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <vector>

#include "Equipment.h"

using namespace std;

class Reservation
{
    string _id;
    string _userId;
    string _startDate;
    string _endDate;
    vector<Equipment> _equipment;

public:
    Reservation(string id, string userId, string startDate, string endDate);

    string Serialize(char separator);

    static Reservation Deserialize(string serializedData, char separator);

    string Id();

    string UserId();

    string StartDate();

    string EndDate();

    void AssignEquipmentToReservation(vector<Equipment> equipment);
};

#endif // RESERVATION_H
