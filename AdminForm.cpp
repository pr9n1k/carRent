#include "AdminForm.h"
#include "FormDataClient.h"
#include "FormDataEmployee.h"
#include "FormDataCar.h"
//Загрузка формы
System::Void CarRent::AdminForm::AdminForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->Text = Me->GetFirstName() + " " + Me->GetLastName();
}
System::Void CarRent::AdminForm::textBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
// действия с в админ форме
System::Void CarRent::AdminForm::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}
System::Void CarRent::AdminForm::сотрудникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    PanelEmployee->Visible = true;
    PanelCar->Visible = false;
    PanelHome->Visible = false;
    PanelClients->Visible = false;
    UpDateGridEmployee();

}
System::Void CarRent::AdminForm::автоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    PanelCar->Visible = true;
    PanelEmployee->Visible = false;
    PanelHome->Visible = false;
    PanelClients->Visible = false;
    UpDateGridCar();
}
System::Void CarRent::AdminForm::главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    PanelHome->Visible = true;
    PanelCar->Visible = false;
    PanelEmployee->Visible = false;
    PanelClients->Visible = false;
}
System::Void CarRent::AdminForm::клиентыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    PanelClients->Visible = true;
    PanelEmployee->Visible = false;
    PanelCar->Visible = false;
    PanelHome->Visible = false;
    UpDateGridClients();
}
//Клиенты
System::Void CarRent::AdminForm::buttonUpdateGridClients_Click(System::Object^ sender, System::EventArgs^ e)
{
    UpDateGridClients();
}
System::Void CarRent::AdminForm::buttonRemoveClient_Click(System::Object^ sender, System::EventArgs^ e)
{
    int countRows = dataGridViewClient->Rows->Count;
    if (dataGridViewClient->SelectedRows->Count != 1 || dataGridViewClient->SelectedRows[0]->Index == countRows - 1) {
        MessageBox::Show("Выберите строку клиента!", "Ошибка!");
        return;
    }
    int index = dataGridViewClient->SelectedRows[0]->Index;

    String^ MesssageTitle = "Действительно хотите удалить " + listClient->at(index)->GetLastName() + " " + listClient->at(index)->GetFirstName() + "? Если Вы нажмете 'Да', все данные будут утеряны!";
    DialogResult = MessageBox::Show(MesssageTitle, "Выход из программы", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (Convert::ToString(DialogResult) == Convert::ToString("Yes")) {
        String^ thisPasport = dataGridViewClient->Rows[index]->Cells[3]->Value->ToString();
        dataGridViewClient->Rows->RemoveAt(index);
        int thisIndex = 0;
        for (int i = 0; i < listClient->size(); i++) {
            unsigned long long listPasport = listClient->at(i)->GetPasport();
            if (listPasport == Convert::ToUInt64(thisPasport)) {
                thisIndex = i;
            }
        }
        listClient->erase(listClient->begin() + thisIndex);
    }

    data dat;
    dat.RewriteFile(listClient, fileClient);
}
System::Void CarRent::AdminForm::buttonEditClient_Click(System::Object^ sender, System::EventArgs^ e)
{
    int countRows = dataGridViewClient->Rows->Count;
    if (dataGridViewClient->SelectedRows->Count != 1 || dataGridViewClient->SelectedRows[0]->Index == countRows - 1) {
        MessageBox::Show("Выберите строку клиента!", "Ошибка!");
        return;
    }
    int index = dataGridViewClient->SelectedRows[0]->Index;
    String^ thisPasport = dataGridViewClient->Rows[index]->Cells[3]->Value->ToString();
    FormDataClient^ formDataClient = gcnew FormDataClient(gcnew Action<Client^ >(this, &CarRent::AdminForm::AddClient), listClient, thisPasport);
    formDataClient->Show();
    this->Enabled = false;

}
System::Void CarRent::AdminForm::buttonAddClient_Click(System::Object^ sender, System::EventArgs^ e)
{
    FormDataClient^ formClient = gcnew FormDataClient(gcnew Action<Client^>(this,&CarRent::AdminForm::AddClient),listClient);
    formClient->Show();
    this->Enabled = false;
}
System::Void CarRent::AdminForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    //Кнопка в дата грид авто для клиента
}
//Авто
System::Void CarRent::AdminForm::buttonAddCar_Click(System::Object^ sender, System::EventArgs^ e)
{
    FormDataCar^ formDataCar = gcnew FormDataCar(listCarBuy);
    formDataCar->Show();
}
System::Void CarRent::AdminForm::buttonRemoveCar_Click(System::Object^ sender, System::EventArgs^ e)
{
    int countRows = dataGridViewCar->Rows->Count;
    if (dataGridViewCar->SelectedRows->Count != 1 || dataGridViewCar->SelectedRows[0]->Index == countRows - 1) {
        MessageBox::Show("Выберите строку машины!", "Ошибка!");
        return;
    }
    int index = dataGridViewCar->SelectedRows[0]->Index;
    String^ MesssageTitle = "Действительно хотите удалить " + listCarBuy->at(index)->GetStamp() + " " + listCarBuy->at(index)->GetModel() + "? Если Вы нажмете 'Да', все данные будут утеряны!";
    DialogResult = MessageBox::Show(MesssageTitle, "Выход из программы", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (Convert::ToString(DialogResult) == Convert::ToString("Yes")) {
        String^ thisVin = dataGridViewCar->Rows[index]->Cells[6]->Value->ToString();
        dataGridViewCar->Rows->RemoveAt(index);
        int thisIndex = 0;
        for (int i = 0; i < listCarBuy->size(); i++) {
            String^ listVin = listCarBuy->at(i)->GetVIN();
            if (listVin == thisVin) {
                thisIndex = i;
            }
        }
        listCarBuy->erase(listCarBuy->begin()+ thisIndex);
    }

    data dat;
    dat.RewriteFile(listCarBuy, fileCarBuy);
}
System::Void CarRent::AdminForm::buttonEditCar_Click(System::Object^ sender, System::EventArgs^ e){
    int countRows = dataGridViewCar->Rows->Count;
    if (dataGridViewCar->SelectedRows->Count != 1 || dataGridViewCar->SelectedRows[0]->Index == countRows - 1) {
        MessageBox::Show("Выберите строку машины!", "Ошибка!");
        return;
    }
    int index = dataGridViewCar->SelectedRows[0]->Index;
    String^ thisVin = dataGridViewCar->Rows[index]->Cells[6]->Value->ToString();
    FormDataCar^ formDataCar = gcnew FormDataCar(listCarBuy,thisVin);
    formDataCar->Show();
}
System::Void CarRent::AdminForm::buttonUpdateGridCar_Click(System::Object^ sender, System::EventArgs^ e)
{
    UpDateGridCar();
}
//Сотрудники
System::Void CarRent::AdminForm::buttonUploadGridEmployee_Click(System::Object^ sender, System::EventArgs^ e)
{
    UpDateGridEmployee();
}
System::Void CarRent::AdminForm::buttonRemoveEmployee_Click(System::Object^ sender, System::EventArgs^ e)
{
    int countRows = dataGridViewEmployee->Rows->Count;
    if (dataGridViewEmployee->SelectedRows->Count != 1 || dataGridViewEmployee->SelectedRows[0]->Index == countRows - 1) {
        MessageBox::Show("Выберите строку Сотрудника!", "Ошибка!");
        return;
    }
    int index = dataGridViewEmployee->SelectedRows[0]->Index;
    String^ MesssageTitle = "Действительно хотите удалить " + listEmployee->at(index)->GetLastName() + " " + listEmployee->at(index)->GetFirstName() + "? Если Вы нажмете 'Да', все данные будут утеряны!";
    DialogResult = MessageBox::Show(MesssageTitle, "Удаление сотрудника", MessageBoxButtons::YesNo, MessageBoxIcon::Question);    
    if (Convert::ToString(DialogResult) == Convert::ToString("Yes")) {
        String^ thisINN = dataGridViewEmployee->Rows[index]->Cells[5]->Value->ToString();
        dataGridViewEmployee->Rows->RemoveAt(index);
        int thisIndex = 0;
        for (int i = 0; i < listEmployee->size(); i++) {
            String^ listVin = Convert::ToString(listEmployee->at(i)->GetINN());
            if (listVin == thisINN) {
                thisIndex = i;
            }
        }
        listEmployee->erase(listEmployee->begin() + thisIndex);
    }

    data dat;
    dat.RewriteFile(listEmployee, fileEmployee);
}
System::Void CarRent::AdminForm::buttonAddEmployee_Click(System::Object^ sender, System::EventArgs^ e)
{
    FormDataEmployee^ formDataEmployee = gcnew FormDataEmployee(listEmployee);
    formDataEmployee->Show();
}
System::Void CarRent::AdminForm::buttonEditEmployee_Click(System::Object^ sender, System::EventArgs^ e)
{
    int countRows = dataGridViewEmployee->Rows->Count;
    if (dataGridViewEmployee->SelectedRows->Count != 1 || dataGridViewEmployee->SelectedRows[0]->Index == countRows - 1) {
        MessageBox::Show("Выберите строку сотрудника!", "Ошибка!");
        return;
    }
    int index = dataGridViewEmployee->SelectedRows[0]->Index;
    String^ thisInn = dataGridViewEmployee->Rows[index]->Cells[5]->Value->ToString();
    FormDataEmployee^ form = gcnew FormDataEmployee(listEmployee, thisInn);
    form->Show();
}
//Доп функции
System::Void CarRent::AdminForm::UpDateGridEmployee()
{
    listEmployee = gcnew cliext::vector<Employee^>();
    int countRows = dataGridViewEmployee->Rows->Count;
    for (int i = countRows; i > 1; i--) {
        dataGridViewEmployee->Rows->RemoveAt(i - 2);
    }
    data data;
    data.ParseData(listEmployee,fileEmployee);
    for each (Employee ^ item in listEmployee) {
        dataGridViewEmployee->Rows->Add(item->GetLastName(), item->GetFirstName(), item->GetMiddleName(), item->GetRole(), item->GetDateBirth(), item->GetINN(), item->GetNomPasport());
    }
}
System::Void CarRent::AdminForm::UpDateGridClients()
{
    listClient = gcnew cliext::vector<Client^>();

    int countRows = dataGridViewClient->Rows->Count;

    for (int i = countRows; i > 1; i--) {
        dataGridViewClient->Rows->RemoveAt(i - 2);
    }

    data dat;
    dat.ParseData(listClient, fileClient);
    for each (Client ^ client in listClient) {
        dataGridViewClient->Rows->Add(client->GetLastName(), client->GetFirstName(), client->GetMiddleName(), client->GetPasport(), 0);
    }
}
System::Void CarRent::AdminForm::AddClient(Client^ client)
{
    data dat;
    dat.AddNew(client, fileClient);
    UpDateGridClients();
    this->Enabled = true;
}
System::Void CarRent::AdminForm::EditClient(Client^ client, long index)
{
    long i = 0;
    for each (Client ^ item in listClient) {
        if (i == index) {
            item->SetFirstName(client->GetFirstName());
            item->SetMiddleName(client->GetMiddleName());
            item->SetLastName(client->GetLastName());
            item->SetPasport(client->GetPasport());
        }
        i++;
    }
    data dat;
    dat.RewriteFile(listClient, fileClient);
    UpDateGridClients();
    this->Enabled = true;
}
System::Void CarRent::AdminForm::UpDateGridCar()
{
    listCarBuy = gcnew cliext::vector<Car^>();

    int countRows = dataGridViewCar->Rows->Count;
    for (int i = countRows; i > 1; i--) {
        dataGridViewCar->Rows->RemoveAt(i - 2);
    }
    data dat;
    dat.ParseData(listCarBuy, fileCarBuy);
    for each (Car ^ car in listCarBuy) {
        dataGridViewCar->Rows->Add(car->GetStamp(), car->GetModel(), car->GetColor(), car->GetRelease(), car->GetBodyType(), car->GetPrice(), car->GetVIN());
    }
}








