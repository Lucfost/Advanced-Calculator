//Abdullayev
#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//Constructor::
			//
		}

	protected:
		/// <summary>
		/// 
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn_plus_minus;

	private: System::Windows::Forms::Button^ button_c;

	private: System::Windows::Forms::Button^ button_ce;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ tempratureToolStripMenuItem;
	private: System::Windows::Forms::Label^ lblShowOp;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ txtConvert;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ lblConvert;





	private:
		/// <summary>
		/// 
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 
		/// 
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn_plus_minus = (gcnew System::Windows::Forms::Button());
			this->button_c = (gcnew System::Windows::Forms::Button());
			this->button_ce = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblConvert = (gcnew System::Windows::Forms::TextBox());
			this->txtConvert = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tempratureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->button20, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->button19, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->button18, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->button17, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button16, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button15, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button14, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button13, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button12, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_plus_minus, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_c, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_ce, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 99);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(262, 344);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(198, 275);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 66);
			this->button20->TabIndex = 22;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic_Op);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Silver;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button19->Location = System::Drawing::Point(133, 275);
			this->button19->Name = L"button19";
			this->button19->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button19->Size = System::Drawing::Size(59, 66);
			this->button19->TabIndex = 21;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(68, 275);
			this->button18->Name = L"button18";
			this->button18->Padding = System::Windows::Forms::Padding(4, 0, 0, 8);
			this->button18->Size = System::Drawing::Size(59, 66);
			this->button18->TabIndex = 20;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(3, 275);
			this->button17->Name = L"button17";
			this->button17->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button17->Size = System::Drawing::Size(59, 66);
			this->button17->TabIndex = 19;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(198, 207);
			this->button16->Name = L"button16";
			this->button16->Padding = System::Windows::Forms::Padding(3, 2, 0, 0);
			this->button16->Size = System::Drawing::Size(61, 62);
			this->button16->TabIndex = 18;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic_Op);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(133, 207);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(59, 62);
			this->button15->TabIndex = 17;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(68, 207);
			this->button14->Name = L"button14";
			this->button14->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button14->Size = System::Drawing::Size(59, 62);
			this->button14->TabIndex = 16;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(3, 207);
			this->button13->Name = L"button13";
			this->button13->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button13->Size = System::Drawing::Size(59, 62);
			this->button13->TabIndex = 15;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(198, 139);
			this->button12->Name = L"button12";
			this->button12->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button12->Size = System::Drawing::Size(61, 62);
			this->button12->TabIndex = 14;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic_Op);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(133, 139);
			this->button11->Name = L"button11";
			this->button11->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button11->Size = System::Drawing::Size(59, 62);
			this->button11->TabIndex = 13;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(68, 139);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button10->Size = System::Drawing::Size(59, 62);
			this->button10->TabIndex = 12;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(3, 139);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button9->Size = System::Drawing::Size(59, 62);
			this->button9->TabIndex = 11;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(198, 71);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button8->Size = System::Drawing::Size(61, 62);
			this->button8->TabIndex = 10;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic_Op);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(133, 71);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button7->Size = System::Drawing::Size(59, 62);
			this->button7->TabIndex = 9;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(68, 71);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button6->Size = System::Drawing::Size(59, 62);
			this->button6->TabIndex = 8;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(3, 71);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(59, 62);
			this->button5->TabIndex = 7;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// btn_plus_minus
			// 
			this->btn_plus_minus->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btn_plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_plus_minus->Location = System::Drawing::Point(198, 3);
			this->btn_plus_minus->Name = L"btn_plus_minus";
			this->btn_plus_minus->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btn_plus_minus->Size = System::Drawing::Size(61, 62);
			this->btn_plus_minus->TabIndex = 6;
			this->btn_plus_minus->Text = L"±";
			this->btn_plus_minus->UseVisualStyleBackColor = false;
			this->btn_plus_minus->Click += gcnew System::EventHandler(this, &MainForm::btn_plus_minus_Click);
			// 
			// button_c
			// 
			this->button_c->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_c->Location = System::Drawing::Point(133, 3);
			this->button_c->Name = L"button_c";
			this->button_c->Size = System::Drawing::Size(59, 62);
			this->button_c->TabIndex = 5;
			this->button_c->Text = L"C";
			this->button_c->UseVisualStyleBackColor = false;
			this->button_c->Click += gcnew System::EventHandler(this, &MainForm::button_c_Click);
			// 
			// button_ce
			// 
			this->button_ce->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_ce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ce->Location = System::Drawing::Point(68, 3);
			this->button_ce->Name = L"button_ce";
			this->button_ce->Size = System::Drawing::Size(59, 62);
			this->button_ce->TabIndex = 4;
			this->button_ce->Text = L"CE";
			this->button_ce->UseVisualStyleBackColor = false;
			this->button_ce->Click += gcnew System::EventHandler(this, &MainForm::button_ce_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 62);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::Window;
			this->txtDisplay->Location = System::Drawing::Point(12, 41);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(262, 41);
			this->txtDisplay->TabIndex = 2;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->Controls->Add(this->button21, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->button22, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->button23, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->button24, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->button25, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->button26, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->button27, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->button28, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->button29, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->button30, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->button31, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->button32, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->button33, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->button34, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->button35, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->button36, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->button37, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->button38, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->button39, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->button40, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(290, 99);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(262, 344);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(198, 275);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(59, 66);
			this->button21->TabIndex = 22;
			this->button21->Text = L"%";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MainForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(133, 275);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(59, 66);
			this->button22->TabIndex = 21;
			this->button22->Text = L"Oct";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MainForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(68, 275);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(59, 66);
			this->button23->TabIndex = 20;
			this->button23->Text = L"Mod";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(3, 275);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(59, 66);
			this->button24->TabIndex = 19;
			this->button24->Text = L"Exp";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(198, 207);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(59, 62);
			this->button25->TabIndex = 18;
			this->button25->Text = L"In x";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MainForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(133, 207);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(59, 62);
			this->button26->TabIndex = 17;
			this->button26->Text = L"Hex";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MainForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(68, 207);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(59, 62);
			this->button27->TabIndex = 16;
			this->button27->Text = L"Tan";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MainForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(3, 207);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(59, 62);
			this->button28->TabIndex = 15;
			this->button28->Text = L"Tanh";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MainForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(198, 139);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(59, 62);
			this->button29->TabIndex = 14;
			this->button29->Text = L"1/x";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MainForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(133, 139);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(59, 62);
			this->button30->TabIndex = 13;
			this->button30->Text = L"Bin";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MainForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(68, 139);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(59, 62);
			this->button31->TabIndex = 12;
			this->button31->Text = L"Cos";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MainForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(3, 139);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(59, 62);
			this->button32->TabIndex = 11;
			this->button32->Text = L"Cosh";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MainForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(198, 71);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(59, 62);
			this->button33->TabIndex = 10;
			this->button33->Text = L"x^3";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MainForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(133, 71);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(59, 62);
			this->button34->TabIndex = 9;
			this->button34->Text = L"Dec";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MainForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(68, 71);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(59, 62);
			this->button35->TabIndex = 8;
			this->button35->Text = L"Sin";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MainForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(3, 71);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(59, 62);
			this->button36->TabIndex = 7;
			this->button36->Text = L"Sinh";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MainForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(198, 3);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(59, 62);
			this->button37->TabIndex = 6;
			this->button37->Text = L"x^2";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MainForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(133, 3);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(59, 62);
			this->button38->TabIndex = 5;
			this->button38->Text = L"Sqrt";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MainForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(68, 3);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(59, 62);
			this->button39->TabIndex = 4;
			this->button39->Text = L"Log";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MainForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(3, 3);
			this->button40->Name = L"button40";
			this->button40->Padding = System::Windows::Forms::Padding(5, 0, 0, 8);
			this->button40->Size = System::Drawing::Size(59, 62);
			this->button40->TabIndex = 3;
			this->button40->Text = L"𝜋";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MainForm::button40_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->lblConvert);
			this->panel1->Controls->Add(this->txtConvert);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->ForeColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(572, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(464, 398);
			this->panel1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(332, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 54);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(45, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 54);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Convert";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// lblConvert
			// 
			this->lblConvert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblConvert->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConvert->ForeColor = System::Drawing::SystemColors::Window;
			this->lblConvert->Location = System::Drawing::Point(319, 255);
			this->lblConvert->Multiline = true;
			this->lblConvert->Name = L"lblConvert";
			this->lblConvert->Size = System::Drawing::Size(130, 41);
			this->lblConvert->TabIndex = 6;
			this->lblConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtConvert
			// 
			this->txtConvert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtConvert->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConvert->ForeColor = System::Drawing::SystemColors::Window;
			this->txtConvert->Location = System::Drawing::Point(319, 3);
			this->txtConvert->Multiline = true;
			this->txtConvert->Name = L"txtConvert";
			this->txtConvert->Size = System::Drawing::Size(130, 41);
			this->txtConvert->TabIndex = 5;
			this->txtConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtConvert->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(41, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Value to Convert";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(41, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Result of Converted Number";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Control;
			this->radioButton3->Location = System::Drawing::Point(45, 193);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(75, 28);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Kevin";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Control;
			this->radioButton2->Location = System::Drawing::Point(45, 125);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(210, 28);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Fahrenheit to Celsius ";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::Control;
			this->radioButton1->Location = System::Drawing::Point(45, 57);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(205, 28);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Celsius to Fahrenheit";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton1_CheckedChanged);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->tempratureToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::scientificToolStripMenuItem_Click);
			// 
			// tempratureToolStripMenuItem
			// 
			this->tempratureToolStripMenuItem->Name = L"tempratureToolStripMenuItem";
			this->tempratureToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->tempratureToolStripMenuItem->Text = L"Temperature";
			this->tempratureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::tempratureToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(283, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShowOp->ForeColor = System::Drawing::SystemColors::Control;
			this->lblShowOp->Location = System::Drawing::Point(12, 41);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(17, 15);
			this->lblShowOp->TabIndex = 5;
			this->lblShowOp->Text = L"hi";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(283, 446);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(299, 485);
			this->MinimumSize = System::Drawing::Size(299, 485);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Double firstDigit, secondDigit, result, a;
		String^ operators;
		float Celsius, Fahrenheit, Kevin;
		int first, second, results;
		char operation;

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MainForm::Width = 299;
		MainForm::Height = 485;
		txtDisplay->Width = 259;
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}
	private: System::Void scientificToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MainForm::Width = 580;
		txtDisplay->Width = 535;
		this->MinimumSize = System::Drawing::Size(577, 485);
		this->MaximumSize = System::Drawing::Size(577, 485);
	}
	private: System::Void tempratureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MainForm::Width = 1061;
		txtDisplay->Width = 535;
		this->MinimumSize = System::Drawing::Size(1061, 485);
	}
	private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MainForm::Width = 299;
		MainForm::Height = 485;
		txtDisplay->Width = 259;
		this->MinimumSize = System::Drawing::Size(299, 485);
		this->MaximumSize = System::Drawing::Size(299, 485);
	}
	private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//Numbers
		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = Numbers->Text;
		}
		else
		{
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}
	private: System::Void button_ce_Click(System::Object^ sender, System::EventArgs^ e) {
		//CE
		txtDisplay->Text = "0";
		lblShowOp->Text = "0";
	}
	private: System::Void button_c_Click(System::Object^ sender, System::EventArgs^ e) {
		//C
		txtDisplay->Text = "0";
		lblShowOp->Text = "";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		//Decimal
		if (!txtDisplay->Text->Contains("."))
		{
			txtDisplay->Text = txtDisplay->Text + ".";
		}
	}
	private: System::Void Arithmetic_Op(System::Object^ sender, System::EventArgs^ e) {
		//Operators
		Button^ op = safe_cast<Button^>(sender);

		firstDigit = Double::Parse(txtDisplay->Text);
		txtDisplay->Text = "";
		operators = op->Text;
		lblShowOp->Text = System::Convert::ToString(firstDigit) + "" + operators;
	}
	private: System::Void btn_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		//PlusMinus
		if (txtDisplay->Text->Contains("-"))
		{
			txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
		}
		else
		{
			txtDisplay->Text = "-" + txtDisplay->Text;
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		//Equals
		secondDigit = Double::Parse(txtDisplay->Text);
		if (operators == "+")
		{
			result = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			
		}
		else if (operators == "-")
		{
			result = firstDigit - secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			
		}
		else if (operators == "*")
		{
			result = firstDigit * secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			
		}
		else if (operators == "/")
		{
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			
		}
		else if (operators == "Mod")
		{
			first = Convert::ToInt32(firstDigit);
			second = Convert::ToInt32(secondDigit);
			results = first % second;
			txtDisplay->Text = System::Convert::ToString(results);
			
		}
		else if (operators == "Exp")
		{
			result = (firstDigit, (1 / secondDigit));
			txtDisplay->Text = System::Convert::ToString(Math::Exp((result)));
			
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//BackSpace
		if (txtDisplay->Text->Length > 0)
		{
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
		if (txtDisplay->Text == "")
		{
			txtDisplay->Text = "0";
		}
	}
	private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
		txtDisplay->Text = ("3.14159265359");
	}
	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		//Sinh
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("sinh " + "(" + (txtDisplay->Text) + ")");
		a = Math::Sinh(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		//Sin
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("sind " + "(" + (txtDisplay->Text) + ")");
		a = Math::Sin(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		//Decimal
		int a = int::Parse(txtDisplay->Text);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
		//Log
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("log " + "(" + (txtDisplay->Text) + ")");
		a = Math::Log(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		//Cosh
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("cosh " + "(" + (txtDisplay->Text) + ")");
		a = Math::Cosh(a); 
		txtDisplay->Text = System::Convert::ToString(a);
		lblShowOp->Text = "";
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		//Cos
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("cos " + "(" + (txtDisplay->Text) + ")");
		a = Math::Cos(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		//binary
		int a = int::Parse(txtDisplay->Text);
		txtDisplay->Text = System::Convert::ToString(a, 2);
		lblShowOp->Text = "";
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		//Tanh
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("tanh " + "(" + (txtDisplay->Text) + ")");
		a = Math::Tanh(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		//Tan
		a = Double::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("tand " + "(" + (txtDisplay->Text) + ")");
		a = Math::Tan(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		//Hex
		int a = int::Parse(txtDisplay->Text);
		txtDisplay->Text = System::Convert::ToString(a, 16);
		lblShowOp->Text = "";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		//Octal
		int a = int::Parse(txtDisplay->Text);
		txtDisplay->Text = System::Convert::ToString(a, 8);
		lblShowOp->Text = "";
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		//Sqrt
		a = Double::Parse(txtDisplay->Text);
		a = Math::Sqrt(a);
		txtDisplay->Text = System::Convert::ToString(a);
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		//x^2
		a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
		txtDisplay->Text = Convert::ToString(a);
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		//x^3
		a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
		txtDisplay->Text = Convert::ToString(a);
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		//1/x
		a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = Convert::ToString(a);
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		//In x
		a = System::Math::Log(Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = Convert::ToString(a);
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		//%
		a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
		txtDisplay->Text = Convert::ToString(a);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}	
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	
		operation = 'C';
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'F';
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'K';
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (operation)
		{
		case'C':
			//Celsius to Fahrenheit
			(float::TryParse(txtConvert->Text, Celsius));
			lblConvert->Text = ((((9 * Celsius) / 5) +32).ToString());
			break;
		case'F':
			//Fahrenheit to Celsius
			(float::TryParse(txtConvert->Text, Fahrenheit));
			lblConvert->Text = ((((Fahrenheit - 32) * 5) / 9).ToString());
			break;
		case'K':
			//Convert to Kevin
			(float::TryParse(txtConvert->Text, Kevin));
			lblConvert->Text = ((((9 * Kevin) / 5) + 273.15).ToString());
			break;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		lblConvert->Text = "";
		txtConvert->Text = "";
		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
	}
};
}
