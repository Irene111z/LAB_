#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <string>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainFormh : public System::Windows::Forms::Form
	{
	public:
		MainFormh(void)
		{
			InitializeComponent();
		}
	private: System::Windows::Forms::Button^ b_del;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ list_weight_from;
	private: System::Windows::Forms::Label^ label_weight_from;
	private: System::Windows::Forms::Label^ label_weight_to;
	private: System::Windows::Forms::TextBox^ weight_from;
	private: System::Windows::Forms::TextBox^ weight_to;
	private: System::Windows::Forms::ListBox^ list_weight_to;
	private: System::Windows::Forms::Label^ label_length_from;
	private: System::Windows::Forms::Label^ label_length_to;
	private: System::Windows::Forms::TextBox^ length_from;
	private: System::Windows::Forms::TextBox^ length_to;
	private: System::Windows::Forms::ListBox^ list_length_to;





	private: System::Windows::Forms::ListBox^ list_length_from;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ temp_from;

	private: System::Windows::Forms::TextBox^ temp_to;

	private: System::Windows::Forms::ListBox^ list_temp_to;

	private: System::Windows::Forms::ListBox^ list_temp_from;




	private: System::Windows::Forms::Button^ tap_weight;
	private: System::Windows::Forms::Button^ tap_length;
	private: System::Windows::Forms::Button^ tap_temp;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ list_history;


	private: System::Windows::Forms::Button^ b_clear_history;









	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ b_equal_trig;

	private: System::Windows::Forms::Button^ b_point_trig;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ display_trig;



	private: System::Windows::Forms::Button^ b_arctg;

	private: System::Windows::Forms::Button^ b_arcsin;

	private: System::Windows::Forms::Button^ b_arccos;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ b_del_trig;
	private: System::Windows::Forms::Button^ b_clear_trig;
	private: System::Windows::Forms::Button^ b_ctg;
	private: System::Windows::Forms::Button^ b_tg;
	private: System::Windows::Forms::Button^ b_sin;
	private: System::Windows::Forms::Button^ b_cos;
	private: System::Windows::Forms::Button^ b_csc;
	private: System::Windows::Forms::Button^ b_sec;













	public:
	private:
		String^ prev;

	protected:
		
		~MainFormh()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;

	protected:

	protected:

	protected:

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ Conversion;






	private: System::Windows::Forms::Button^ b_equals;

	private: System::Windows::Forms::Button^ b_point;

	private: System::Windows::Forms::Button^ b0;

	private: System::Windows::Forms::Button^ b9;

	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b7;

	private: System::Windows::Forms::Button^ b6;

  	private: System::Windows::Forms::Button^ b5;

	private: System::Windows::Forms::Button^ b4;

	private: System::Windows::Forms::Button^ b3;

	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Label^ display;





	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b_dividing;
	private: System::Windows::Forms::Button^ b_multiply;
	private: System::Windows::Forms::Button^ b_minus;
	private: System::Windows::Forms::Button^ b_plus;


	private: System::Windows::Forms::Button^ b_exp;
	private: System::Windows::Forms::Button^ b_sqrt;
	private: System::Windows::Forms::Button^ b_clear;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPageWeight;
	private: System::Windows::Forms::TabPage^ tabPageLength;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainFormh::typeid));
			this->tap_weight = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->b_del = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::Label());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b_dividing = (gcnew System::Windows::Forms::Button());
			this->b_multiply = (gcnew System::Windows::Forms::Button());
			this->b_minus = (gcnew System::Windows::Forms::Button());
			this->b_plus = (gcnew System::Windows::Forms::Button());
			this->b_exp = (gcnew System::Windows::Forms::Button());
			this->b_sqrt = (gcnew System::Windows::Forms::Button());
			this->b_clear = (gcnew System::Windows::Forms::Button());
			this->b_equals = (gcnew System::Windows::Forms::Button());
			this->b_point = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Conversion = (gcnew System::Windows::Forms::TabPage());
			this->b_clear_history = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->list_history = (gcnew System::Windows::Forms::ListBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageWeight = (gcnew System::Windows::Forms::TabPage());
			this->label_weight_from = (gcnew System::Windows::Forms::Label());
			this->label_weight_to = (gcnew System::Windows::Forms::Label());
			this->weight_from = (gcnew System::Windows::Forms::TextBox());
			this->weight_to = (gcnew System::Windows::Forms::TextBox());
			this->list_weight_to = (gcnew System::Windows::Forms::ListBox());
			this->list_weight_from = (gcnew System::Windows::Forms::ListBox());
			this->tabPageLength = (gcnew System::Windows::Forms::TabPage());
			this->tap_length = (gcnew System::Windows::Forms::Button());
			this->label_length_from = (gcnew System::Windows::Forms::Label());
			this->label_length_to = (gcnew System::Windows::Forms::Label());
			this->length_from = (gcnew System::Windows::Forms::TextBox());
			this->length_to = (gcnew System::Windows::Forms::TextBox());
			this->list_length_to = (gcnew System::Windows::Forms::ListBox());
			this->list_length_from = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tap_temp = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->temp_from = (gcnew System::Windows::Forms::TextBox());
			this->temp_to = (gcnew System::Windows::Forms::TextBox());
			this->list_temp_to = (gcnew System::Windows::Forms::ListBox());
			this->list_temp_from = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->b_csc = (gcnew System::Windows::Forms::Button());
			this->b_sec = (gcnew System::Windows::Forms::Button());
			this->b_del_trig = (gcnew System::Windows::Forms::Button());
			this->b_clear_trig = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->display_trig = (gcnew System::Windows::Forms::Label());
			this->b_arctg = (gcnew System::Windows::Forms::Button());
			this->b_arcsin = (gcnew System::Windows::Forms::Button());
			this->b_arccos = (gcnew System::Windows::Forms::Button());
			this->b_ctg = (gcnew System::Windows::Forms::Button());
			this->b_tg = (gcnew System::Windows::Forms::Button());
			this->b_sin = (gcnew System::Windows::Forms::Button());
			this->b_cos = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->b_equal_trig = (gcnew System::Windows::Forms::Button());
			this->b_point_trig = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Conversion->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPageWeight->SuspendLayout();
			this->tabPageLength->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tap_weight
			// 
			this->tap_weight->BackColor = System::Drawing::Color::OrangeRed;
			this->tap_weight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tap_weight->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tap_weight->ForeColor = System::Drawing::Color::White;
			this->tap_weight->Location = System::Drawing::Point(142, 152);
			this->tap_weight->Name = L"tap_weight";
			this->tap_weight->Size = System::Drawing::Size(75, 45);
			this->tap_weight->TabIndex = 6;
			this->tap_weight->Text = L"TAP";
			this->tap_weight->UseMnemonic = false;
			this->tap_weight->UseVisualStyleBackColor = false;
			this->tap_weight->Click += gcnew System::EventHandler(this, &MainFormh::tap_weight_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->Conversion);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-1, -3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(668, 602);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Tag = L"";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->tabPage1->Controls->Add(this->b_del);
			this->tabPage1->Controls->Add(this->display);
			this->tabPage1->Controls->Add(this->b1);
			this->tabPage1->Controls->Add(this->b_dividing);
			this->tabPage1->Controls->Add(this->b_multiply);
			this->tabPage1->Controls->Add(this->b_minus);
			this->tabPage1->Controls->Add(this->b_plus);
			this->tabPage1->Controls->Add(this->b_exp);
			this->tabPage1->Controls->Add(this->b_sqrt);
			this->tabPage1->Controls->Add(this->b_clear);
			this->tabPage1->Controls->Add(this->b_equals);
			this->tabPage1->Controls->Add(this->b_point);
			this->tabPage1->Controls->Add(this->b0);
			this->tabPage1->Controls->Add(this->b9);
			this->tabPage1->Controls->Add(this->b8);
			this->tabPage1->Controls->Add(this->b7);
			this->tabPage1->Controls->Add(this->b6);
			this->tabPage1->Controls->Add(this->b5);
			this->tabPage1->Controls->Add(this->b4);
			this->tabPage1->Controls->Add(this->b3);
			this->tabPage1->Controls->Add(this->b2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(660, 566);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Calculator";
			// 
			// b_del
			// 
			this->b_del->BackColor = System::Drawing::Color::Blue;
			this->b_del->Font = (gcnew System::Drawing::Font(L"Wingdings", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->b_del->ForeColor = System::Drawing::Color::White;
			this->b_del->Location = System::Drawing::Point(411, 156);
			this->b_del->Name = L"b_del";
			this->b_del->Size = System::Drawing::Size(70, 70);
			this->b_del->TabIndex = 27;
			this->b_del->Text = L"";
			this->b_del->UseVisualStyleBackColor = false;
			this->b_del->Click += gcnew System::EventHandler(this, &MainFormh::b_del_Click);
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::SystemColors::HighlightText;
			this->display->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->display->Location = System::Drawing::Point(29, 43);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(452, 75);
			this->display->TabIndex = 26;
			this->display->Text = L"0";
			this->display->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::GhostWhite;
			this->b1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b1->Location = System::Drawing::Point(124, 153);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(70, 70);
			this->b1->TabIndex = 24;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b_dividing
			// 
			this->b_dividing->BackColor = System::Drawing::Color::Navy;
			this->b_dividing->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_dividing->ForeColor = System::Drawing::Color::White;
			this->b_dividing->Location = System::Drawing::Point(29, 341);
			this->b_dividing->Name = L"b_dividing";
			this->b_dividing->Size = System::Drawing::Size(70, 70);
			this->b_dividing->TabIndex = 23;
			this->b_dividing->Text = L"/";
			this->b_dividing->UseVisualStyleBackColor = false;
			this->b_dividing->Click += gcnew System::EventHandler(this, &MainFormh::oper);
			// 
			// b_multiply
			// 
			this->b_multiply->BackColor = System::Drawing::Color::Navy;
			this->b_multiply->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_multiply->ForeColor = System::Drawing::Color::White;
			this->b_multiply->Location = System::Drawing::Point(29, 248);
			this->b_multiply->Name = L"b_multiply";
			this->b_multiply->Size = System::Drawing::Size(70, 70);
			this->b_multiply->TabIndex = 22;
			this->b_multiply->Text = L"x";
			this->b_multiply->UseVisualStyleBackColor = false;
			this->b_multiply->Click += gcnew System::EventHandler(this, &MainFormh::oper);
			// 
			// b_minus
			// 
			this->b_minus->BackColor = System::Drawing::Color::Navy;
			this->b_minus->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_minus->ForeColor = System::Drawing::Color::White;
			this->b_minus->Location = System::Drawing::Point(411, 341);
			this->b_minus->Name = L"b_minus";
			this->b_minus->Size = System::Drawing::Size(70, 70);
			this->b_minus->TabIndex = 21;
			this->b_minus->Text = L"-";
			this->b_minus->UseVisualStyleBackColor = false;
			this->b_minus->Click += gcnew System::EventHandler(this, &MainFormh::oper);
			// 
			// b_plus
			// 
			this->b_plus->BackColor = System::Drawing::Color::Navy;
			this->b_plus->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_plus->ForeColor = System::Drawing::Color::White;
			this->b_plus->Location = System::Drawing::Point(411, 248);
			this->b_plus->Name = L"b_plus";
			this->b_plus->Size = System::Drawing::Size(70, 70);
			this->b_plus->TabIndex = 20;
			this->b_plus->Text = L"+";
			this->b_plus->UseVisualStyleBackColor = false;
			this->b_plus->Click += gcnew System::EventHandler(this, &MainFormh::oper);
			// 
			// b_exp
			// 
			this->b_exp->BackColor = System::Drawing::Color::Navy;
			this->b_exp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_exp->ForeColor = System::Drawing::Color::White;
			this->b_exp->Location = System::Drawing::Point(411, 427);
			this->b_exp->Name = L"b_exp";
			this->b_exp->Size = System::Drawing::Size(70, 70);
			this->b_exp->TabIndex = 18;
			this->b_exp->Text = L"^";
			this->b_exp->UseVisualStyleBackColor = false;
			this->b_exp->Click += gcnew System::EventHandler(this, &MainFormh::oper);
			// 
			// b_sqrt
			// 
			this->b_sqrt->BackColor = System::Drawing::Color::Navy;
			this->b_sqrt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_sqrt->ForeColor = System::Drawing::Color::White;
			this->b_sqrt->Location = System::Drawing::Point(29, 431);
			this->b_sqrt->Name = L"b_sqrt";
			this->b_sqrt->Size = System::Drawing::Size(70, 70);
			this->b_sqrt->TabIndex = 17;
			this->b_sqrt->Text = L"sqrt ";
			this->b_sqrt->UseVisualStyleBackColor = false;
			this->b_sqrt->Click += gcnew System::EventHandler(this, &MainFormh::b_sqrt_Click);
			// 
			// b_clear
			// 
			this->b_clear->BackColor = System::Drawing::Color::Blue;
			this->b_clear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_clear->ForeColor = System::Drawing::Color::White;
			this->b_clear->Location = System::Drawing::Point(29, 156);
			this->b_clear->Name = L"b_clear";
			this->b_clear->Size = System::Drawing::Size(70, 70);
			this->b_clear->TabIndex = 16;
			this->b_clear->Text = L"C";
			this->b_clear->UseVisualStyleBackColor = false;
			this->b_clear->Click += gcnew System::EventHandler(this, &MainFormh::b_clear_Click);
			// 
			// b_equals
			// 
			this->b_equals->BackColor = System::Drawing::Color::Blue;
			this->b_equals->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_equals->ForeColor = System::Drawing::Color::White;
			this->b_equals->Location = System::Drawing::Point(314, 431);
			this->b_equals->Name = L"b_equals";
			this->b_equals->Size = System::Drawing::Size(70, 70);
			this->b_equals->TabIndex = 11;
			this->b_equals->Text = L"=";
			this->b_equals->UseVisualStyleBackColor = false;
			this->b_equals->Click += gcnew System::EventHandler(this, &MainFormh::b_equals_Click);
			// 
			// b_point
			// 
			this->b_point->BackColor = System::Drawing::Color::White;
			this->b_point->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_point->Location = System::Drawing::Point(220, 431);
			this->b_point->Name = L"b_point";
			this->b_point->Size = System::Drawing::Size(70, 70);
			this->b_point->TabIndex = 10;
			this->b_point->Text = L".";
			this->b_point->UseVisualStyleBackColor = false;
			this->b_point->Click += gcnew System::EventHandler(this, &MainFormh::b_point_Click);
			// 
			// b0
			// 
			this->b0->BackColor = System::Drawing::Color::White;
			this->b0->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b0->Location = System::Drawing::Point(124, 431);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(70, 70);
			this->b0->TabIndex = 9;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = false;
			this->b0->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::Color::GhostWhite;
			this->b9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b9->Location = System::Drawing::Point(314, 341);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(70, 70);
			this->b9->TabIndex = 8;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::Color::GhostWhite;
			this->b8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b8->Location = System::Drawing::Point(220, 341);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(70, 70);
			this->b8->TabIndex = 7;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::Color::GhostWhite;
			this->b7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b7->Location = System::Drawing::Point(124, 341);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(70, 70);
			this->b7->TabIndex = 6;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::Color::GhostWhite;
			this->b6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b6->Location = System::Drawing::Point(314, 248);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(70, 70);
			this->b6->TabIndex = 5;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::Color::GhostWhite;
			this->b5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b5->Location = System::Drawing::Point(220, 248);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(70, 70);
			this->b5->TabIndex = 4;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::Color::GhostWhite;
			this->b4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b4->Location = System::Drawing::Point(124, 248);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(70, 70);
			this->b4->TabIndex = 3;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::GhostWhite;
			this->b3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b3->Location = System::Drawing::Point(314, 153);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(70, 70);
			this->b3->TabIndex = 2;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::GhostWhite;
			this->b2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b2->Location = System::Drawing::Point(220, 153);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(70, 70);
			this->b2->TabIndex = 1;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &MainFormh::b_num);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(372, 110);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(404, 439);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// Conversion
			// 
			this->Conversion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Conversion->Controls->Add(this->b_clear_history);
			this->Conversion->Controls->Add(this->label3);
			this->Conversion->Controls->Add(this->list_history);
			this->Conversion->Controls->Add(this->tabControl2);
			this->Conversion->Location = System::Drawing::Point(4, 32);
			this->Conversion->Name = L"Conversion";
			this->Conversion->Padding = System::Windows::Forms::Padding(3);
			this->Conversion->Size = System::Drawing::Size(660, 566);
			this->Conversion->TabIndex = 1;
			this->Conversion->Text = L"Conversion";
			this->Conversion->Click += gcnew System::EventHandler(this, &MainFormh::tabPage2_Click);
			// 
			// b_clear_history
			// 
			this->b_clear_history->BackColor = System::Drawing::Color::Blue;
			this->b_clear_history->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_clear_history->ForeColor = System::Drawing::Color::White;
			this->b_clear_history->Location = System::Drawing::Point(365, 479);
			this->b_clear_history->Name = L"b_clear_history";
			this->b_clear_history->Size = System::Drawing::Size(190, 58);
			this->b_clear_history->TabIndex = 5;
			this->b_clear_history->Text = L"CLEAR HISTORY";
			this->b_clear_history->UseVisualStyleBackColor = false;
			this->b_clear_history->Click += gcnew System::EventHandler(this, &MainFormh::b_clear_history_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label3->Location = System::Drawing::Point(275, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(361, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"History";
			// 
			// list_history
			// 
			this->list_history->BackColor = System::Drawing::Color::White;
			this->list_history->FormattingEnabled = true;
			this->list_history->ItemHeight = 23;
			this->list_history->Location = System::Drawing::Point(275, 354);
			this->list_history->Name = L"list_history";
			this->list_history->Size = System::Drawing::Size(361, 119);
			this->list_history->TabIndex = 1;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPageWeight);
			this->tabControl2->Controls->Add(this->tabPageLength);
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Location = System::Drawing::Point(23, 45);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->ShowToolTips = true;
			this->tabControl2->Size = System::Drawing::Size(385, 252);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->VisibleChanged += gcnew System::EventHandler(this, &MainFormh::view);
			// 
			// tabPageWeight
			// 
			this->tabPageWeight->Controls->Add(this->tap_weight);
			this->tabPageWeight->Controls->Add(this->label_weight_from);
			this->tabPageWeight->Controls->Add(this->label_weight_to);
			this->tabPageWeight->Controls->Add(this->weight_from);
			this->tabPageWeight->Controls->Add(this->weight_to);
			this->tabPageWeight->Controls->Add(this->list_weight_to);
			this->tabPageWeight->Controls->Add(this->list_weight_from);
			this->tabPageWeight->Location = System::Drawing::Point(4, 32);
			this->tabPageWeight->Name = L"tabPageWeight";
			this->tabPageWeight->Padding = System::Windows::Forms::Padding(3);
			this->tabPageWeight->Size = System::Drawing::Size(377, 216);
			this->tabPageWeight->TabIndex = 0;
			this->tabPageWeight->Text = L"Weight";
			this->tabPageWeight->UseVisualStyleBackColor = true;
			// 
			// label_weight_from
			// 
			this->label_weight_from->AutoSize = true;
			this->label_weight_from->Location = System::Drawing::Point(23, 45);
			this->label_weight_from->Name = L"label_weight_from";
			this->label_weight_from->Size = System::Drawing::Size(66, 23);
			this->label_weight_from->TabIndex = 5;
			this->label_weight_from->Text = L"FROM";
			// 
			// label_weight_to
			// 
			this->label_weight_to->AutoSize = true;
			this->label_weight_to->Location = System::Drawing::Point(197, 45);
			this->label_weight_to->Name = L"label_weight_to";
			this->label_weight_to->Size = System::Drawing::Size(35, 23);
			this->label_weight_to->TabIndex = 4;
			this->label_weight_to->Text = L"TO";
			// 
			// weight_from
			// 
			this->weight_from->Location = System::Drawing::Point(27, 81);
			this->weight_from->Name = L"weight_from";
			this->weight_from->Size = System::Drawing::Size(132, 32);
			this->weight_from->TabIndex = 3;
			// 
			// weight_to
			// 
			this->weight_to->Location = System::Drawing::Point(201, 81);
			this->weight_to->Name = L"weight_to";
			this->weight_to->ReadOnly = true;
			this->weight_to->Size = System::Drawing::Size(132, 32);
			this->weight_to->TabIndex = 2;
			// 
			// list_weight_to
			// 
			this->list_weight_to->FormattingEnabled = true;
			this->list_weight_to->ItemHeight = 23;
			this->list_weight_to->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Miligrams", L"Grams", L"Kilograms", L"Tons" });
			this->list_weight_to->Location = System::Drawing::Point(201, 119);
			this->list_weight_to->Name = L"list_weight_to";
			this->list_weight_to->Size = System::Drawing::Size(132, 27);
			this->list_weight_to->TabIndex = 1;
			// 
			// list_weight_from
			// 
			this->list_weight_from->FormattingEnabled = true;
			this->list_weight_from->ItemHeight = 23;
			this->list_weight_from->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Tons", L"Kilograms", L"Grams", L"Miligrams" });
			this->list_weight_from->Location = System::Drawing::Point(27, 119);
			this->list_weight_from->Name = L"list_weight_from";
			this->list_weight_from->Size = System::Drawing::Size(132, 27);
			this->list_weight_from->TabIndex = 0;
			// 
			// tabPageLength
			// 
			this->tabPageLength->Controls->Add(this->tap_length);
			this->tabPageLength->Controls->Add(this->label_length_from);
			this->tabPageLength->Controls->Add(this->label_length_to);
			this->tabPageLength->Controls->Add(this->length_from);
			this->tabPageLength->Controls->Add(this->length_to);
			this->tabPageLength->Controls->Add(this->list_length_to);
			this->tabPageLength->Controls->Add(this->list_length_from);
			this->tabPageLength->Location = System::Drawing::Point(4, 32);
			this->tabPageLength->Name = L"tabPageLength";
			this->tabPageLength->Padding = System::Windows::Forms::Padding(3);
			this->tabPageLength->Size = System::Drawing::Size(377, 216);
			this->tabPageLength->TabIndex = 1;
			this->tabPageLength->Text = L"Length";
			this->tabPageLength->UseVisualStyleBackColor = true;
			// 
			// tap_length
			// 
			this->tap_length->BackColor = System::Drawing::Color::LimeGreen;
			this->tap_length->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tap_length->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tap_length->ForeColor = System::Drawing::Color::White;
			this->tap_length->Location = System::Drawing::Point(142, 152);
			this->tap_length->Name = L"tap_length";
			this->tap_length->Size = System::Drawing::Size(75, 45);
			this->tap_length->TabIndex = 12;
			this->tap_length->Text = L"TAP";
			this->tap_length->UseMnemonic = false;
			this->tap_length->UseVisualStyleBackColor = false;
			this->tap_length->Click += gcnew System::EventHandler(this, &MainFormh::tap_length_Click);
			// 
			// label_length_from
			// 
			this->label_length_from->AutoSize = true;
			this->label_length_from->Location = System::Drawing::Point(23, 45);
			this->label_length_from->Name = L"label_length_from";
			this->label_length_from->Size = System::Drawing::Size(66, 23);
			this->label_length_from->TabIndex = 11;
			this->label_length_from->Text = L"FROM";
			// 
			// label_length_to
			// 
			this->label_length_to->AutoSize = true;
			this->label_length_to->Location = System::Drawing::Point(197, 45);
			this->label_length_to->Name = L"label_length_to";
			this->label_length_to->Size = System::Drawing::Size(35, 23);
			this->label_length_to->TabIndex = 10;
			this->label_length_to->Text = L"TO";
			// 
			// length_from
			// 
			this->length_from->Location = System::Drawing::Point(27, 81);
			this->length_from->Name = L"length_from";
			this->length_from->Size = System::Drawing::Size(132, 32);
			this->length_from->TabIndex = 9;
			// 
			// length_to
			// 
			this->length_to->Location = System::Drawing::Point(201, 81);
			this->length_to->Name = L"length_to";
			this->length_to->ReadOnly = true;
			this->length_to->Size = System::Drawing::Size(132, 32);
			this->length_to->TabIndex = 8;
			this->length_to->TextChanged += gcnew System::EventHandler(this, &MainFormh::textBox2_TextChanged);
			// 
			// list_length_to
			// 
			this->list_length_to->FormattingEnabled = true;
			this->list_length_to->ItemHeight = 23;
			this->list_length_to->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Milimetres", L"Centimetres", L"Inches",
					L"Metres", L"Kilometres", L"Miles"
			});
			this->list_length_to->Location = System::Drawing::Point(201, 119);
			this->list_length_to->Name = L"list_length_to";
			this->list_length_to->Size = System::Drawing::Size(132, 27);
			this->list_length_to->TabIndex = 7;
			// 
			// list_length_from
			// 
			this->list_length_from->FormattingEnabled = true;
			this->list_length_from->ItemHeight = 23;
			this->list_length_from->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Miles", L"Kilometres", L"Metres", L"Inches",
					L"Centimetres", L"Milimetres"
			});
			this->list_length_from->Location = System::Drawing::Point(27, 119);
			this->list_length_from->Name = L"list_length_from";
			this->list_length_from->Size = System::Drawing::Size(132, 27);
			this->list_length_from->TabIndex = 6;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tap_temp);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->temp_from);
			this->tabPage3->Controls->Add(this->temp_to);
			this->tabPage3->Controls->Add(this->list_temp_to);
			this->tabPage3->Controls->Add(this->list_temp_from);
			this->tabPage3->Location = System::Drawing::Point(4, 32);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(377, 216);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Temperature";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tap_temp
			// 
			this->tap_temp->BackColor = System::Drawing::Color::DodgerBlue;
			this->tap_temp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tap_temp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tap_temp->ForeColor = System::Drawing::Color::White;
			this->tap_temp->Location = System::Drawing::Point(142, 152);
			this->tap_temp->Name = L"tap_temp";
			this->tap_temp->Size = System::Drawing::Size(75, 45);
			this->tap_temp->TabIndex = 13;
			this->tap_temp->Text = L"TAP";
			this->tap_temp->UseMnemonic = false;
			this->tap_temp->UseVisualStyleBackColor = false;
			this->tap_temp->Click += gcnew System::EventHandler(this, &MainFormh::tap_temp_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"FROM";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"TO";
			// 
			// temp_from
			// 
			this->temp_from->Location = System::Drawing::Point(27, 81);
			this->temp_from->Name = L"temp_from";
			this->temp_from->Size = System::Drawing::Size(132, 32);
			this->temp_from->TabIndex = 9;
			// 
			// temp_to
			// 
			this->temp_to->Location = System::Drawing::Point(201, 81);
			this->temp_to->Name = L"temp_to";
			this->temp_to->ReadOnly = true;
			this->temp_to->Size = System::Drawing::Size(132, 32);
			this->temp_to->TabIndex = 8;
			// 
			// list_temp_to
			// 
			this->list_temp_to->FormattingEnabled = true;
			this->list_temp_to->ItemHeight = 23;
			this->list_temp_to->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Kelvin", L"Fahrenheit", L"Celcius" });
			this->list_temp_to->Location = System::Drawing::Point(201, 119);
			this->list_temp_to->Name = L"list_temp_to";
			this->list_temp_to->Size = System::Drawing::Size(132, 27);
			this->list_temp_to->TabIndex = 7;
			// 
			// list_temp_from
			// 
			this->list_temp_from->FormattingEnabled = true;
			this->list_temp_from->ItemHeight = 23;
			this->list_temp_from->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Celcius", L"Fahrenheit", L"Kelvin" });
			this->list_temp_from->Location = System::Drawing::Point(27, 119);
			this->list_temp_from->Name = L"list_temp_from";
			this->list_temp_from->Size = System::Drawing::Size(132, 27);
			this->list_temp_from->TabIndex = 6;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage4->Controls->Add(this->b_csc);
			this->tabPage4->Controls->Add(this->b_sec);
			this->tabPage4->Controls->Add(this->b_del_trig);
			this->tabPage4->Controls->Add(this->b_clear_trig);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->display_trig);
			this->tabPage4->Controls->Add(this->b_arctg);
			this->tabPage4->Controls->Add(this->b_arcsin);
			this->tabPage4->Controls->Add(this->b_arccos);
			this->tabPage4->Controls->Add(this->b_ctg);
			this->tabPage4->Controls->Add(this->b_tg);
			this->tabPage4->Controls->Add(this->b_sin);
			this->tabPage4->Controls->Add(this->b_cos);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->b_equal_trig);
			this->tabPage4->Controls->Add(this->b_point_trig);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->pictureBox2);
			this->tabPage4->Location = System::Drawing::Point(4, 32);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(660, 566);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Trigonometry";
			this->tabPage4->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// b_csc
			// 
			this->b_csc->BackColor = System::Drawing::Color::DarkGreen;
			this->b_csc->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_csc->ForeColor = System::Drawing::Color::White;
			this->b_csc->Location = System::Drawing::Point(183, 161);
			this->b_csc->Name = L"b_csc";
			this->b_csc->Size = System::Drawing::Size(79, 53);
			this->b_csc->TabIndex = 53;
			this->b_csc->Text = L"csс";
			this->b_csc->UseVisualStyleBackColor = false;
			this->b_csc->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_sec
			// 
			this->b_sec->BackColor = System::Drawing::Color::DarkGreen;
			this->b_sec->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_sec->ForeColor = System::Drawing::Color::White;
			this->b_sec->Location = System::Drawing::Point(274, 161);
			this->b_sec->Name = L"b_sec";
			this->b_sec->Size = System::Drawing::Size(70, 53);
			this->b_sec->TabIndex = 52;
			this->b_sec->Text = L"sec";
			this->b_sec->UseVisualStyleBackColor = false;
			this->b_sec->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_del_trig
			// 
			this->b_del_trig->BackColor = System::Drawing::Color::Lime;
			this->b_del_trig->Font = (gcnew System::Drawing::Font(L"Wingdings", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->b_del_trig->ForeColor = System::Drawing::Color::White;
			this->b_del_trig->Location = System::Drawing::Point(274, 67);
			this->b_del_trig->Name = L"b_del_trig";
			this->b_del_trig->Size = System::Drawing::Size(70, 70);
			this->b_del_trig->TabIndex = 51;
			this->b_del_trig->Text = L"";
			this->b_del_trig->UseVisualStyleBackColor = false;
			this->b_del_trig->Click += gcnew System::EventHandler(this, &MainFormh::b_del_trig_Click);
			// 
			// b_clear_trig
			// 
			this->b_clear_trig->BackColor = System::Drawing::Color::Lime;
			this->b_clear_trig->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_clear_trig->ForeColor = System::Drawing::Color::White;
			this->b_clear_trig->Location = System::Drawing::Point(183, 67);
			this->b_clear_trig->Name = L"b_clear_trig";
			this->b_clear_trig->Size = System::Drawing::Size(79, 72);
			this->b_clear_trig->TabIndex = 50;
			this->b_clear_trig->Text = L"С";
			this->b_clear_trig->UseVisualStyleBackColor = false;
			this->b_clear_trig->Click += gcnew System::EventHandler(this, &MainFormh::b_clear_trig_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(460, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 27);
			this->label4->TabIndex = 49;
			this->label4->Text = L"enter in degrees";
			// 
			// display_trig
			// 
			this->display_trig->BackColor = System::Drawing::SystemColors::HighlightText;
			this->display_trig->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->display_trig->Location = System::Drawing::Point(368, 67);
			this->display_trig->Name = L"display_trig";
			this->display_trig->Size = System::Drawing::Size(260, 70);
			this->display_trig->TabIndex = 27;
			this->display_trig->Text = L"0";
			this->display_trig->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// b_arctg
			// 
			this->b_arctg->BackColor = System::Drawing::Color::DarkGreen;
			this->b_arctg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_arctg->ForeColor = System::Drawing::Color::White;
			this->b_arctg->Location = System::Drawing::Point(183, 383);
			this->b_arctg->Name = L"b_arctg";
			this->b_arctg->Size = System::Drawing::Size(79, 53);
			this->b_arctg->TabIndex = 46;
			this->b_arctg->Text = L"atg";
			this->b_arctg->UseVisualStyleBackColor = false;
			this->b_arctg->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_arcsin
			// 
			this->b_arcsin->BackColor = System::Drawing::Color::DarkGreen;
			this->b_arcsin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_arcsin->ForeColor = System::Drawing::Color::White;
			this->b_arcsin->Location = System::Drawing::Point(183, 311);
			this->b_arcsin->Name = L"b_arcsin";
			this->b_arcsin->Size = System::Drawing::Size(79, 53);
			this->b_arcsin->TabIndex = 45;
			this->b_arcsin->Text = L"asin";
			this->b_arcsin->UseVisualStyleBackColor = false;
			this->b_arcsin->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_arccos
			// 
			this->b_arccos->BackColor = System::Drawing::Color::DarkGreen;
			this->b_arccos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_arccos->ForeColor = System::Drawing::Color::White;
			this->b_arccos->Location = System::Drawing::Point(183, 234);
			this->b_arccos->Name = L"b_arccos";
			this->b_arccos->Size = System::Drawing::Size(79, 53);
			this->b_arccos->TabIndex = 44;
			this->b_arccos->Text = L"acos";
			this->b_arccos->UseVisualStyleBackColor = false;
			this->b_arccos->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_ctg
			// 
			this->b_ctg->BackColor = System::Drawing::Color::DarkGreen;
			this->b_ctg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_ctg->ForeColor = System::Drawing::Color::White;
			this->b_ctg->Location = System::Drawing::Point(274, 456);
			this->b_ctg->Name = L"b_ctg";
			this->b_ctg->Size = System::Drawing::Size(70, 53);
			this->b_ctg->TabIndex = 43;
			this->b_ctg->Text = L"ctg";
			this->b_ctg->UseVisualStyleBackColor = false;
			this->b_ctg->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_tg
			// 
			this->b_tg->BackColor = System::Drawing::Color::DarkGreen;
			this->b_tg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_tg->ForeColor = System::Drawing::Color::White;
			this->b_tg->Location = System::Drawing::Point(274, 383);
			this->b_tg->Name = L"b_tg";
			this->b_tg->Size = System::Drawing::Size(70, 53);
			this->b_tg->TabIndex = 42;
			this->b_tg->Text = L"tg";
			this->b_tg->UseVisualStyleBackColor = false;
			this->b_tg->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_sin
			// 
			this->b_sin->BackColor = System::Drawing::Color::DarkGreen;
			this->b_sin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_sin->ForeColor = System::Drawing::Color::White;
			this->b_sin->Location = System::Drawing::Point(274, 311);
			this->b_sin->Name = L"b_sin";
			this->b_sin->Size = System::Drawing::Size(70, 53);
			this->b_sin->TabIndex = 41;
			this->b_sin->Text = L"sin";
			this->b_sin->UseVisualStyleBackColor = false;
			this->b_sin->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// b_cos
			// 
			this->b_cos->BackColor = System::Drawing::Color::DarkGreen;
			this->b_cos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_cos->ForeColor = System::Drawing::Color::White;
			this->b_cos->Location = System::Drawing::Point(274, 234);
			this->b_cos->Name = L"b_cos";
			this->b_cos->Size = System::Drawing::Size(70, 53);
			this->b_cos->TabIndex = 40;
			this->b_cos->Text = L"cos";
			this->b_cos->UseVisualStyleBackColor = false;
			this->b_cos->Click += gcnew System::EventHandler(this, &MainFormh::b_oper_trig);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::GhostWhite;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(368, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 39;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// b_equal_trig
			// 
			this->b_equal_trig->BackColor = System::Drawing::Color::Lime;
			this->b_equal_trig->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_equal_trig->ForeColor = System::Drawing::Color::White;
			this->b_equal_trig->Location = System::Drawing::Point(558, 439);
			this->b_equal_trig->Name = L"b_equal_trig";
			this->b_equal_trig->Size = System::Drawing::Size(70, 70);
			this->b_equal_trig->TabIndex = 38;
			this->b_equal_trig->Text = L"=";
			this->b_equal_trig->UseVisualStyleBackColor = false;
			this->b_equal_trig->Click += gcnew System::EventHandler(this, &MainFormh::b_equal_trig_Click);
			// 
			// b_point_trig
			// 
			this->b_point_trig->BackColor = System::Drawing::Color::White;
			this->b_point_trig->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_point_trig->Location = System::Drawing::Point(464, 439);
			this->b_point_trig->Name = L"b_point_trig";
			this->b_point_trig->Size = System::Drawing::Size(70, 70);
			this->b_point_trig->TabIndex = 37;
			this->b_point_trig->Text = L".";
			this->b_point_trig->UseVisualStyleBackColor = false;
			this->b_point_trig->Click += gcnew System::EventHandler(this, &MainFormh::b_point_trig_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(368, 439);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 36;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::GhostWhite;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(558, 349);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 35;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::GhostWhite;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(464, 349);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 34;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::GhostWhite;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(368, 349);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 33;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::GhostWhite;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(558, 256);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 32;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::GhostWhite;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(464, 256);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 31;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::GhostWhite;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(368, 256);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 70);
			this->button10->TabIndex = 30;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::GhostWhite;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(558, 161);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 70);
			this->button11->TabIndex = 29;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::GhostWhite;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(464, 161);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 70);
			this->button12->TabIndex = 28;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainFormh::b_nums_trig);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(9, 145);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(174, 381);
			this->pictureBox2->TabIndex = 48;
			this->pictureBox2->TabStop = false;
			// 
			// MainFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::MediumPurple;
			this->ClientSize = System::Drawing::Size(662, 587);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainFormh";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainFormh::MainFormh_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Conversion->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPageWeight->ResumeLayout(false);
			this->tabPageWeight->PerformLayout();
			this->tabPageLength->ResumeLayout(false);
			this->tabPageLength->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

		double num1, num2, result;
		//first number, second number, result
		String^ oper_bt_nums; 
		double w_from, w_to;//weight
		double t_from, t_to;//temperature
		double l_from, l_to;//length

		double num_trig;
		String^ oper_trig;

#pragma endregion
	private: System::Void MainFormh_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void b_num(System::Object^ sender, System::EventArgs^ e);

	private: System::Void oper(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_point_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_equals_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_sqrt_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_clear_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_del_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void tap_weight_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void tap_length_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void tap_temp_Click(System::Object^ sender, System::EventArgs^ e);

					int exp(double a, int n);
	
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void record_selected_items_in_file_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_clear_file_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_clear_history_Click(System::Object^ sender, System::EventArgs^ e);
		   
		     System::Void Calculator::MainFormh::read_history();
			
	private: System::Void view(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_nums_trig(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_point_trig_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_del_trig_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_clear_trig_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_oper_trig(System::Object^ sender, System::EventArgs^ e);

	private: System::Void b_equal_trig_Click(System::Object^ sender, System::EventArgs^ e);

};
}

