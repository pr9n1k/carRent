#include "FormDataCar.h"
System::Void CarRent::FormDataCar::FormDataCar_Load(System::Object^ sender, System::EventArgs^ e)
{
	if (this->vin != nullptr) {
		buttonAdd->Text = "Изменить";
		this->Text = L"Изменение данных автомобиля";
		long i = 0;
		for each (Car ^ item in listCar) {
			String^ thisVin = item->GetVIN();
			if (thisVin == vin) {
				textBoxStamp->Text = item->GetStamp();
				textBoxModel->Text = item->GetModel();
				textBoxColor->Text = item->GetColor();
				textBoxRelease->Text = item->GetRelease();
				textBoxType->Text = item->GetBodyType();
				textBoxVin->Text = item->GetVIN();
				textBoxPrice->Text = Convert::ToString(item->GetPrice());
				this->index = i;
			}
			i++;
		}
	}
	else {
		buttonAdd->Text = L"Добавить";
		this->Text = L"Добавление автомобиля";
	}
}
System::Void CarRent::FormDataCar::buttonAddCar_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxStamp->Text == "" ||
		textBoxModel->Text == "" ||
		textBoxColor->Text == "" ||
		textBoxRelease->Text == "" ||
		textBoxType->Text == "" ||
		textBoxVin->Text == "" ||
		textBoxPrice->Text == "") {
		MessageBox::Show("Не все данные введены!","Внимание!");
		return;
	}

		String^ stamp = textBoxStamp->Text;
		String^ model = textBoxModel->Text;
		String^ color = textBoxColor->Text;
		String^ release = textBoxRelease->Text;
		String^ type = textBoxType->Text;
		String^ vin = textBoxVin->Text;
		size_t price = Convert::ToUInt64(textBoxPrice->Text);
		bool isVinUnique = true;

	if (this->vin != nullptr) {
		Car^ car = gcnew Car(stamp, model, color, release, type, vin, price);
		if (vin != this->vin) {
			for each (Car ^ car in listCar) {
				String^ thisVin = car->GetVIN();
				if (thisVin == vin) {
					isVinUnique = false;
				}
			}
		}
		if (isVinUnique == false) {
			MessageBox::Show("введеный Вами Vin-кодом уже присвоен другой машине!", "Внимание!");
			return;
		}
		long i = 0;
		for each (Car ^ item in listCar) {
			if (i == index) {
				item->SetStamp(car->GetStamp());
				item->SetModel(car->GetModel());
				item->SetColor(car->GetColor());
				item->SetRelease(car->GetRelease());
				item->SetBodyType(car->GetBodyType());
				item->SetVIN(car->GetVIN());
				item->SetPrice(car->GetPrice());
			}
			i++;
		}
		data dat;
		dat.RewriteFile(listCar, fileCarBuy);
		this->~FormDataCar();

	}
	else {
		for each (Car ^ car in listCar) {
			String^ thisVin = car->GetVIN();
			if (thisVin == vin) {
				isVinUnique = false;
			}
		}
		if (isVinUnique == false) {
			MessageBox::Show("Машина, с введеным Вами Vin-кодом, уже зарегистрирована!", "Внимание!");
			return;
		}
		Car^ car = gcnew Car(stamp, model, color, release, type, vin, price);
		data dat;
		dat.AddNew(car, fileCarBuy);
		this->~FormDataCar();
	
	}
}


