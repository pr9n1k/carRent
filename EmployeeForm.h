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
	/// Ñâîäêà äëÿ EmployeeForm
	/// </summary>
	public ref class EmployeeForm : public System::Windows::Forms::Form
	{
	private:
		Employee^ employee;
		cliext::vector<Car^>^ listCarBuy;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãëàâíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êëèåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àğåíäàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîêóïêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stamp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ release;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ body_type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	String^ fileCarBuy = "carBuy.txt";
	public:
		EmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}
		EmployeeForm(Employee^ employee) {
			InitializeComponent();
			this->employee = employee;
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~EmployeeForm()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();

		}
	private: System::Windows::Forms::DataGridView^ dataGridViewCar;
	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewCar = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stamp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->release = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->body_type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãëàâíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êëèåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àğåíäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîêóïêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCar))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewCar
			// 
			this->dataGridViewCar->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewCar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCar->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id, this->stamp,
					this->model, this->color, this->release, this->body_type, this->price
			});
			this->dataGridViewCar->Location = System::Drawing::Point(0, 27);
			this->dataGridViewCar->Name = L"dataGridViewCar";
			this->dataGridViewCar->Size = System::Drawing::Size(784, 531);
			this->dataGridViewCar->TabIndex = 1;
			this->dataGridViewCar->Visible = false;
			// 
			// id
			// 
			this->id->FillWeight = 142.132F;
			this->id->HeaderText = L"ID";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 40;
			// 
			// stamp
			// 
			this->stamp->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->stamp->FillWeight = 92.978F;
			this->stamp->HeaderText = L"Ìàğêà";
			this->stamp->Name = L"stamp";
			this->stamp->ReadOnly = true;
			// 
			// model
			// 
			this->model->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->model->FillWeight = 92.978F;
			this->model->HeaderText = L"Ìîäåëü";
			this->model->Name = L"model";
			this->model->ReadOnly = true;
			// 
			// color
			// 
			this->color->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->color->FillWeight = 92.978F;
			this->color->HeaderText = L"Öâåò";
			this->color->Name = L"color";
			this->color->ReadOnly = true;
			// 
			// release
			// 
			this->release->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->release->FillWeight = 92.978F;
			this->release->HeaderText = L"Äàòà âûïóñêà";
			this->release->Name = L"release";
			this->release->ReadOnly = true;
			// 
			// body_type
			// 
			this->body_type->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->body_type->FillWeight = 92.978F;
			this->body_type->HeaderText = L"Êóçîâ";
			this->body_type->Name = L"body_type";
			this->body_type->ReadOnly = true;
			// 
			// price
			// 
			this->price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->price->FillWeight = 92.978F;
			this->price->HeaderText = L"Ñòîèìîñòü( ğóá )";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äåéñòâèåToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem, this->âûéòèToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äåéñòâèåToolStripMenuItem
			// 
			this->äåéñòâèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ãëàâíàÿToolStripMenuItem,
					this->êëèåíòûToolStripMenuItem, this->àğåíäàToolStripMenuItem, this->ïîêóïêàToolStripMenuItem
			});
			this->äåéñòâèåToolStripMenuItem->Name = L"äåéñòâèåToolStripMenuItem";
			this->äåéñòâèåToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->äåéñòâèåToolStripMenuItem->Text = L"Äåéñòâèå";
			// 
			// ãëàâíàÿToolStripMenuItem
			// 
			this->ãëàâíàÿToolStripMenuItem->Name = L"ãëàâíàÿToolStripMenuItem";
			this->ãëàâíàÿToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ãëàâíàÿToolStripMenuItem->Text = L"Ãëàâíàÿ";
			this->ãëàâíàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &EmployeeForm::ãëàâíàÿToolStripMenuItem_Click);
			// 
			// êëèåíòûToolStripMenuItem
			// 
			this->êëèåíòûToolStripMenuItem->Name = L"êëèåíòûToolStripMenuItem";
			this->êëèåíòûToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->êëèåíòûToolStripMenuItem->Text = L"Êëèåíòû";
			this->êëèåíòûToolStripMenuItem->Click += gcnew System::EventHandler(this, &EmployeeForm::êëèåíòûToolStripMenuItem_Click);
			// 
			// àğåíäàToolStripMenuItem
			// 
			this->àğåíäàToolStripMenuItem->Name = L"àğåíäàToolStripMenuItem";
			this->àğåíäàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->àğåíäàToolStripMenuItem->Text = L"Àğåíäà";
			this->àğåíäàToolStripMenuItem->Click += gcnew System::EventHandler(this, &EmployeeForm::àğåíäàToolStripMenuItem_Click);
			// 
			// ïîêóïêàToolStripMenuItem
			// 
			this->ïîêóïêàToolStripMenuItem->Name = L"ïîêóïêàToolStripMenuItem";
			this->ïîêóïêàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîêóïêàToolStripMenuItem->Text = L"Ïîêóïêà";
			this->ïîêóïêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &EmployeeForm::ïîêóïêàToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			// 
			// EmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridViewCar);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"EmployeeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EmployeeForm";
			this->Load += gcnew System::EventHandler(this, &EmployeeForm::EmployeeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCar))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void àğåíäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void êëèåíòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ãëàâíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïîêóïêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
