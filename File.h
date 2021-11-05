#pragma once
#include <cliext/vector>
using namespace System;

void inline trim(String^% str) {
	String^ tmp = str->Trim();
	str = tmp;
}
inline System::String^  expand(System::String^ str, int size) {
	for (int i = str->Length; i < size; i++) {
		str += " ";
	}
	return str;
}

ref class Employee {
private:
	System::String^ login;
	System::String^ password;
	System::String^ firstName;
	System::String^ middleName;
	System::String^ lastName;
	System::String^ dateBirth;
	System::String^ role;
	unsigned long long INN;
	unsigned long long nomPasport;
public:
	Employee() {
		this->login = "";
		this->password = "";
		this->firstName = "";
		this->middleName = "";
		this->lastName = "";
		this->dateBirth = "";
		this->role = "";
		this->INN = 0;
		this->nomPasport = 0;
	}
	~Employee() {}
	Employee(System::String^ log, System::String^ pass, System::String^ fname, System::String^ sname, System::String^ surname, System::String^ datebirth,System::String^ role, long long inn, long long nompassword) {
		this->login = log;
		this->password = pass;
		this->firstName = fname;
		this->middleName = sname;
		this->lastName = surname;
		this->dateBirth = datebirth;
		this->role = role;
		this->INN = inn;
		this->nomPasport = nompassword;
	};

	System::String^ GetLogin() { return login; }
	void SetLogin(System::String^ log) { this->login = log; }

	System::String^ GetPassword() { return password; }
	void SetPassword(System::String^ pass) { this->password = pass; }

	System::String^ GetFirstName() { return firstName; }
	void SetFirstName(System::String^ name) { this->firstName = name; }

	System::String^ GetMiddleName() { return middleName; }
	void SetMiddleName(System::String^ name) { this->middleName = name; }

	System::String^ GetLastName() { return lastName; }
	void SetLastName(System::String^ name) { this->lastName = name; }

	System::String^ GetDateBirth() { return dateBirth; }
	void SetDateBirth(System::String^ date) { this->dateBirth = date; }

	System::String^ GetRole() { return role; }
	void SetRole(System::String^ role) { this->role = role; }

	long long GetINN() { return INN; }
	void SetINN(long long inn) { this->INN = inn; }

	long long GetNomPasport() { return nomPasport; }
	void SetNomPasword(long long nom) { this->nomPasport = nom; }

};
ref class Car {
private:
	String^ model;
	String^ stamp;
	String^ color;
	String^ release;
	String^ body_type;
	String^ VIN;
	unsigned long long price;

public:
	Car() {
		this->stamp = "";
		this->model = "";
		this->color = "";
		this->release = "";
		this->body_type = "";
		this->VIN = "";
		this->price = 0;
	};
	Car( String^ stamp, String^ model, String^ color, String^ release, String^ body_type, String^ VIN, unsigned long long price) {
		this->stamp = stamp;
		this->model = model;
		this->color = color;
		this->release = release;
		this->body_type = body_type;
		this->VIN = VIN;
		this->price = price;
	}
	Car(Car^ car) {
		this->stamp = car->GetStamp();
		this->model = car->GetModel();
		this->color = car->GetColor();
		this->release = car->GetRelease();
		this->body_type = car->GetBodyType();
		this->VIN = car->GetVIN();
		this->price = car->GetPrice();
	}
	~Car() {};

	String^ GetStamp() { return this->stamp; }
	void SetStamp(String^ stamp) { this->stamp = stamp; }

	String^ GetModel() { return this->model; }
	void SetModel(String^ model) { this->model = model; }

	String^ GetColor() { return this->color; }
	void SetColor(String^ color) { this->color = color; }

	String^ GetRelease() { return this->release; }
	void SetRelease(String^ release) { this->release = release; }

	String^ GetBodyType() { return this->body_type; }
	void SetBodyType(String^ body_type) { this->body_type = body_type; }

	String^ GetVIN() { return this->VIN; }
	void SetVIN(String^ VIN) { this->VIN = VIN; }

	long long GetPrice() { return this->price; }
	void SetPrice(unsigned long long price) { this->price = price; }
};
ref class Client {
private:
	String^ firstName;
	String^ MiddleName;
	String^ lastName;
	unsigned long long pasport;
public:
	Client() {
		this->firstName = "";
		this->MiddleName = "";
		this->lastName = "";
		this->pasport = NULL;
	}
	Client(String^ fName, String^ MName, String^ LName, size_t pasport) {
		this->firstName = fName;
		this->MiddleName = MName;
		this->lastName = LName;
		this->pasport = pasport;
	}
	Client(Client^ client) {
		this->firstName = client->GetFirstName();
		this->MiddleName = client->GetMiddleName();
		this->lastName = client->GetLastName();
		this->pasport = client->GetPasport();
	}
	~Client() {}
	String^ GetFirstName() { return this->firstName; }
	void SetFirstName(String^ str) { this->firstName = str; }

	String^ GetMiddleName() { return this->MiddleName; }
	void SetMiddleName(String^ str) { this->MiddleName = str; }

	String^ GetLastName() { return this->lastName; }
	void SetLastName(String^ str) { this->lastName = str; }

	unsigned long long GetPasport() { return this->pasport; }
	void SetPasport(size_t pasport) { this->pasport = pasport; }
};


