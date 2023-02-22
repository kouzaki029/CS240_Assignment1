#pragma once
#include "ATM.h"

namespace CPPGUIProject 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void) { InitializeComponent(); }
		ATM formATM;
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtNumber;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnA;
	private: System::Windows::Forms::Button^ btnB;
	private: System::Windows::Forms::Button^ btnC;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNumber
			// 
			this->txtNumber->BackColor = System::Drawing::SystemColors::Window;
			this->txtNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumber->Location = System::Drawing::Point(42, 31);
			this->txtNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(684, 37);
			this->txtNumber->TabIndex = 0;
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(42, 377);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(4);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(684, 212);
			this->txtDisplay->TabIndex = 2;
			this->txtDisplay->Text = L"Enter customer number and press OK.";
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(42, 77);
			this->btn1->Margin = System::Windows::Forms::Padding(4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(224, 63);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(274, 77);
			this->btn2->Margin = System::Windows::Forms::Padding(4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(224, 63);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(506, 77);
			this->btn3->Margin = System::Windows::Forms::Padding(4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(224, 63);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(42, 148);
			this->btn4->Margin = System::Windows::Forms::Padding(4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(224, 63);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(274, 148);
			this->btn5->Margin = System::Windows::Forms::Padding(4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(224, 63);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(506, 148);
			this->btn6->Margin = System::Windows::Forms::Padding(4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(224, 63);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(42, 219);
			this->btn7->Margin = System::Windows::Forms::Padding(4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(224, 63);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(274, 219);
			this->btn8->Margin = System::Windows::Forms::Padding(4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(224, 63);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(506, 219);
			this->btn9->Margin = System::Windows::Forms::Padding(4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(224, 63);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(42, 290);
			this->btn0->Margin = System::Windows::Forms::Padding(4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(224, 63);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(274, 290);
			this->btnDot->Margin = System::Windows::Forms::Padding(4);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(224, 63);
			this->btnDot->TabIndex = 1;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &Form1::btnDot_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(506, 290);
			this->btnCE->Margin = System::Windows::Forms::Padding(4);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(224, 63);
			this->btnCE->TabIndex = 1;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->Location = System::Drawing::Point(274, 615);
			this->btnA->Margin = System::Windows::Forms::Padding(4);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(224, 63);
			this->btnA->TabIndex = 1;
			this->btnA->Text = L"OK";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &Form1::btnA_Click);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->Location = System::Drawing::Point(274, 687);
			this->btnB->Margin = System::Windows::Forms::Padding(4);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(224, 63);
			this->btnB->TabIndex = 1;
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &Form1::btnB_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(274, 758);
			this->btnC->Margin = System::Windows::Forms::Padding(4);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(224, 63);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"Exit";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &Form1::btnC_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 940);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->txtNumber);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma region buttons 1-CE text to txtNumber
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "1";
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "2";
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "3";
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "4";
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "5";
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "6";
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "7";
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "8";
	}
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "9";
	}
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += "0";
	}
	private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text += ".";
	}
	private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNumber->Text = "";
	}
#pragma endregion
#pragma region bottom buttons
bool TryParse(String^ value)
{
	txtNumber->Focus();
	System::UInt64 number;
	bool success = UInt64::TryParse(value, number);
	if (success)
	{
		return true;
	}
	else
	{
		if (value == nullptr)
		{
			value = "";

		}
		return false;
	}
}
private: System::Void btnA_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		if (btnA->Text == "OK" && btnC->Text == "Exit")
		{
			if(TryParse(txtNumber->Text))
			{
				//we're in the Start state			
				formATM.setCustomerNumber(Convert::ToInt64(txtNumber->Text));
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getCustomerNumber());*/
				formATM.setState(ATM::state::PIN);
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
				txtNumber->Text = "";
				txtDisplay->Text = "Enter PIN and press OK.";
				btnB->Text = "";
				btnC->Text = "";
			}
			else
			{
				MessageBox::Show("Please enter customer number.");
				txtNumber->Text = "";
				txtNumber->Focus();
			}
		}
		else if (btnA->Text == "OK" && btnC->Text == "")
		{
			//we're in the PIN state
			if (TryParse(txtNumber->Text))
			{
				formATM.setCustomerPIN(Convert::ToInt64(txtNumber->Text));
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getCustomerPIN());*/
				formATM.setState(ATM::state::ACCOUNT);
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
				txtNumber->Text = "";
				txtDisplay->Text = "Select Account.";
				btnA->Text = "Checkings";
				btnB->Text = "Savings";
				btnC->Text = "Cancel";
			}
			else
			{
				MessageBox::Show("Please enter PIN number.");
				txtNumber->Text = "";
				txtNumber->Focus();
			}
		}
		else if (btnA->Text == "Checkings" && btnB->Text == "Savings")
		{			
			//we're in the Account state
			btnA->Focus();
			formATM.setState(ATM::state::TRANSACT);
			/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
			formATM.setAccountType(ATM::accountType::CHECKINGS);
			/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getAccountType());*/
			txtNumber->Text = "";
			txtDisplay->Text = "Balance = 0.0\r\nEnter amount and select transaction";
			btnA->Text = "Withdraw";
			btnB->Text = "Deposit";
			btnC->Text = "Cancel";
		}
		else if (btnA->Text == "Withdraw" && btnB->Text == "Deposit")
		{
			//we're in the Transact state
			if (TryParse(txtNumber->Text))
			{
				formATM.setTransactionAmount(Convert::ToInt64(txtNumber->Text));
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getTransactionAmount());*/
				formATM.setTransaction(ATM::transaction::WITHDRAW);
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getTransaction());*/
				formATM.setState(ATM::state::ACCOUNT);
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
				txtNumber->Text = "";
				txtDisplay->Text = "Select Account.";
				btnA->Text = "Checkings";
				btnB->Text = "Savings";
				btnC->Text = "Cancel";
			}
			else
			{
				MessageBox::Show("Please enter a number.");
				txtNumber->Text = "";
				txtNumber->Focus();
			}
		}
	}
