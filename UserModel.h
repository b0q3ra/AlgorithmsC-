#ifndef USER_MODEL
#define USER_MODEL

using namespace std;

namespace Models {
	
	class UserModel
	{
	public:
		static int prevId;
		int id;
		string name;
		string email;
		string password;

		UserModel() { }

		UserModel(string name, string email, string password) {
			this->id = prevId;
			prevId++;
			this->name = name;
			this->email = email;
			this->password = password;
		};


		void printData() {
			cout << endl;
			cout << "User[ " << this->name << " ] " << endl;
			cout << "Id: " << this->id << endl;
			cout << "Name: " << this->name << endl;
			cout << "Password: " << this->password << endl;
			cout << endl;
		}
	};

	int UserModel::prevId = 0;
}

#endif