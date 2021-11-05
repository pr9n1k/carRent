#pragma once
#include "EmployeeForm.h"
#include "AdminForm.h"
//#include "File.h"

namespace CarRent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	private:
		cliext::vector<Employee^>^ list;
		String^ file = "Employee.txt";
	public:
		StartForm(void)
		{
			list = gcnew cliext::vector<Employee^>();
			data dat;
			dat.ParseData(list, file); 
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ StartText;
	protected:
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Label^ labelStartSecond;
	private: System::Windows::Forms::Label^ labelLogin;
	private: System::Windows::Forms::Label^ labelPass;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPass;


	private: System::Windows::Forms::Button^ buttonLogin;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
			this->StartText = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelStartSecond = (gcnew System::Windows::Forms::Label());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelPass = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StartText
			// 
			this->StartText->AutoSize = true;
			this->StartText->BackColor = System::Drawing::Color::Transparent;
			this->StartText->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartText->Location = System::Drawing::Point(230, 97);
			this->StartText->Name = L"StartText";
			this->StartText->Size = System::Drawing::Size(339, 41);
			this->StartText->TabIndex = 0;
			this->StartText->Text = L"Добро Пожаловать!";
			// 
			// buttonStart
			// 
			this->buttonStart->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->buttonStart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->buttonStart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonStart->Location = System::Drawing::Point(300, 270);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(200, 60);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"Начать";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &StartForm::buttonStart_Click);
			// 
			// labelStartSecond
			// 
			this->labelStartSecond->AutoSize = true;
			this->labelStartSecond->BackColor = System::Drawing::Color::Transparent;
			this->labelStartSecond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelStartSecond->Location = System::Drawing::Point(284, 97);
			this->labelStartSecond->Name = L"labelStartSecond";
			this->labelStartSecond->Size = System::Drawing::Size(232, 37);
			this->labelStartSecond->TabIndex = 2;
			this->labelStartSecond->Text = L"Логин и пароль";
			this->labelStartSecond->Visible = false;
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->BackColor = System::Drawing::Color::Transparent;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLogin->Location = System::Drawing::Point(36, 166);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(98, 37);
			this->labelLogin->TabIndex = 3;
			this->labelLogin->Text = L"Логин";
			this->labelLogin->Visible = false;
			// 
			// labelPass
			// 
			this->labelPass->AutoSize = true;
			this->labelPass->BackColor = System::Drawing::Color::Transparent;
			this->labelPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPass->Location = System::Drawing::Point(36, 249);
			this->labelPass->Name = L"labelPass";
			this->labelPass->Size = System::Drawing::Size(124, 37);
			this->labelPass->TabIndex = 4;
			this->labelPass->Text = L"Пароль";
			this->labelPass->Visible = false;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxLogin->Location = System::Drawing::Point(237, 166);
			this->textBoxLogin->Multiline = true;
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(332, 37);
			this->textBoxLogin->TabIndex = 5;
			this->textBoxLogin->Visible = false;
			// 
			// textBoxPass
			// 
			this->textBoxPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPass->Location = System::Drawing::Point(237, 249);
			this->textBoxPass->Multiline = true;
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(332, 37);
			this->textBoxPass->TabIndex = 6;
			this->textBoxPass->Visible = false;
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(237, 364);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(332, 60);
			this->buttonLogin->TabIndex = 7;
			this->buttonLogin->Text = L"Войти";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Visible = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &StartForm::buttonLogin_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxPass);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->labelPass);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->labelStartSecond);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->StartText);
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &StartForm::StartForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StartForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		StartText->Visible = false;
		buttonStart->Visible = false;
		labelStartSecond->Visible = true;
		labelPass->Visible = true;
		labelLogin->Visible = true;
		textBoxPass->Visible = true;
		textBoxLogin->Visible = true;
		buttonLogin->Visible = true;
	}
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		bool ident = false;

		String^ login = textBoxLogin->Text;
		String^ pass = textBoxPass->Text;

		for each (Employee^ elem in list) {
			if (login == elem->GetLogin() && pass == elem->GetPassword() && elem->GetRole() == "Администратор") {
				AdminForm^ adminForm = gcnew AdminForm(elem);
				adminForm->Show();
				this->Hide();
				ident = true;
			}else if(login == elem->GetLogin() && pass == elem->GetPassword() && elem->GetRole() == "Сотрудник") {
				EmployeeForm^ emplForm = gcnew EmployeeForm(elem);
				emplForm->Show();
				this->Hide();
				ident = true;
			}
		}
		if (!ident) {
			textBoxPass->Text = "";
			MessageBox::Show("Логин и пароль введен не правильно!");
		}
	}
};
}
