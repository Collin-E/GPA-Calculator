#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Class name, GPA, # of credits";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(17, 73);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(17, 99);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(17, 125);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(17, 151);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(17, 177);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(132, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(155, 47);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(49, 20);
			this->textBox7->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(155, 73);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(49, 20);
			this->textBox8->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(155, 99);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 20);
			this->textBox9->TabIndex = 9;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(155, 125);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 20);
			this->textBox10->TabIndex = 10;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(155, 151);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 20);
			this->textBox11->TabIndex = 11;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(155, 177);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(49, 20);
			this->textBox12->TabIndex = 12;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(210, 47);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(49, 20);
			this->textBox13->TabIndex = 13;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(210, 73);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(49, 20);
			this->textBox14->TabIndex = 14;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(210, 99);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(49, 20);
			this->textBox15->TabIndex = 15;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(210, 125);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(49, 20);
			this->textBox16->TabIndex = 16;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(210, 151);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(49, 20);
			this->textBox17->TabIndex = 17;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(210, 177);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(49, 20);
			this->textBox18->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->Location = System::Drawing::Point(17, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 49);
			this->button1->TabIndex = 19;
			this->button1->Text = L"";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(17, 293);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(242, 20);
			this->textBox19->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 25);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Your GPA will be:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 335);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		array<String^>^ classNames = gcnew array<String^>(6);
		array<Double^>^ classGPAs = gcnew array<Double^>(6);
		array<Int32^>^ classCredits = gcnew array<int^>(6);
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox19->Text = "";
		if (textBox1->Text != "") {
			classNames[0] = textBox1->Text;
		}
		if (textBox2->Text != "") {
			classNames[1] = textBox2->Text;
		}
		if (textBox3->Text != "") {
			classNames[2] = textBox3->Text;
		}
		if (textBox4->Text != "") {
			classNames[3] = textBox4->Text;
		}
		if (textBox5->Text != "") {
			classNames[4] = textBox5->Text;
		}
		if (textBox6->Text != "") {
			classNames[5] = textBox6->Text;
		}

		if (textBox7->Text != "") {
			classGPAs[0] = Convert::ToDouble(textBox7->Text);
		}
		if (textBox8->Text != "") {
			classGPAs[1] = Convert::ToDouble(textBox8->Text);
		}
		if (textBox9->Text != "") {
			classGPAs[2] = Convert::ToDouble(textBox9->Text);
		}
		if (textBox10->Text != "") {
			classGPAs[3] = Convert::ToDouble(textBox10->Text);
		}
		if (textBox11->Text != "") {
			classGPAs[4] = Convert::ToDouble(textBox11->Text);
		}
		if (textBox12->Text != "") {
			classGPAs[5] = Convert::ToDouble(textBox12->Text);
		}

		if (textBox13->Text != "") {
			classCredits[0] = Convert::ToInt32(textBox13->Text);
		}
		if (textBox14->Text != "") {
			classCredits[1] = Convert::ToInt32(textBox14->Text);
		}
		if (textBox15->Text != "") {
			classCredits[2] = Convert::ToInt32(textBox15->Text);
		}
		if (textBox16->Text != "") {
			classCredits[3] = Convert::ToInt32(textBox16->Text);
		}
		if (textBox17->Text != "") {
			classCredits[4] = Convert::ToInt32(textBox17->Text);
		}
		if (textBox18->Text != "") {
			classCredits[5] = Convert::ToInt32(textBox18->Text);
		}

		double sumGPAxCredits = 0.0;
		double sumCredits = 0;
		for (int i = 0; i < 6; i++) {
			sumGPAxCredits += Convert::ToDouble(classGPAs[i]) * Convert::ToDouble(classCredits[i]);
			sumCredits += Convert::ToDouble(classCredits[i]);
		}
		double GPA = sumGPAxCredits / sumCredits;
		double roundedGPA = ceil(GPA * 100.0) / 100.0;
		textBox19->Text += roundedGPA;
	}
};
}
