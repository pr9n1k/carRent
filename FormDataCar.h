#include "File.h"
namespace CarRent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormDataCar
	/// </summary>
	public ref class FormDataCar : public System::Windows::Forms::Form
	{
	private: String^ fileCarBuy = "carBuy.txt";
	private: cliext::vector<Car^>^ listCar;
	private: String^ vin;
	private: long index;
	public:
		FormDataCar(cliext::vector<Car^>^ listCar)
		{
			this->listCar = listCar;
			this->vin = nullptr;
			index = NULL;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		FormDataCar(cliext::vector<Car^>^ listCar, String^ vin) 
		{
			this->listCar = listCar;
			this->vin = vin;
			index = NULL;
			InitializeComponent();
			
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormDataCar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::TextBox^ textBoxVin;
	private: System::Windows::Forms::TextBox^ textBoxType;
	private: System::Windows::Forms::TextBox^ textBoxRelease;
	private: System::Windows::Forms::TextBox^ textBoxColor;
	private: System::Windows::Forms::TextBox^ textBoxModel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxStamp;
	private: System::Windows::Forms::Button^ buttonAdd;

	private: System::Windows::Forms::Label^ label1;

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
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRelease = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModel = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxStamp = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->textBoxPrice, 0, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBoxVin, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBoxType, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRelease, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBoxColor, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBoxModel, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 12);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxStamp, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->buttonAdd, 0, 14);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 15;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.666667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(333, 563);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPrice->Location = System::Drawing::Point(3, 484);
			this->textBoxPrice->MaxLength = 10;
			this->textBoxPrice->Multiline = true;
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(327, 31);
			this->textBoxPrice->TabIndex = 13;
			// 
			// textBoxVin
			// 
			this->textBoxVin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxVin->Location = System::Drawing::Point(3, 410);
			this->textBoxVin->MaxLength = 20;
			this->textBoxVin->Multiline = true;
			this->textBoxVin->Name = L"textBoxVin";
			this->textBoxVin->Size = System::Drawing::Size(327, 31);
			this->textBoxVin->TabIndex = 12;
			// 
			// textBoxType
			// 
			this->textBoxType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxType->Location = System::Drawing::Point(3, 336);
			this->textBoxType->MaxLength = 20;
			this->textBoxType->Multiline = true;
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(327, 31);
			this->textBoxType->TabIndex = 11;
			// 
			// textBoxRelease
			// 
			this->textBoxRelease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRelease->Location = System::Drawing::Point(3, 262);
			this->textBoxRelease->MaxLength = 10;
			this->textBoxRelease->Multiline = true;
			this->textBoxRelease->Name = L"textBoxRelease";
			this->textBoxRelease->Size = System::Drawing::Size(327, 31);
			this->textBoxRelease->TabIndex = 10;
			// 
			// textBoxColor
			// 
			this->textBoxColor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxColor->Location = System::Drawing::Point(3, 188);
			this->textBoxColor->MaxLength = 20;
			this->textBoxColor->Multiline = true;
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(327, 31);
			this->textBoxColor->TabIndex = 9;
			// 
			// textBoxModel
			// 
			this->textBoxModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxModel->Location = System::Drawing::Point(3, 114);
			this->textBoxModel->MaxLength = 20;
			this->textBoxModel->Multiline = true;
			this->textBoxModel->Name = L"textBoxModel";
			this->textBoxModel->Size = System::Drawing::Size(327, 31);
			this->textBoxModel->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 444);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 31);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Стоимость";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 370);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Vin-код";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Кузов";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Дата выпуска";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Цвет";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Модель";
			// 
			// textBoxStamp
			// 
			this->textBoxStamp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxStamp->Location = System::Drawing::Point(3, 40);
			this->textBoxStamp->MaxLength = 20;
			this->textBoxStamp->Multiline = true;
			this->textBoxStamp->Name = L"textBoxStamp";
			this->textBoxStamp->Size = System::Drawing::Size(327, 30);
			this->textBoxStamp->TabIndex = 7;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(3, 521);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(327, 39);
			this->buttonAdd->TabIndex = 14;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &FormDataCar::buttonAddCar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Марка";
			// 
			// FormDataCar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 587);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"FormDataCar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление Авто";
			this->Load += gcnew System::EventHandler(this, &FormDataCar::FormDataCar_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormDataCar_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddCar_Click(System::Object^ sender, System::EventArgs^ e);
};
}