private: System::Void btnB_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (btnA->Text == "Checkings" && btnB->Text == "Savings")
		{
			//we're in the Account state
			formATM.setState(ATM::state::TRANSACT);
			/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
			formATM.setAccountType(ATM::accountType::SAVINGS);
			/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getAccountType());*/
			txtNumber->Text = "";
			txtDisplay->Text = "Balance = 0.0\r\nEnter amount and select transaction";
			btnA->Text = "Withdraw";
			btnB->Text = "Deposit";
			btnC->Text = "Cancel";
		}
		else if (btnA->Text == "Withdraw" && btnB->Text == "Deposit")
		{
			//we're in the Transact state
			if (txtNumber->Text != "")
			{
				formATM.setTransactionAmount(Convert::ToInt64(txtNumber->Text));
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getTransactionAmount());*/
				formATM.setTransaction(ATM::transaction::DEPOSIT);
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getTransaction());*/
				formATM.setState(ATM::state::ACCOUNT);
				/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
				txtNumber->Text = "";
				txtDisplay->Text = "Select Account.";
				btnA->Text = "Checkings";
				btnB->Text = "Savings";
				btnC->Text = "Cancel";
			}
		}
	}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (btnC->Text == "Exit")
		{
			//we're in the Start State
			Form1::Close();
		}
		else if (btnA->Text == "Checkings" && btnB->Text == "Savings")
		{
			//we're in the ACCOUNT state
			formATM.setState(ATM::state::START);
			/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
			txtNumber->Text = "";
			txtDisplay->Text = "Enter customer number and press OK.";
			btnA->Text = "OK";
			btnB->Text = "";
			btnC->Text = "Exit";
		}
		else if (btnA->Text == "Withdraw" && btnB->Text == "Deposit")
		{
			formATM.setState(ATM::state::ACCOUNT);
			/*DEBUGGING PURPOSES : Console::WriteLine(formATM.getState());*/
			txtNumber->Text = "";
			txtDisplay->Text = "Select Account.";
			btnA->Text = "Checkings";
			btnB->Text = "Savings";
			btnC->Text = "Cancel";
		}
	}
};
#pragma endregion
}
