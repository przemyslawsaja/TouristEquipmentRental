#pragma once
#include "FileDatabase.h"
class DatabaseOperator
{
private:
    FileDatabase _databaseContext;

public:
	DatabaseOperator(FileDatabase databaseContext);

	User GetUser(string email, string password);

	bool AddUser(User userToAdd);

	list<Reservation> GetUserReservations(string userId);

	list<Equipment> GetReservationEquipment(string reservationId);
};

