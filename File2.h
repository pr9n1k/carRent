#include <iostream>
#include "iostream"
#include "fstream"
#include "conio.h"
#include "windows.h"
#include "locale.h"
#include "cctype"
#include "list"
#include <vector>
#include <string>
using namespace std;

void trim(string& str) {
	for (int i = 0; i < str.length(); i++)
	{
		if ((i != 0 && i != str.length()) && str[i] == ' ' && str[i + 1] != ' ')
		{
			continue;
		}
		else if (str[i] == ' ' || (str[i] == '-' && str[i + 1] == ' '))
		{
			str.erase(i, 1);
			i--;
		}
	}
	if (str.length() > 0) {
		if (str[str.length() - 1] == ' ') {
			str.erase(str.length() - 1, 1);
		}
	}
}
string expand(string str, int size) {
	for (int i = str.size(); i < size; i++) {
		str += " ";
	}
	return str;
}
class Client {
private:
	string login;
	string password;
	string firstName;
	string secondName;
	string surname;
	string dateBirth;
	unsigned long long INN;
	unsigned long long nomPasport;
public:
	Client() {
		this->login = "";
		this->password = "";
		this->firstName = "";
		this->secondName = "";
		this->surname = "";
		this->dateBirth = "";
		this->INN = 0;
		this->nomPasport = 0;
	}
	~Client() {}

	Client(string log, string pass, string fname, string sname, string surname, string datebirth, long long inn, long long nompassword) {
		this->login = log;
		this->password = pass;
		this->firstName = fname;
		this->secondName = sname;
		this->surname = surname;
		this->dateBirth = datebirth;
		this->INN = inn;
		this->nomPasport = nompassword;
	};
	//set and get
	string GetLogin() { return login; }
	void SetLogin(string log) { this->login = log; }

	string GetPassword() { return password; }
	void SetPassword(string pass) { this->password = pass; }

	string GetFirstName() { return firstName; }
	void SetFirstName(string name) { this->firstName = name; }

	string GetSecondName() { return secondName; }
	void SetSecondName(string name) { this->secondName = name; }

	string GetSurname() { return surname; }
	void SetSurname(string name) { this->surname = name; }

	string GetDateBirth() { return dateBirth; }
	void SetDateBirth(string date) { this->dateBirth = date; }

	long long GetINN() { return INN; }
	void SetINN(long long inn) { this->INN = inn; }

	long long GetNomPasport() { return nomPasport; }
	void SetNomPasword(long long nom) { this->nomPasport = nom; }

	friend ostream& operator<< (ostream& os, Client client) {
		os << "Имя: " << client.firstName << endl;
		os << "Отчество: " << client.secondName << endl;
		os << "Фамилия: " << client.surname << endl;
		os << "Дата рождения: " << client.dateBirth << endl;
		os << "ИНН: " << client.INN << endl;
		os << "Номер паспорта: " << client.nomPasport << endl;
		os << endl;
		return os;
	}
};
//class Pars {};
class pars {
private:
	vector<string> stringlist;
public:
	pars() {}
	~pars() {}

	bool ReadFromFile(string path, vector<string>& stringlist) {
		fstream file;
		file.open(path, fstream::in);
		string tmp = "";
		while (!file.eof()) {
			getline(file, tmp);
			stringlist.push_back(tmp);
		}
		return true;
	}

	string Split(const string& str, size_t& border1, size_t& border2) {
		if (border2 <= str.length()) {
			string tmp = "";
			for (; border1 < border2; border1++) {
				tmp += str[border1];
			}
			return tmp;
		}
		else {
			cout << "Строка короче, чем хотите прочитать";
		}
	}

	Client* Parsing(string prs) {
		if (prs.empty()) {
			throw exception("Строка пуста...");
		}
		//stoi - string -> int
		size_t i = 0, limit = 15;//для парсинга логина
		string tmp;
		Client* client = new Client();
		tmp = this->Split(prs, i, limit);//вырезаем место под логин
		trim(tmp); // обрезаем
		if (tmp.empty()) {
			throw exception("Данные строки не подходят для шаблона...");//проверяем
		}
		client->SetLogin(tmp);//записываем в переменную login
		//пароль
		limit += 20; tmp.clear();//добавялем длину строки, чистим переменную
		tmp = this->Split(prs, i, limit);// вырезаем место и записываем в переменную
		trim(tmp);//обрезаем
		client->SetPassword(tmp);//
		//Имя
		limit += 15; tmp.clear();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetFirstName(tmp);
		//отчество
		limit += 20; tmp.clear();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetSecondName(tmp);
		//фамилия
		limit += 25; tmp.clear();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetSurname(tmp);
		//ДР
		limit += 10; tmp.clear();
		tmp = this->Split(prs, i, limit);
		//trim(tmp);
		client->SetDateBirth(tmp);
		//ИНН
		limit += 10; tmp.clear();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetINN(stoul(tmp, NULL, 0));
		//client->SetINN(0);
		//Паспорт
		limit += 10; tmp.clear();

		size_t maxStr = prs.size();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		//long long a = stoul(tmp, NULL, 0);
		client->SetNomPasword(stoull(tmp, NULL, 0));
		//client->SetNomPasword(0);

		return client;
	}

};
class ParseData {
private:
	list<Client> list;
	vector<string> data;
	pars _pars;
public:
	ParseData(string fail) {
		_pars.ReadFromFile(fail, data);
		for (int i = 0; i < data.size(); i++) {
			list.push_back(*_pars.Parsing(data[i]));
			//cout << list.back();
		}
	}
	~ParseData() {}
	void showAll() {
		copy(list.begin(), list.end(), ostream_iterator<Client>(cout, "\n"));
	}
	bool WriteClient(Client client) {
		ofstream file;
		file.open("file1.txt", ios_base::app);
		file << endl << expand(client.GetLogin(), 15);
		file << expand(client.GetPassword(), 20);
		file << expand(client.GetFirstName(), 15);
		file << expand(client.GetSecondName(), 20);
		file << expand(client.GetSurname(), 25);
		file << expand(client.GetDateBirth(), 10);
		file << expand("1234567890", 10);
		file << expand("9020123654", 10);
		file.close();
		return true;
	}
	void GetLogPass(string** LogPass) {
		int i = 0;
		for (Client item : list) {
			string log = item.GetLogin();
			string pass = item.GetPassword();
			trim(log);
			trim(pass);
			LogPass[i][0] = log;
			LogPass[i][1] = pass;
			i++;
		}
	}

	int getSize() { return list.size(); }
};
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	string** A = new string * [10];
//	for (int i = 0; i < 10; i++) {
//		A[i] = new string[2];
//	}
//
//	string login = "Katya";
//	string password = "1234";
//	string name = "Катя";
//	string secondname = "Анатольевна";
//	string surname = "Немова";
//	string datebirth = "26.12.2001";
//	unsigned long long inn = 1234567890;
//	unsigned long long pasport = 9987654321;
//	Client client(login, password, name, secondname, surname, datebirth, inn, pasport);
//
//	ParseData a("file1.txt");
//
//	//a.showAll();
//	a.WriteClient(client);
//	cout << endl << "new" << endl;
//
//	a.GetLogPass(A);
//	for (int i = 0; i < 10; i++) {
//		cout << "Человек №" << i + 1 << endl;
//		cout << "Логин: " << A[i][0] << endl;
//		cout << "Пароль: " << A[i][1] << endl;
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < 2; i++) {
//		delete[]A[i];
//	}
//	delete[]A;
//}

