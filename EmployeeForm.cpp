#include "EmployeeForm.h"

System::Void CarRent::EmployeeForm::EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Text = employee->GetFirstName() + " " + employee->GetLastName();
}

System::Void CarRent::EmployeeForm::àðåíäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
}

System::Void CarRent::EmployeeForm::êëèåíòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridViewCar->Visible = false;


}

System::Void CarRent::EmployeeForm::ãëàâíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridViewCar->Visible = false;

}

System::Void CarRent::EmployeeForm::ïîêóïêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridViewCar->Visible = true;


	listCarBuy = gcnew cliext::vector<Car^>();

	int countRows = dataGridViewCar->Rows->Count;
	for (int i = countRows; i > 1; i--) {
		dataGridViewCar->Rows->RemoveAt(i - 2);
	}
	data dat;
	dat.ParseData(listCarBuy, fileCarBuy);

	int index = 1;
	for each (Car ^ car in listCarBuy) {
		dataGridViewCar->Rows->Add(index, car->GetStamp(), car->GetModel(), car->GetColor(), car->GetRelease(), car->GetBodyType(), car->GetPrice());
		index++;
	}
}

System::Void CarRent::EmployeeForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

}
