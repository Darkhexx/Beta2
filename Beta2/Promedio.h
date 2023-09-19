#pragma once

namespace Beta2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Promedio : public System::Windows::Forms::Form
	{
	public:
		Promedio(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~Promedio()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Matematicas;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ Fisica;
	private: System::Windows::Forms::TextBox^ SI;
	private: System::Windows::Forms::TextBox^ R;
	private: System::Windows::Forms::TextBox^ D;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ PR;
	private: System::Windows::Forms::Button^ button1;







	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Matematicas = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Fisica = (gcnew System::Windows::Forms::TextBox());
			this->SI = (gcnew System::Windows::Forms::TextBox());
			this->R = (gcnew System::Windows::Forms::TextBox());
			this->D = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PR = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Promedio Calculator";
			this->label1->Click += gcnew System::EventHandler(this, &Promedio::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Resultado";
			this->label2->Click += gcnew System::EventHandler(this, &Promedio::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Sistemas de informacion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Fisica";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Robotica";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Dibujo";
			// 
			// Matematicas
			// 
			this->Matematicas->Location = System::Drawing::Point(110, 61);
			this->Matematicas->MaxLength = 4;
			this->Matematicas->Name = L"Matematicas";
			this->Matematicas->Size = System::Drawing::Size(37, 20);
			this->Matematicas->TabIndex = 9;
			this->Matematicas->UseWaitCursor = true;
			this->Matematicas->TextChanged += gcnew System::EventHandler(this, &Promedio::textBox1_TextChanged_1);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(197, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Promedio::button2_Click);
			// 
			// Fisica
			// 
			this->Fisica->Location = System::Drawing::Point(67, 90);
			this->Fisica->MaxLength = 4;
			this->Fisica->Name = L"Fisica";
			this->Fisica->Size = System::Drawing::Size(37, 20);
			this->Fisica->TabIndex = 15;
			this->Fisica->TextChanged += gcnew System::EventHandler(this, &Promedio::textBox2_TextChanged);
			// 
			// SI
			// 
			this->SI->Location = System::Drawing::Point(180, 115);
			this->SI->MaxLength = 4;
			this->SI->Name = L"SI";
			this->SI->Size = System::Drawing::Size(37, 20);
			this->SI->TabIndex = 16;
			this->SI->TextChanged += gcnew System::EventHandler(this, &Promedio::textBox3_TextChanged);
			// 
			// R
			// 
			this->R->Location = System::Drawing::Point(88, 141);
			this->R->MaxLength = 4;
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(37, 20);
			this->R->TabIndex = 17;
			// 
			// D
			// 
			this->D->Location = System::Drawing::Point(72, 167);
			this->D->MaxLength = 4;
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(37, 20);
			this->D->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 16);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Matematicas";
			// 
			// PR
			// 
			this->PR->Enabled = false;
			this->PR->Location = System::Drawing::Point(95, 223);
			this->PR->MaxLength = 4;
			this->PR->Name = L"PR";
			this->PR->Size = System::Drawing::Size(37, 20);
			this->PR->TabIndex = 20;
			this->PR->TextChanged += gcnew System::EventHandler(this, &Promedio::PR_TextChanged);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(197, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Limpiadr";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Promedio::button1_Click);
			// 
			// Promedio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 314);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PR);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->D);
			this->Controls->Add(this->R);
			this->Controls->Add(this->SI);
			this->Controls->Add(this->Fisica);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Matematicas);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Promedio";
			this->Text = L"Promedio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ A = Matematicas->Text;
	String^ a = Fisica->Text;
	String^ b = D->Text;
	String^ c = SI->Text;
	String^ M = R->Text;
	double V;
	if (double::TryParse(A, V)) {

		if (double::TryParse(a, V)) {
			if (double::TryParse(b, V)) {
				if (double::TryParse(c, V)) {
					if (double::TryParse(M, V)) {
						double P = 0;
						double N1 = Convert::ToDouble(Matematicas->Text);
						double N2 = Convert::ToDouble(Fisica->Text);
						double N3 = Convert::ToDouble(SI->Text);
						double N4 = Convert::ToDouble(R->Text);
						double N5 = Convert::ToDouble(D->Text);

						P = ((N1 + N2 + N3 + N4 + N5) / 5);

						PR->Text = P.ToString();
					}
					else
					{
						MessageBox::Show("Ingrese los dato en el formato corecto.");
					}
				}
				else
				{
					MessageBox::Show("Ingrese los dato en el formato corecto.");
				}
			}
			else
			{
				MessageBox::Show("Ingrese los dato en el formato corecto.");
			}
		}
		else
		{
			MessageBox::Show("Ingrese los dato en el formato corecto.");
		}
	}
	else
	{
		MessageBox::Show("Ingrese los dato en el formato corecto.");
	}
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	Matematicas->Text = "";
	Fisica->Text = "";
	SI->Text = "";
	R->Text = "";
	D->Text = "";

}
private: System::Void PR_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
