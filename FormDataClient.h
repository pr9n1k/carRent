#pragma once
//#include "File.h"
#include "AdminForm.h"
namespace CarRent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormDataClient
	/// </summary>
	public ref class FormDataClient : public System::Windows::Forms::Form
	{
	private: String^ fileClient = "Clients.txt";
	private: cliext::vector<Client^>^ listClient;
	private: String^ pasport;
	private: long index;
	private: Action<Client^ >^ myAction;
	private: Action< Client^>^ myActionEdit;
	public:
		FormDataClient(Action<Client^>^% action,cliext::vector<Client^>^ listClient)
		{
			myAction = action;
			this->listClient = listClient;
			this->pasport = nullptr;
			index = NULL;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		FormDataClient(Action<Client^>^% action, cliext::vector<Client^>^ listClient, String^ pasport)
		{
			myActionEdit = action;
			this->listClient = listClient;
			this->pasport = pasport;
			index = NULL;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormDataClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ PanelClient;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxPasport;
	private: System::Windows::Forms::TextBox^ textBoxMName;
	private: System::Windows::Forms::TextBox^ textBoxFName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxLName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonAdd;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PanelClient = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBoxPasport = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxLName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->PanelClient->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelClient
			// 
			this->PanelClient->ColumnCount = 1;
			this->PanelClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->PanelClient->Controls->Add(this->textBoxPasport, 0, 7);
			this->PanelClient->Controls->Add(this->textBoxMName, 0, 5);
			this->PanelClient->Controls->Add(this->textBoxFName, 0, 3);
			this->PanelClient->Controls->Add(this->label4, 0, 6);
			this->PanelClient->Controls->Add(this->label3, 0, 4);
			this->PanelClient->Controls->Add(this->label2, 0, 2);
			this->PanelClient->Controls->Add(this->textBoxLName, 0, 1);
			this->PanelClient->Controls->Add(this->label1, 0, 0);
			this->PanelClient->Controls->Add(this->buttonAdd, 0, 8);
			this->PanelClient->Location = System::Drawing::Point(12, 12);
			this->PanelClient->Name = L"PanelClient";
			this->PanelClient->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->PanelClient->RowCount = 9;
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClient->Size = System::Drawing::Size(333, 379);
			this->PanelClient->TabIndex = 1;
			// 
			// textBoxPasport
			// 
			this->textBoxPasport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPasport->Location = System::Drawing::Point(3, 297);
			this->textBoxPasport->MaxLength = 10;
			this->textBoxPasport->Multiline = true;
			this->textBoxPasport->Name = L"textBoxPasport";
			this->textBoxPasport->Size = System::Drawing::Size(327, 36);
			this->textBoxPasport->TabIndex = 10;
			// 
			// textBoxMName
			// 
			this->textBoxMName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMName->Location = System::Drawing::Point(3, 213);
			this->textBoxMName->MaxLength = 20;
			this->textBoxMName->Multiline = true;
			this->textBoxMName->Name = L"textBoxMName";
			this->textBoxMName->Size = System::Drawing::Size(327, 36);
			this->textBoxMName->TabIndex = 9;
			// 
			// textBoxFName
			// 
			this->textBoxFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFName->Location = System::Drawing::Point(3, 129);
			this->textBoxFName->MaxLength = 15;
			this->textBoxFName->Multiline = true;
			this->textBoxFName->Name = L"textBoxFName";
			this->textBoxFName->Size = System::Drawing::Size(327, 36);
			this->textBoxFName->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Номер паспорта";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Отчество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Имя";
			// 
			// textBoxLName
			// 
			this->textBoxLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxLName->Location = System::Drawing::Point(3, 45);
			this->textBoxLName->MaxLength = 25;
			this->textBoxLName->Multiline = true;
			this->textBoxLName->Name = L"textBoxLName";
			this->textBoxLName->Size = System::Drawing::Size(327, 36);
			this->textBoxLName->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фамилия";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(3, 339);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(327, 37);
			this->buttonAdd->TabIndex = 14;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &FormDataClient::buttonAdd_Click);
			// 
			// FormDataClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 401);
			this->Controls->Add(this->PanelClient);
			this->Name = L"FormDataClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormDataClient";
			this->Load += gcnew System::EventHandler(this, &FormDataClient::FormDataClient_Load);
			this->PanelClient->ResumeLayout(false);
			this->PanelClient->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FormDataClient_Load(System::Object^ sender, System::EventArgs^ e);
};
}
