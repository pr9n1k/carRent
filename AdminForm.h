#pragma once
#include "File.h"
namespace CarRent{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	private: Employee^ Me;
	private: cliext::vector<Car^>^ listCarBuy;
	private: cliext::vector<Employee^>^ listEmployee;
	private: cliext::vector<Client^>^ listClient;
	private: String^ fileCarBuy = "carBuy.txt";
	private: String^ fileEmployee = "Employee.txt";
	private: String^ fileClient = "Clients.txt";
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonUpdateGridCar;
	private: System::Windows::Forms::Button^ buttonEditCar;
	private: System::Windows::Forms::Button^ buttonRemoveCar;
	private: System::Windows::Forms::Button^ buttonAddCar;
	private: System::Windows::Forms::TableLayoutPanel^ PanelCar;
	private: System::Windows::Forms::DataGridView^ dataGridViewCar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stamp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ release;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vin;
	private: System::Windows::Forms::TableLayoutPanel^ PanelEmployee;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonUploadGridEmployee;
	private: System::Windows::Forms::Button^ buttonEditEmployee;
	private: System::Windows::Forms::Button^ buttonRemoveEmployee;
	private: System::Windows::Forms::Button^ buttonAddEmployee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MiddleName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Role;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateBirth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ INN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pasport;
	private: System::Windows::Forms::TableLayoutPanel^ PanelClients;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ buttonUpdateGridClients;
	private: System::Windows::Forms::Button^ buttonEditClient;
	private: System::Windows::Forms::Button^ buttonRemoveClient;
	private: System::Windows::Forms::Button^ buttonAddClient;
	private: System::Windows::Forms::DataGridView^ dataGridViewClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewButtonColumn^ car;
	private: System::Windows::Forms::DataGridView^ dataGridViewEmployee;
	public:
		AdminForm(Employee^ employee)
		{
			listCarBuy = gcnew cliext::vector<Car^>();
			InitializeComponent();
			this->Me = employee;
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}
	public:
		AdminForm()
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}
	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîòğóäíèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àâòîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êëèåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàÿâêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;



	private: System::Windows::Forms::TableLayoutPanel^ PanelHome;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ ãëàâíàÿToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãëàâíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîòğóäíèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àâòîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êëèåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàÿâêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelHome = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonUpdateGridCar = (gcnew System::Windows::Forms::Button());
			this->buttonEditCar = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveCar = (gcnew System::Windows::Forms::Button());
			this->buttonAddCar = (gcnew System::Windows::Forms::Button());
			this->PanelCar = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataGridViewCar = (gcnew System::Windows::Forms::DataGridView());
			this->stamp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->release = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PanelEmployee = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonUploadGridEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonEditEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonAddEmployee = (gcnew System::Windows::Forms::Button());
			this->dataGridViewEmployee = (gcnew System::Windows::Forms::DataGridView());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MiddleName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Role = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateBirth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->INN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pasport = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PanelClients = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonUpdateGridClients = (gcnew System::Windows::Forms::Button());
			this->buttonEditClient = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveClient = (gcnew System::Windows::Forms::Button());
			this->buttonAddClient = (gcnew System::Windows::Forms::Button());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->car = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->menuStrip1->SuspendLayout();
			this->PanelHome->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->PanelCar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCar))->BeginInit();
			this->PanelEmployee->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEmployee))->BeginInit();
			this->PanelClients->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->SuspendLayout();
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
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äåéñòâèåToolStripMenuItem
			// 
			this->äåéñòâèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ãëàâíàÿToolStripMenuItem,
					this->ñîòğóäíèêèToolStripMenuItem, this->àâòîToolStripMenuItem, this->êëèåíòûToolStripMenuItem, this->çàÿâêèToolStripMenuItem
			});
			this->äåéñòâèåToolStripMenuItem->Name = L"äåéñòâèåToolStripMenuItem";
			this->äåéñòâèåToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->äåéñòâèåToolStripMenuItem->Text = L"Äåéñòâèå";
			// 
			// ãëàâíàÿToolStripMenuItem
			// 
			this->ãëàâíàÿToolStripMenuItem->Name = L"ãëàâíàÿToolStripMenuItem";
			this->ãëàâíàÿToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->ãëàâíàÿToolStripMenuItem->Text = L"Ãëàâíàÿ";
			this->ãëàâíàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::ãëàâíàÿToolStripMenuItem_Click);
			// 
			// ñîòğóäíèêèToolStripMenuItem
			// 
			this->ñîòğóäíèêèToolStripMenuItem->Name = L"ñîòğóäíèêèToolStripMenuItem";
			this->ñîòğóäíèêèToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->ñîòğóäíèêèToolStripMenuItem->Text = L"Ñîòğóäíèêè";
			this->ñîòğóäíèêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::ñîòğóäíèêèToolStripMenuItem_Click);
			// 
			// àâòîToolStripMenuItem
			// 
			this->àâòîToolStripMenuItem->Name = L"àâòîToolStripMenuItem";
			this->àâòîToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->àâòîToolStripMenuItem->Text = L"Àâòî";
			this->àâòîToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::àâòîToolStripMenuItem_Click);
			// 
			// êëèåíòûToolStripMenuItem
			// 
			this->êëèåíòûToolStripMenuItem->Name = L"êëèåíòûToolStripMenuItem";
			this->êëèåíòûToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->êëèåíòûToolStripMenuItem->Text = L"Êëèåíòû";
			this->êëèåíòûToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::êëèåíòûToolStripMenuItem_Click);
			// 
			// çàÿâêèToolStripMenuItem
			// 
			this->çàÿâêèToolStripMenuItem->Name = L"çàÿâêèToolStripMenuItem";
			this->çàÿâêèToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->çàÿâêèToolStripMenuItem->Text = L"Çàÿâêè";
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
			this->âûéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::âûéòèToolStripMenuItem_Click);
			// 
			// PanelHome
			// 
			this->PanelHome->ColumnCount = 1;
			this->PanelHome->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->PanelHome->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelHome->Controls->Add(this->panel1, 0, 0);
			this->PanelHome->Location = System::Drawing::Point(12, 27);
			this->PanelHome->Name = L"PanelHome";
			this->PanelHome->RowCount = 2;
			this->PanelHome->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->PanelHome->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->PanelHome->Size = System::Drawing::Size(760, 433);
			this->PanelHome->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(754, 210);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(314, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ãëàâíàÿ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonUpdateGridCar);
			this->groupBox1->Controls->Add(this->buttonEditCar);
			this->groupBox1->Controls->Add(this->buttonRemoveCar);
			this->groupBox1->Controls->Add(this->buttonAddCar);
			this->groupBox1->Location = System::Drawing::Point(3, 332);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(303, 186);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Äåéñòâèå";
			// 
			// buttonUpdateGridCar
			// 
			this->buttonUpdateGridCar->Location = System::Drawing::Point(154, 113);
			this->buttonUpdateGridCar->Name = L"buttonUpdateGridCar";
			this->buttonUpdateGridCar->Size = System::Drawing::Size(142, 50);
			this->buttonUpdateGridCar->TabIndex = 4;
			this->buttonUpdateGridCar->Text = L"Îáíîâèòü";
			this->buttonUpdateGridCar->UseVisualStyleBackColor = true;
			this->buttonUpdateGridCar->Click += gcnew System::EventHandler(this, &AdminForm::buttonUpdateGridCar_Click);
			// 
			// buttonEditCar
			// 
			this->buttonEditCar->Location = System::Drawing::Point(154, 38);
			this->buttonEditCar->Name = L"buttonEditCar";
			this->buttonEditCar->Size = System::Drawing::Size(142, 50);
			this->buttonEditCar->TabIndex = 3;
			this->buttonEditCar->Text = L"Èçìåíèòü";
			this->buttonEditCar->UseVisualStyleBackColor = true;
			this->buttonEditCar->Click += gcnew System::EventHandler(this, &AdminForm::buttonEditCar_Click);
			// 
			// buttonRemoveCar
			// 
			this->buttonRemoveCar->Location = System::Drawing::Point(6, 113);
			this->buttonRemoveCar->Name = L"buttonRemoveCar";
			this->buttonRemoveCar->Size = System::Drawing::Size(142, 50);
			this->buttonRemoveCar->TabIndex = 1;
			this->buttonRemoveCar->Text = L"Óäàëèòü";
			this->buttonRemoveCar->UseVisualStyleBackColor = true;
			this->buttonRemoveCar->Click += gcnew System::EventHandler(this, &AdminForm::buttonRemoveCar_Click);
			// 
			// buttonAddCar
			// 
			this->buttonAddCar->Location = System::Drawing::Point(6, 38);
			this->buttonAddCar->Name = L"buttonAddCar";
			this->buttonAddCar->Size = System::Drawing::Size(142, 50);
			this->buttonAddCar->TabIndex = 0;
			this->buttonAddCar->Text = L"Äîáàâèòü";
			this->buttonAddCar->UseVisualStyleBackColor = true;
			this->buttonAddCar->Click += gcnew System::EventHandler(this, &AdminForm::buttonAddCar_Click);
			// 
			// PanelCar
			// 
			this->PanelCar->ColumnCount = 1;
			this->PanelCar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->PanelCar->Controls->Add(this->groupBox1, 0, 1);
			this->PanelCar->Controls->Add(this->dataGridViewCar, 0, 0);
			this->PanelCar->Location = System::Drawing::Point(12, 27);
			this->PanelCar->Name = L"PanelCar";
			this->PanelCar->RowCount = 2;
			this->PanelCar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.02682F)));
			this->PanelCar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.97318F)));
			this->PanelCar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelCar->Size = System::Drawing::Size(760, 522);
			this->PanelCar->TabIndex = 2;
			this->PanelCar->Visible = false;
			// 
			// dataGridViewCar
			// 
			this->dataGridViewCar->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewCar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCar->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->stamp,
					this->model, this->color, this->release, this->type, this->price, this->Vin
			});
			this->dataGridViewCar->Location = System::Drawing::Point(3, 3);
			this->dataGridViewCar->Name = L"dataGridViewCar";
			this->dataGridViewCar->Size = System::Drawing::Size(754, 323);
			this->dataGridViewCar->TabIndex = 0;
			// 
			// stamp
			// 
			this->stamp->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->stamp->HeaderText = L"Ìàğêà";
			this->stamp->Name = L"stamp";
			this->stamp->ReadOnly = true;
			this->stamp->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// model
			// 
			this->model->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->model->HeaderText = L"Ìîäåëü";
			this->model->Name = L"model";
			this->model->ReadOnly = true;
			this->model->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// color
			// 
			this->color->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->color->HeaderText = L"Öâåò";
			this->color->Name = L"color";
			this->color->ReadOnly = true;
			this->color->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// release
			// 
			this->release->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->release->HeaderText = L"Äàòà âûïóñêà";
			this->release->Name = L"release";
			this->release->ReadOnly = true;
			this->release->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// type
			// 
			this->type->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->type->HeaderText = L"Êóçîâ";
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			this->type->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// price
			// 
			this->price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->price->HeaderText = L"Ñòîèìîñòü";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			this->price->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Vin
			// 
			this->Vin->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Vin->HeaderText = L"VIN";
			this->Vin->Name = L"Vin";
			this->Vin->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// PanelEmployee
			// 
			this->PanelEmployee->ColumnCount = 1;
			this->PanelEmployee->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->PanelEmployee->Controls->Add(this->groupBox2, 0, 1);
			this->PanelEmployee->Controls->Add(this->dataGridViewEmployee, 0, 0);
			this->PanelEmployee->Location = System::Drawing::Point(12, 27);
			this->PanelEmployee->Name = L"PanelEmployee";
			this->PanelEmployee->RowCount = 2;
			this->PanelEmployee->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.21839F)));
			this->PanelEmployee->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.78161F)));
			this->PanelEmployee->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelEmployee->Size = System::Drawing::Size(760, 522);
			this->PanelEmployee->TabIndex = 3;
			this->PanelEmployee->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonUploadGridEmployee);
			this->groupBox2->Controls->Add(this->buttonEditEmployee);
			this->groupBox2->Controls->Add(this->buttonRemoveEmployee);
			this->groupBox2->Controls->Add(this->buttonAddEmployee);
			this->groupBox2->Location = System::Drawing::Point(3, 333);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(303, 186);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Äåéñòâèå";
			// 
			// buttonUploadGridEmployee
			// 
			this->buttonUploadGridEmployee->Location = System::Drawing::Point(154, 113);
			this->buttonUploadGridEmployee->Name = L"buttonUploadGridEmployee";
			this->buttonUploadGridEmployee->Size = System::Drawing::Size(142, 50);
			this->buttonUploadGridEmployee->TabIndex = 4;
			this->buttonUploadGridEmployee->Text = L"Îáíîâèòü";
			this->buttonUploadGridEmployee->UseVisualStyleBackColor = true;
			this->buttonUploadGridEmployee->Click += gcnew System::EventHandler(this, &AdminForm::buttonUploadGridEmployee_Click);
			// 
			// buttonEditEmployee
			// 
			this->buttonEditEmployee->Location = System::Drawing::Point(154, 38);
			this->buttonEditEmployee->Name = L"buttonEditEmployee";
			this->buttonEditEmployee->Size = System::Drawing::Size(142, 50);
			this->buttonEditEmployee->TabIndex = 3;
			this->buttonEditEmployee->Text = L"Èçìåíèòü";
			this->buttonEditEmployee->UseVisualStyleBackColor = true;
			this->buttonEditEmployee->Click += gcnew System::EventHandler(this, &AdminForm::buttonEditEmployee_Click);
			// 
			// buttonRemoveEmployee
			// 
			this->buttonRemoveEmployee->Location = System::Drawing::Point(6, 113);
			this->buttonRemoveEmployee->Name = L"buttonRemoveEmployee";
			this->buttonRemoveEmployee->Size = System::Drawing::Size(142, 50);
			this->buttonRemoveEmployee->TabIndex = 1;
			this->buttonRemoveEmployee->Text = L"Óäàëèòü";
			this->buttonRemoveEmployee->UseVisualStyleBackColor = true;
			this->buttonRemoveEmployee->Click += gcnew System::EventHandler(this, &AdminForm::buttonRemoveEmployee_Click);
			// 
			// buttonAddEmployee
			// 
			this->buttonAddEmployee->Location = System::Drawing::Point(6, 38);
			this->buttonAddEmployee->Name = L"buttonAddEmployee";
			this->buttonAddEmployee->Size = System::Drawing::Size(142, 50);
			this->buttonAddEmployee->TabIndex = 0;
			this->buttonAddEmployee->Text = L"Äîáàâèòü";
			this->buttonAddEmployee->UseVisualStyleBackColor = true;
			this->buttonAddEmployee->Click += gcnew System::EventHandler(this, &AdminForm::buttonAddEmployee_Click);
			// 
			// dataGridViewEmployee
			// 
			this->dataGridViewEmployee->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewEmployee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEmployee->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->LastName,
					this->FirstName, this->MiddleName, this->Role, this->DateBirth, this->INN, this->Pasport
			});
			this->dataGridViewEmployee->Location = System::Drawing::Point(3, 3);
			this->dataGridViewEmployee->Name = L"dataGridViewEmployee";
			this->dataGridViewEmployee->Size = System::Drawing::Size(754, 323);
			this->dataGridViewEmployee->TabIndex = 0;
			// 
			// LastName
			// 
			this->LastName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->LastName->HeaderText = L"Ôàìèëèÿ";
			this->LastName->Name = L"LastName";
			this->LastName->ReadOnly = true;
			// 
			// FirstName
			// 
			this->FirstName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->FirstName->HeaderText = L"Èìÿ";
			this->FirstName->Name = L"FirstName";
			this->FirstName->ReadOnly = true;
			// 
			// MiddleName
			// 
			this->MiddleName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->MiddleName->HeaderText = L"Îò÷åñòâî";
			this->MiddleName->Name = L"MiddleName";
			this->MiddleName->ReadOnly = true;
			// 
			// Role
			// 
			this->Role->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Role->HeaderText = L"Ğîëü";
			this->Role->Name = L"Role";
			this->Role->ReadOnly = true;
			// 
			// DateBirth
			// 
			this->DateBirth->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->DateBirth->HeaderText = L"Äàòà ğîæäåíèÿ";
			this->DateBirth->Name = L"DateBirth";
			this->DateBirth->ReadOnly = true;
			// 
			// INN
			// 
			this->INN->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->INN->HeaderText = L"ÈÍÍ";
			this->INN->Name = L"INN";
			this->INN->ReadOnly = true;
			// 
			// Pasport
			// 
			this->Pasport->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Pasport->HeaderText = L"Ïàñïîğò";
			this->Pasport->Name = L"Pasport";
			this->Pasport->ReadOnly = true;
			// 
			// PanelClients
			// 
			this->PanelClients->ColumnCount = 1;
			this->PanelClients->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->PanelClients->Controls->Add(this->groupBox3, 0, 1);
			this->PanelClients->Controls->Add(this->dataGridViewClient, 0, 0);
			this->PanelClients->Location = System::Drawing::Point(12, 19);
			this->PanelClients->Name = L"PanelClients";
			this->PanelClients->RowCount = 2;
			this->PanelClients->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.21839F)));
			this->PanelClients->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.78161F)));
			this->PanelClients->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelClients->Size = System::Drawing::Size(760, 530);
			this->PanelClients->TabIndex = 4;
			this->PanelClients->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttonUpdateGridClients);
			this->groupBox3->Controls->Add(this->buttonEditClient);
			this->groupBox3->Controls->Add(this->buttonRemoveClient);
			this->groupBox3->Controls->Add(this->buttonAddClient);
			this->groupBox3->Location = System::Drawing::Point(3, 338);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(303, 186);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Äåéñòâèå";
			// 
			// buttonUpdateGridClients
			// 
			this->buttonUpdateGridClients->Location = System::Drawing::Point(154, 113);
			this->buttonUpdateGridClients->Name = L"buttonUpdateGridClients";
			this->buttonUpdateGridClients->Size = System::Drawing::Size(142, 50);
			this->buttonUpdateGridClients->TabIndex = 4;
			this->buttonUpdateGridClients->Text = L"Îáíîâèòü";
			this->buttonUpdateGridClients->UseVisualStyleBackColor = true;
			this->buttonUpdateGridClients->Click += gcnew System::EventHandler(this, &AdminForm::buttonUpdateGridClients_Click);
			// 
			// buttonEditClient
			// 
			this->buttonEditClient->Location = System::Drawing::Point(154, 38);
			this->buttonEditClient->Name = L"buttonEditClient";
			this->buttonEditClient->Size = System::Drawing::Size(142, 50);
			this->buttonEditClient->TabIndex = 3;
			this->buttonEditClient->Text = L"Èçìåíèòü";
			this->buttonEditClient->UseVisualStyleBackColor = true;
			this->buttonEditClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonEditClient_Click);
			// 
			// buttonRemoveClient
			// 
			this->buttonRemoveClient->Location = System::Drawing::Point(6, 113);
			this->buttonRemoveClient->Name = L"buttonRemoveClient";
			this->buttonRemoveClient->Size = System::Drawing::Size(142, 50);
			this->buttonRemoveClient->TabIndex = 1;
			this->buttonRemoveClient->Text = L"Óäàëèòü";
			this->buttonRemoveClient->UseVisualStyleBackColor = true;
			this->buttonRemoveClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonRemoveClient_Click);
			// 
			// buttonAddClient
			// 
			this->buttonAddClient->Location = System::Drawing::Point(6, 38);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(142, 50);
			this->buttonAddClient->TabIndex = 0;
			this->buttonAddClient->Text = L"Äîáàâèòü";
			this->buttonAddClient->UseVisualStyleBackColor = true;
			this->buttonAddClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonAddClient_Click);
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn7, this->car
			});
			this->dataGridViewClient->Location = System::Drawing::Point(3, 3);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->Size = System::Drawing::Size(754, 323);
			this->dataGridViewClient->TabIndex = 0;
			this->dataGridViewClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::dataGridView1_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Ôàìèëèÿ";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Èìÿ";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Îò÷åñòâî";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Ïàñïîğò";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// car
			// 
			this->car->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->car->HeaderText = L"Àâòî";
			this->car->Name = L"car";
			this->car->ReadOnly = true;
			this->car->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->car->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->PanelClients);
			this->Controls->Add(this->PanelEmployee);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->PanelHome);
			this->Controls->Add(this->PanelCar);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelHome->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->PanelCar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCar))->EndInit();
			this->PanelEmployee->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEmployee))->EndInit();
			this->PanelClients->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñîòğóäíèêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void àâòîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ãëàâíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddCar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRemoveCar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditCar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonUpdateGridCar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void UpDateGridCar();
	private: System::Void UpDateGridEmployee();
	private: System::Void UpDateGridClients();
	public: System::Void AddClient(Client^ client);
	public: System::Void EditClient(Client^ client, long index);
	private: System::Void buttonUploadGridEmployee_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRemoveEmployee_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddEmployee_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditEmployee_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void êëèåíòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonUpdateGridClients_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRemoveClient_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditClient_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddClient_Click(System::Object^ sender, System::EventArgs^ e);
};
}
