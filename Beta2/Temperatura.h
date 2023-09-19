#pragma once

namespace Beta2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class Temperatura : public System::Windows::Forms::Form
	{
	public:
		Temperatura(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~Temperatura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ A;
	protected:
	private: System::Windows::Forms::TextBox^ R;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ gradosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ celciusAFarengeighToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ farengeighACelciusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kelvinAFarengeighToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kelvinACelciusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ farengeighAKelvinToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ celciusAKelvinToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->R = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gradosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->celciusAFarengeighToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->farengeighACelciusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kelvinAFarengeighToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kelvinACelciusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->farengeighAKelvinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->celciusAKelvinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			
			this->A->Location = System::Drawing::Point(23, 65);
			this->A->MaxLength = 4;
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(57, 20);
			this->A->TabIndex = 1;
			this->A->TextChanged += gcnew System::EventHandler(this, &Temperatura::A_TextChanged);
			
			this->R->Enabled = false;
			this->R->Location = System::Drawing::Point(23, 115);
			this->R->MaxLength = 4;
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(57, 20);
			this->R->TabIndex = 3;
			
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Resultado";
			this->label1->Click += gcnew System::EventHandler(this, &Temperatura::label1_Click);
			
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Convercion";
			
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->gradosToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			
			this->gradosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->celciusAFarengeighToolStripMenuItem,
					this->farengeighACelciusToolStripMenuItem, this->kelvinAFarengeighToolStripMenuItem, this->kelvinACelciusToolStripMenuItem, this->farengeighAKelvinToolStripMenuItem,
					this->celciusAKelvinToolStripMenuItem
			});
			this->gradosToolStripMenuItem->Name = L"gradosToolStripMenuItem";
			this->gradosToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->gradosToolStripMenuItem->Text = L"Grados";
			this->gradosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::gradosToolStripMenuItem_Click);
			
			this->celciusAFarengeighToolStripMenuItem->Name = L"celciusAFarengeighToolStripMenuItem";
			this->celciusAFarengeighToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->celciusAFarengeighToolStripMenuItem->Text = L"Celcius a Farengeigh";
			this->celciusAFarengeighToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::celciusAFarengeighToolStripMenuItem_Click);
			
			this->farengeighACelciusToolStripMenuItem->Name = L"farengeighACelciusToolStripMenuItem";
			this->farengeighACelciusToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->farengeighACelciusToolStripMenuItem->Text = L"Farengeigh a Celcius";
			this->farengeighACelciusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::farengeighACelciusToolStripMenuItem_Click);
			
			this->kelvinAFarengeighToolStripMenuItem->Name = L"kelvinAFarengeighToolStripMenuItem";
			this->kelvinAFarengeighToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->kelvinAFarengeighToolStripMenuItem->Text = L"Kelvin a Farengeigh";
			this->kelvinAFarengeighToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::kelvinAFarengeighToolStripMenuItem_Click);
			
			this->kelvinACelciusToolStripMenuItem->Name = L"kelvinACelciusToolStripMenuItem";
			this->kelvinACelciusToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->kelvinACelciusToolStripMenuItem->Text = L"Kelvin a Celcius";
			this->kelvinACelciusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::kelvinACelciusToolStripMenuItem_Click);
			
			this->farengeighAKelvinToolStripMenuItem->Name = L"farengeighAKelvinToolStripMenuItem";
			this->farengeighAKelvinToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->farengeighAKelvinToolStripMenuItem->Text = L"Farengeigh a Kelvin";
			this->farengeighAKelvinToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::farengeighAKelvinToolStripMenuItem_Click);
			 
			this->celciusAKelvinToolStripMenuItem->Name = L"celciusAKelvinToolStripMenuItem";
			this->celciusAKelvinToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->celciusAKelvinToolStripMenuItem->Text = L"Celcius a Kelvin";
			this->celciusAKelvinToolStripMenuItem->Click += gcnew System::EventHandler(this, &Temperatura::celciusAKelvinToolStripMenuItem_Click);
			
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->R);
			this->Controls->Add(this->A);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Temperatura";
			this->Load += gcnew System::EventHandler(this, &Temperatura::Temperatura_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void eToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CE_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Temperatura_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void celciusAFarengeighToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ N = A->Text;
	double K;
	
	if (double::TryParse(N, K)) {

		double C = Convert::ToDouble(A->Text);

		double A = (C * (static_cast<double>(9) / 5)) + 32;
		R->Text = A.ToString();

	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
	
}
private: System::Void gradosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void farengeighACelciusToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ N = A->Text;
	double K;

	if (double::TryParse(N, K)) {
		double C = Convert::ToDouble(A->Text);

		double A = (C - 32) * (static_cast<double>(5) / 9);
		R->Text = A.ToString();
	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
}
private: System::Void kelvinAFarengeighToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ N = A->Text;
	double K;

	if (double::TryParse(N, K)) {
		double C = Convert::ToDouble(A->Text);

		double A = (C - 273.15) * (static_cast<double>(9) / 5) + 32;

		R->Text = A.ToString();
	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
}
private: System::Void kelvinACelciusToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ N = A->Text;
	double K;

	if (double::TryParse(N, K)) {
		double C = Convert::ToDouble(A->Text);

		double A = C - 273.15;

		R->Text = A.ToString();
	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
}
private: System::Void farengeighAKelvinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ N = A->Text;
	double K;

	if (double::TryParse(N, K)) {
		double C = Convert::ToDouble(A->Text);

		double A = (C - 32) * (static_cast<double>(5) / 9) + 273.15;

		R->Text = A.ToString();
	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
}
	   

private: System::Void celciusAKelvinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ N = A->Text;
	double K;

	if (double::TryParse(N, K)) {
		double C = Convert::ToDouble(A->Text);

		double A = C + 273.15;

		R->Text = A.ToString();
	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
}
private: System::Void A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
