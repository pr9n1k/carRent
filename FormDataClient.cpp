#include "FormDataClient.h"

System::Void CarRent::FormDataClient::FormDataClient_Load(System::Object^ sender, System::EventArgs^ e)
{
	if (this->pasport != nullptr) {
		buttonAdd->Text = "��������";
		this->Text = L"��������� ������ �������";
		long i = 0;
		for each (Client ^ item in listClient) {
			String^ thisPasport = Convert::ToString(item->GetPasport());
			if (thisPasport == this->pasport) {
				textBoxFName->Text = item->GetFirstName();
				textBoxMName->Text = item->GetMiddleName();
				textBoxLName->Text = item->GetLastName();
				textBoxPasport->Text = Convert::ToString(item->GetPasport());
				this->index = i;
			}
			i++;
		}
	}
	else {
		buttonAdd->Text = L"��������";
		this->Text = L"�������� ����������";
	}
}

System::Void CarRent::FormDataClient::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxLName->Text == "" ||
		textBoxFName->Text == "" ||
		textBoxMName->Text == "" ||
		textBoxPasport->Text == "") {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}

	String^ newLName = textBoxLName->Text;
	String^ newFName = textBoxFName->Text;
	String^ newMName = textBoxMName->Text;
	size_t newPasport = Convert::ToUInt64(textBoxPasport->Text);

	if (this->pasport != nullptr) {
		Client^ client = gcnew Client(newFName, newMName, newLName, newPasport);
		if (newPasport != Convert::ToUInt64(this->pasport)) {
			for each (Client ^ client in listClient) {
				size_t thisPasport = client->GetPasport();
				if (thisPasport == newPasport) {
					MessageBox::Show("�������� ���� ����� �������� ��� �������� ������� �������!", "��������!");
					return;
				}
			}
		}
		//admin->EditClient(client, index);
		this->~FormDataClient();
	}
	else {
		for each (Client ^ item in listClient) {
			size_t thisPasport = item->GetPasport();
			if (thisPasport == newPasport) {
				MessageBox::Show("������, � �������� ���� ������� ��������, ��� ���������������!", "��������!");
				return;
			}
		}
		Client^ client = gcnew Client(newFName, newMName, newLName, newPasport);
		myAction->Invoke(client);
		this->~FormDataClient();

	}
}