ref class data {
private:
	cliext::vector<String^>^ data_str; 

	String^ Split(String^% str, size_t& border1, size_t border2) {
		if (border2 <= str->Length) {
			String^ tmp = "";
			for (; border1 < border2; border1++) {
				tmp += str[border1];
			}
			return tmp;
		}
		else {
			System::Windows::Forms::MessageBox::Show("Строка короче, чем хотите прочитать!");
		}
	}
	bool ReadFromFile(String^ path) {

		System::IO::StreamReader^ din = System::IO::File::OpenText(path);

		String^ str;
		while ((str = din->ReadLine()) != nullptr)
		{
			data_str->push_back(str);
		}
		din->Close();
		return true;
	}


	Employee^ ParsingFromFileEmployee(String^ prs) {
		if (prs == "") {
			System::Windows::Forms::MessageBox::Show("Строка пуста...");
		}
		size_t i, limit = 15;
		String^ tmp;
		Employee^ employee = gcnew Employee();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		if (tmp == "") {
			System::Windows::Forms::MessageBox::Show("Данные строки не подходят под шаблон");
			return employee;
		}
		employee->SetLogin(tmp);
		//pass
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetPassword(tmp);
		//имя
		limit += 15; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetFirstName(tmp);
		//Отчество
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetMiddleName(tmp);
		//Фамилия
		limit += 25; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetLastName(tmp);
		//ДР
		limit += 10; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetDateBirth(tmp);
		//Роль
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetRole(tmp);
		//ИНН
		limit += 10; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetINN(Convert::ToUInt64(tmp));
		//Паспорт 
		limit += 10; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		employee->SetNomPasword(Convert::ToUInt64(tmp));
		return employee;
	}
	Car^ ParsingFromFileCar(String^ prs) {
		if (prs == "") {
			System::Windows::Forms::MessageBox::Show("Строка пуста...");
		}
		size_t i = 0, limit = 20;
		String^ tmp;
		Car^ car = gcnew Car();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		if (tmp == "") {
			System::Windows::Forms::MessageBox::Show("Данные строки не подходят под шаблон");
			return car;
		}
		car->SetStamp(tmp);
		//model
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		car->SetModel(tmp);
		//color
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		car->SetColor(tmp);
		//release
		limit += 10; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		car->SetRelease(tmp);
		//body type
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		car->SetBodyType(tmp);
		//vin
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		car->SetVIN(tmp);
		//vin
		limit += 10; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		car->SetPrice(Convert::ToUInt64(tmp));
		return car;
	}
	Client^ ParsingFromFileClient(String^ prs) {
		if (prs == "") {
			System::Windows::Forms::MessageBox::Show("Строка пуста...");
		}
		size_t i, limit = 15;
		String^ tmp;
		Client^ client = gcnew Client();
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		if (tmp == "") {
			System::Windows::Forms::MessageBox::Show("Данные строки не подходят под шаблон");
			return client;
		}
		client->SetFirstName(tmp);
		//Отчество
		limit += 20; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetMiddleName(tmp);
		//Фамилия
		limit += 25; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetLastName(tmp);
		//Паспорт
		limit += 10; tmp = "";
		tmp = this->Split(prs, i, limit);
		trim(tmp);
		client->SetPasport(Convert::ToUInt64(tmp));
		return client;
	}

	String^ WriteLine(Car^ car) {
		return expand(car->GetStamp(), 20) +
			expand(car->GetModel(), 20) +
			expand(car->GetColor(), 20) +
			expand(car->GetRelease(), 10) +
			expand(car->GetBodyType(), 20) +
			expand(car->GetVIN(), 20) +
			expand(System::Convert::ToString(car->GetPrice()), 10);
	}
	String^ WriteLine(Employee^ empl) {
		return expand(empl->GetLogin(), 15) +
			expand(empl->GetPassword(), 20) +
			expand(empl->GetFirstName(), 15) +
			expand(empl->GetMiddleName(), 20) +
			expand(empl->GetLastName(), 25) +
			expand(empl->GetDateBirth(), 10) +
			expand(empl->GetRole(), 20) +
			expand(Convert::ToString(empl->GetINN()), 10) +
			expand(Convert::ToString(empl->GetNomPasport()), 10);
	}
	String^ WriteLine(Client^ client) {
		return expand(client->GetFirstName(),15)+
			expand(client->GetMiddleName(), 20) + 
			expand(client->GetLastName(), 25) + 
			expand(Convert::ToString(client->GetPasport()), 10);
	}
public:
	data() {
		data_str = gcnew cliext::vector<String^>();
	};
	~data() {};


	void ParseData(cliext::vector<Employee^>^% vec, String^ path) {
		ReadFromFile(path);
		for (int i = 0; i < data_str->size();i++) {
			vec->push_back(ParsingFromFileEmployee(data_str[i]));
		}
		data_str->clear();
	}
	void ParseData(cliext::vector<Car^>^% vec, String^ path) {
		ReadFromFile(path);
		for (int i = 0; i < data_str->size(); i++) {
			vec->push_back(ParsingFromFileCar(data_str[i]));
		}
		data_str->clear();
		
	}
	void ParseData(cliext::vector<Client^>^% vec, String^ path) {
		ReadFromFile(path);
		for (int i = 0; i < data_str->size(); i++) {
			vec->push_back(ParsingFromFileClient(data_str[i]));
		}
		data_str->clear();
	}

	void RewriteFile(cliext::vector<Car^>^ list, String^ file) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(file);
		bool isFirstLine = true;
		for each (Car ^ car in list) {
			if (isFirstLine) {
				sw->Write(WriteLine(car));
			}
			else {
				sw->Write("\r\n" + WriteLine(car));
			}
			isFirstLine = false;
		}
		sw->Close();
	}
	void RewriteFile(cliext::vector<Employee^>^ list, String^ file) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(file);
		bool isFirstLine = true;
		for each (Employee ^ item in list) {
			if (isFirstLine) {
				sw->Write(WriteLine(item));
			}
			else {
				sw->Write("\r\n" + WriteLine(item));
			}
			isFirstLine = false;
		}
		sw->Close();

	}
	void RewriteFile(cliext::vector<Client^>^ list, String^ file) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(file);
		bool isFirstLine = true;
		for each (Client ^ item in list) {
			if (isFirstLine) {
				sw->Write(WriteLine(item));
			}
			else {
				sw->Write("\r\n" + WriteLine(item));
			}
			isFirstLine = false;
		}
		sw->Close();
		
	}

	void AddNew(Car^ car, String^ file) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(file, true);
		sw->Write("\r\n" + WriteLine(car));
		sw->Close();
	}
	void AddNew(Employee^ newEmpl, String^ file) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(file, true);
		sw->Write("\r\n" + WriteLine(newEmpl));
		sw->Close();
	}
	void AddNew(Client^ newClient, String^ file) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(file, true);
		sw->Write("\r\n" + WriteLine(newClient));
		sw->Close();
	}
};

