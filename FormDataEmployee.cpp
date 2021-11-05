#include "FormDataEmployee.h"
System::Void CarRent::FormDataEmployee::FormDataEmployee_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (this->inn != nullptr) {
        buttonAdd->Text = L"Изменить";
        this->Text = L"Изменить данные сотрудника";
        long i = 0;
        for each (Employee ^ item in listEmployee)
        {
            String^ thisInn = Convert::ToString(item->GetINN());
            if (thisInn == this->inn) {
                textBoxLog->Text = item->GetLogin();
                textBoxPass->Text = item->GetPassword();
                textBoxFName->Text = item->GetFirstName();
                textBoxSName->Text = item->GetMiddleName();
                textBoxLName->Text = item->GetLastName();
                textBoxDate->Text = item->GetDateBirth();
                textBoxRole->Text = item->GetRole();
                textBoxInn->Text = Convert::ToString(item->GetINN());
                textBoxPasport->Text = Convert::ToString(item->GetNomPasport());
                this->index = i;
            }
            i++;
        }
    }
    else {
        buttonAdd->Text = L"Добавить";
        this->Text = L"Добавить сотрудника";
    }
}
System::Void CarRent::FormDataEmployee::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxLog->Text == "" ||
        textBoxPass->Text == "" ||
        textBoxFName->Text == "" ||
        textBoxSName->Text == "" ||
        textBoxLName->Text == "" ||
        textBoxDate->Text == "" ||
        textBoxRole->Text == "" ||
        textBoxInn->Text == "" ||
        textBoxPasport->Text == "") {
        MessageBox::Show("Не все данные введены!", "Внимание!");
        return;
    }
    String^ Login = textBoxLog->Text;
    String^ Pass = textBoxPass->Text;
    String^ FName = textBoxFName->Text;
    String^ SName = textBoxSName->Text;
    String^ LName = textBoxLName->Text;
    String^ Date = textBoxDate->Text;
    String^ Role = textBoxRole->Text;
    unsigned long long Inn = Convert::ToUInt64(textBoxInn->Text);
    unsigned long long Pasport = Convert::ToUInt64(textBoxPasport->Text);
    bool isInnUnique = true;

    if (this->inn != nullptr) {
        Employee^ employee = gcnew Employee(Login, Pass, FName, SName, LName, Date, Role, Inn, Pasport);

        if (Inn != Convert::ToUInt64(this->inn)) {
            for each (Employee ^ item in listEmployee) {
                size_t thisInn = item->GetINN();
                if (thisInn == Inn) {
                    MessageBox::Show("Введеный Вами ИНН-код уже присвоен другому сотруднику!", "Внимание!");
                    return;
                }
            }
        }
        long i = 0;
        for each (Employee ^ item in listEmployee) {
            if (i == index) {
                item->SetLogin(employee->GetLogin());
                item->SetPassword(employee->GetPassword());
                item->SetFirstName(employee->GetFirstName());
                item->SetMiddleName(employee->GetMiddleName());
                item->SetLastName(employee->GetLastName());
                item->SetDateBirth(employee->GetDateBirth());
                item->SetRole(employee->GetRole());
                item->SetINN(employee->GetINN());
                item->SetNomPasword(employee->GetNomPasport());
            }
            i++;
        }

        data dat;
        dat.RewriteFile(listEmployee, fileEmployee);
        this->~FormDataEmployee();
    }
    else {
        for each (Employee ^ item in listEmployee) {
            size_t thisInn = item->GetINN();
            if (thisInn == Inn) {
                MessageBox::Show("Сотрудник, с введеным Вами ИНН-кодом, уже зарегистрирован!", "Внимание!");
                return;
            }
        }
        Employee^ employee = gcnew Employee(Login, Pass, FName, SName, LName, Date, Role, Inn, Pasport);

        data dat;
        dat.AddNew(employee, this->fileEmployee);
        this->~FormDataEmployee();
    }
}


