#pragma once

namespace Beta2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Crditos : public System::Windows::Forms::Form
	{
	public:
		Crditos(void)
		{
			InitializeComponent();
		
		}

	protected:
		
		~Crditos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"lo voy a subir a gitHud ignorrar esta pestaña :V";
			this->label1->Click += gcnew System::EventHandler(this, &Crditos::label1_Click);
		
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Name = L"Crditos";
			this->Text = L"Crditos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
