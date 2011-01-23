#pragma once

union floats{
	float s;
	double d;
	long double q;
};

namespace NoobCalculus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabs;
	protected: 
	private: System::Windows::Forms::TabPage^  tabSingle;
	private: System::Windows::Forms::TabPage^  tabDouble;
	private: System::Windows::Forms::TabPage^  tabQuad;

	private: System::Windows::Forms::Label^  lbl1Name;
	private: System::Windows::Forms::Label^  lbl2Name;
	private: System::Windows::Forms::Label^  lbl4Name;
	private: System::Windows::Forms::Label^  lbl1Result;
	private: System::Windows::Forms::Label^  lbl2Result;
	private: System::Windows::Forms::Label^  lbl4Result;
	private: System::Windows::Forms::Button^  btnCalc2;
	private: System::Windows::Forms::Button^  btnCalc4;
	private: System::Windows::Forms::Button^  btnCalcAll;
	private: System::Windows::Forms::ListBox^  log1;
	private: System::Windows::Forms::ListBox^  log2;
	private: System::Windows::Forms::ListBox^  log4;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabs = (gcnew System::Windows::Forms::TabControl());
			this->tabSingle = (gcnew System::Windows::Forms::TabPage());
			this->log1 = (gcnew System::Windows::Forms::ListBox());
			this->tabDouble = (gcnew System::Windows::Forms::TabPage());
			this->log2 = (gcnew System::Windows::Forms::ListBox());
			this->tabQuad = (gcnew System::Windows::Forms::TabPage());
			this->log4 = (gcnew System::Windows::Forms::ListBox());
			this->lbl1Name = (gcnew System::Windows::Forms::Label());
			this->lbl2Name = (gcnew System::Windows::Forms::Label());
			this->lbl4Name = (gcnew System::Windows::Forms::Label());
			this->lbl1Result = (gcnew System::Windows::Forms::Label());
			this->lbl2Result = (gcnew System::Windows::Forms::Label());
			this->lbl4Result = (gcnew System::Windows::Forms::Label());
			this->btnCalc2 = (gcnew System::Windows::Forms::Button());
			this->btnCalc4 = (gcnew System::Windows::Forms::Button());
			this->btnCalcAll = (gcnew System::Windows::Forms::Button());
			this->tabs->SuspendLayout();
			this->tabSingle->SuspendLayout();
			this->tabDouble->SuspendLayout();
			this->tabQuad->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabs
			// 
			this->tabs->Controls->Add(this->tabSingle);
			this->tabs->Controls->Add(this->tabDouble);
			this->tabs->Controls->Add(this->tabQuad);
			this->tabs->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabs->Location = System::Drawing::Point(0, 87);
			this->tabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabs->Name = L"tabs";
			this->tabs->SelectedIndex = 0;
			this->tabs->Size = System::Drawing::Size(448, 300);
			this->tabs->TabIndex = 0;
			// 
			// tabSingle
			// 
			this->tabSingle->Controls->Add(this->log1);
			this->tabSingle->Location = System::Drawing::Point(4, 29);
			this->tabSingle->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabSingle->Name = L"tabSingle";
			this->tabSingle->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabSingle->Size = System::Drawing::Size(440, 267);
			this->tabSingle->TabIndex = 0;
			this->tabSingle->Text = L"Single";
			this->tabSingle->UseVisualStyleBackColor = true;
			// 
			// log1
			// 
			this->log1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->log1->FormattingEnabled = true;
			this->log1->ItemHeight = 20;
			this->log1->Location = System::Drawing::Point(4, 5);
			this->log1->Name = L"log1";
			this->log1->Size = System::Drawing::Size(432, 257);
			this->log1->TabIndex = 0;
			// 
			// tabDouble
			// 
			this->tabDouble->Controls->Add(this->log2);
			this->tabDouble->Location = System::Drawing::Point(4, 29);
			this->tabDouble->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabDouble->Name = L"tabDouble";
			this->tabDouble->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabDouble->Size = System::Drawing::Size(440, 267);
			this->tabDouble->TabIndex = 1;
			this->tabDouble->Text = L"Double";
			this->tabDouble->UseVisualStyleBackColor = true;
			// 
			// log2
			// 
			this->log2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->log2->FormattingEnabled = true;
			this->log2->ItemHeight = 20;
			this->log2->Location = System::Drawing::Point(4, 5);
			this->log2->Name = L"log2";
			this->log2->Size = System::Drawing::Size(432, 257);
			this->log2->TabIndex = 0;
			// 
			// tabQuad
			// 
			this->tabQuad->Controls->Add(this->log4);
			this->tabQuad->Location = System::Drawing::Point(4, 29);
			this->tabQuad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabQuad->Name = L"tabQuad";
			this->tabQuad->Size = System::Drawing::Size(440, 267);
			this->tabQuad->TabIndex = 2;
			this->tabQuad->Text = L"Quadruple";
			this->tabQuad->UseVisualStyleBackColor = true;
			// 
			// log4
			// 
			this->log4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->log4->FormattingEnabled = true;
			this->log4->ItemHeight = 20;
			this->log4->Location = System::Drawing::Point(0, 0);
			this->log4->Name = L"log4";
			this->log4->Size = System::Drawing::Size(440, 267);
			this->log4->TabIndex = 0;
			// 
			// lbl1Name
			// 
			this->lbl1Name->AutoSize = true;
			this->lbl1Name->Location = System::Drawing::Point(13, 9);
			this->lbl1Name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl1Name->Name = L"lbl1Name";
			this->lbl1Name->Size = System::Drawing::Size(57, 20);
			this->lbl1Name->TabIndex = 1;
			this->lbl1Name->Text = L"Single:";
			// 
			// lbl2Name
			// 
			this->lbl2Name->AutoSize = true;
			this->lbl2Name->Location = System::Drawing::Point(13, 29);
			this->lbl2Name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl2Name->Name = L"lbl2Name";
			this->lbl2Name->Size = System::Drawing::Size(64, 20);
			this->lbl2Name->TabIndex = 1;
			this->lbl2Name->Text = L"Double:";
			// 
			// lbl4Name
			// 
			this->lbl4Name->AutoSize = true;
			this->lbl4Name->Location = System::Drawing::Point(13, 49);
			this->lbl4Name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl4Name->Name = L"lbl4Name";
			this->lbl4Name->Size = System::Drawing::Size(87, 20);
			this->lbl4Name->TabIndex = 1;
			this->lbl4Name->Text = L"Quadruple:";
			// 
			// lbl1Result
			// 
			this->lbl1Result->AutoSize = true;
			this->lbl1Result->Location = System::Drawing::Point(115, 9);
			this->lbl1Result->Name = L"lbl1Result";
			this->lbl1Result->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl1Result->Size = System::Drawing::Size(27, 20);
			this->lbl1Result->TabIndex = 2;
			this->lbl1Result->Text = L"25";
			// 
			// lbl2Result
			// 
			this->lbl2Result->AutoSize = true;
			this->lbl2Result->Location = System::Drawing::Point(115, 29);
			this->lbl2Result->Name = L"lbl2Result";
			this->lbl2Result->Size = System::Drawing::Size(27, 20);
			this->lbl2Result->TabIndex = 2;
			this->lbl2Result->Text = L"\?\?";
			// 
			// lbl4Result
			// 
			this->lbl4Result->AutoSize = true;
			this->lbl4Result->Location = System::Drawing::Point(115, 49);
			this->lbl4Result->Name = L"lbl4Result";
			this->lbl4Result->Size = System::Drawing::Size(27, 20);
			this->lbl4Result->TabIndex = 2;
			this->lbl4Result->Text = L"\?\?";
			// 
			// btnCalc2
			// 
			this->btnCalc2->Location = System::Drawing::Point(168, 22);
			this->btnCalc2->Name = L"btnCalc2";
			this->btnCalc2->Size = System::Drawing::Size(75, 27);
			this->btnCalc2->TabIndex = 3;
			this->btnCalc2->Text = L"Count";
			this->btnCalc2->UseVisualStyleBackColor = true;
			this->btnCalc2->Click += gcnew System::EventHandler(this, &MainForm::btnCalc2_Click);
			// 
			// btnCalc4
			// 
			this->btnCalc4->Location = System::Drawing::Point(168, 52);
			this->btnCalc4->Name = L"btnCalc4";
			this->btnCalc4->Size = System::Drawing::Size(75, 27);
			this->btnCalc4->TabIndex = 3;
			this->btnCalc4->Text = L"Count";
			this->btnCalc4->UseVisualStyleBackColor = true;
			this->btnCalc4->Click += gcnew System::EventHandler(this, &MainForm::btnCalc4_Click);
			// 
			// btnCalcAll
			// 
			this->btnCalcAll->Location = System::Drawing::Point(249, 37);
			this->btnCalcAll->Name = L"btnCalcAll";
			this->btnCalcAll->Size = System::Drawing::Size(90, 27);
			this->btnCalcAll->TabIndex = 3;
			this->btnCalcAll->Text = L"Count All";
			this->btnCalcAll->UseVisualStyleBackColor = true;
			this->btnCalcAll->Click += gcnew System::EventHandler(this, &MainForm::btnCalcAll_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 387);
			this->Controls->Add(this->btnCalc4);
			this->Controls->Add(this->btnCalcAll);
			this->Controls->Add(this->btnCalc2);
			this->Controls->Add(this->lbl4Result);
			this->Controls->Add(this->lbl2Result);
			this->Controls->Add(this->lbl1Result);
			this->Controls->Add(this->lbl4Name);
			this->Controls->Add(this->lbl2Name);
			this->Controls->Add(this->lbl1Name);
			this->Controls->Add(this->tabs);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Noob Calculus";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tabs->ResumeLayout(false);
			this->tabSingle->ResumeLayout(false);
			this->tabDouble->ResumeLayout(false);
			this->tabQuad->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	protected: int Calc(char type, Label^ l, ListBox^ log){
		floats sum, add, before; sum.q = 0.0;
		const unsigned char initial = 1, maxloop = -1U;
		int i;
		#define CalcMacro(x) add.x = initial; \
				while(sum.x < initial && ++i <= maxloop){ \
					before.x = sum.x; \
					sum.x += (add.x /= 2); \
					log->Items->Add("Iteration " + i + ": " + before.x + " + " + add.x + " = " + sum.x); \
				}
		switch(type){
			case 1: default: CalcMacro(s) break;
			case 2: CalcMacro(d) break;
			case 3:	CalcMacro(q) break;
		}
		l->Text = i.ToString();
		return i;
	}
	protected: void CheckButtons(Button^ a, Button^ b){
		a->Enabled = false;
		if(!b->Enabled) btnCalcAll->Enabled = false;
	}
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 if(Calc(1, lbl1Result, log1) >= 99){
					 MessageBox::Show("Error!\nYour machine has issues with calculus!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 this->Close();
				 }
			 }
	private: System::Void btnCalc2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Calc(2, lbl2Result, log2);
				 CheckButtons(btnCalc2, btnCalc4);
			 }
	private: System::Void btnCalc4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Calc(3, lbl4Result, log4);
				 CheckButtons(btnCalc4, btnCalc2);
			 }
private: System::Void btnCalcAll_Click(System::Object^  sender, System::EventArgs^  e) {
				btnCalc2_Click(sender, e);
				btnCalc4_Click(sender, e);
			}
};
}

