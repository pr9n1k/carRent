#pragma once
#include "File.h"
namespace CarRent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormDataEmployee
	/// </summary>
	public ref class FormDataEmployee : public System::Windows::Forms::Form
	{
	private: cliext::vector<Employee^ >^ listEmployee;
	private: String^ fileEmployee = "Employee.txt";
	private: String^ inn;
	private: long index;
	public:
		FormDataEmployee(cliext::vector<Employee^ >^ list)
		{
			this->listEmployee = list;
			this->inn = nullptr;
			index = NULL;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		FormDataEmployee(cliext::vector<Employee^ >^ list, String^ inn)
		{
			this->listEmployee = list;
			this->inn = inn;
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
		~FormDataEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBoxLog;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxPass;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxFName;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxSName;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxLName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxDate;
	private: System::Windows::Forms::TextBox^ textBoxRole;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxInn;
	private: System::Windows::Forms::TextBox^ textBoxPasport;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBoxLog = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxFName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxSName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxLName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRole = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxInn = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPasport = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->textBoxLog, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxPass, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxFName, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxSName, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBoxLName, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label5, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBoxDate, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRole, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBoxInn, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBoxPasport, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label8, 1, 6);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(667, 420);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// textBoxLog
			// 
			this->textBoxLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxLog->Location = System::Drawing::Point(3, 45);
			this->textBoxLog->MaxLength = 15;
			this->textBoxLog->Multiline = true;
			this->textBoxLog->Name = L"textBoxLog";
			this->textBoxLog->Size = System::Drawing::Size(327, 36);
			this->textBoxLog->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(336, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// textBoxPass
			// 
			this->textBoxPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPass->Location = System::Drawing::Point(336, 45);
			this->textBoxPass->MaxLength = 20;
			this->textBoxPass->Multiline = true;
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(327, 36);
			this->textBoxPass->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Имя";
			// 
			// textBoxFName
			// 
			this->textBoxFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFName->Location = System::Drawing::Point(3, 129);
			this->textBoxFName->MaxLength = 20;
			this->textBoxFName->Multiline = true;
			this->textBoxFName->Name = L"textBoxFName";
			this->textBoxFName->Size = System::Drawing::Size(327, 36);
			this->textBoxFName->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(336, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 31);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Отчество";
			// 
			// textBoxSName
			// 
			this->textBoxSName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSName->Location = System::Drawing::Point(336, 129);
			this->textBoxSName->MaxLength = 20;
			this->textBoxSName->Multiline = true;
			this->textBoxSName->Name = L"textBoxSName";
			this->textBoxSName->Size = System::Drawing::Size(327, 36);
			this->textBoxSName->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Фамилия";
			// 
			// textBoxLName
			// 
			this->textBoxLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxLName->Location = System::Drawing::Point(3, 213);
			this->textBoxLName->MaxLength = 25;
			this->textBoxLName->Multiline = true;
			this->textBoxLName->Name = L"textBoxLName";
			this->textBoxLName->Size = System::Drawing::Size(327, 36);
			this->textBoxLName->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(336, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Дата рождения";
			// 
			// textBoxDate
			// 
			this->textBoxDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDate->Location = System::Drawing::Point(336, 213);
			this->textBoxDate->MaxLength = 10;
			this->textBoxDate->Multiline = true;
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(327, 36);
			this->textBoxDate->TabIndex = 11;
			// 
			// textBoxRole
			// 
			this->textBoxRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRole->Location = System::Drawing::Point(3, 297);
			this->textBoxRole->MaxLength = 20;
			this->textBoxRole->Multiline = true;
			this->textBoxRole->Name = L"textBoxRole";
			this->textBoxRole->Size = System::Drawing::Size(327, 36);
			this->textBoxRole->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 252);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Роль";
			// 
			// textBoxInn
			// 
			this->textBoxInn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxInn->Location = System::Drawing::Point(336, 297);
			this->textBoxInn->MaxLength = 10;
			this->textBoxInn->Multiline = true;
			this->textBoxInn->Name = L"textBoxInn";
			this->textBoxInn->Size = System::Drawing::Size(327, 36);
			this->textBoxInn->TabIndex = 15;
			// 
			// textBoxPasport
			// 
			this->textBoxPasport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPasport->Location = System::Drawing::Point(3, 381);
			this->textBoxPasport->MaxLength = 10;
			this->textBoxPasport->Multiline = true;
			this->textBoxPasport->Name = L"textBoxPasport";
			this->textBoxPasport->Size = System::Drawing::Size(327, 36);
			this->textBoxPasport->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 336);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 31);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Паспорт";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(336, 252);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 31);
			this->label8->TabIndex = 17;
			this->label8->Text = L"ИНН";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(12, 438);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(667, 40);
			this->buttonAdd->TabIndex = 14;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &FormDataEmployee::buttonAdd_Click);
			// 
			// FormDataEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 489);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->buttonAdd);
			this->MaximumSize = System::Drawing::Size(706, 528);
			this->MinimumSize = System::Drawing::Size(706, 528);
			this->Name = L"FormDataEmployee";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormDataEmployee";
			this->Load += gcnew System::EventHandler(this, &FormDataEmployee::FormDataEmployee_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FormDataEmployee_Load(System::Object^ sender, System::EventArgs^ e);
};
}
