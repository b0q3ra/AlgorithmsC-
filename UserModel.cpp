#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "UserModel.h"

using namespace std;
using namespace Models;

int UserModel::prevId = 0;

UserModel::UserModel(string name, string email, string password) {
	this->id = prevId;
	prevId++;
	this->name = name;
	this->email = email;
	this->password = password;
}

void UserModel::printData() {
	cout << "USER(" <<this->name << ")" << endl;
	cout << "Email: " << this->email << endl;
	cout << "ID: " << this->id << endl;
	cout << endl;
}