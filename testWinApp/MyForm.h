#pragma once

namespace testWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ endApplication;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ calcButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonNumSeven;
	private: System::Windows::Forms::Button^ buttonNumEight;
	private: System::Windows::Forms::Button^ buttonNumNine;


	private: System::Windows::Forms::Button^ buttonNumSix;

	private: System::Windows::Forms::Button^ buttonNumFive;

	private: System::Windows::Forms::Button^ buttonNumFour;

	private: System::Windows::Forms::Button^ buttonNumThree;

	private: System::Windows::Forms::Button^ buttonNumTwo;

	private: System::Windows::Forms::Button^ buttonNumOne;
	private: System::Windows::Forms::Button^ buttonPart;


	private: System::Windows::Forms::Button^ buttonNumZero;
	private: System::Windows::Forms::Button^ buttonNegate;
	private: System::Windows::Forms::Label^ resultBar;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonMult;
	private: System::Windows::Forms::Button^ buttonDiv;
	private: System::Windows::Forms::Button^ buttonDel;

	private: System::Windows::Forms::Button^ buttonRut;

	private: System::Windows::Forms::Button^ buttonSquare;

	private: System::Windows::Forms::Button^ buttonInvDeg;


	//+ NDG 20240513

	private: int first_Num;
	private: char user_action = ' ';
	private: System::Windows::Forms::LinkLabel^ linkGithub;


	//- NDG 20240513



	protected:














	protected:






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->endApplication = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->calcButton = (gcnew System::Windows::Forms::Button());
			this->buttonNumSeven = (gcnew System::Windows::Forms::Button());
			this->buttonNumEight = (gcnew System::Windows::Forms::Button());
			this->buttonNumNine = (gcnew System::Windows::Forms::Button());
			this->buttonNumSix = (gcnew System::Windows::Forms::Button());
			this->buttonNumFive = (gcnew System::Windows::Forms::Button());
			this->buttonNumFour = (gcnew System::Windows::Forms::Button());
			this->buttonNumThree = (gcnew System::Windows::Forms::Button());
			this->buttonNumTwo = (gcnew System::Windows::Forms::Button());
			this->buttonNumOne = (gcnew System::Windows::Forms::Button());
			this->buttonPart = (gcnew System::Windows::Forms::Button());
			this->buttonNumZero = (gcnew System::Windows::Forms::Button());
			this->buttonNegate = (gcnew System::Windows::Forms::Button());
			this->resultBar = (gcnew System::Windows::Forms::Label());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonDel = (gcnew System::Windows::Forms::Button());
			this->buttonRut = (gcnew System::Windows::Forms::Button());
			this->buttonSquare = (gcnew System::Windows::Forms::Button());
			this->buttonInvDeg = (gcnew System::Windows::Forms::Button());
			this->linkGithub = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// endApplication
			// 
			this->endApplication->BackColor = System::Drawing::Color::IndianRed;
			this->endApplication->Cursor = System::Windows::Forms::Cursors::Hand;
			this->endApplication->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->endApplication, L"endApplication");
			this->endApplication->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->endApplication->Name = L"endApplication";
			this->endApplication->UseVisualStyleBackColor = false;
			this->endApplication->Click += gcnew System::EventHandler(this, &MyForm::endApplication_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->buttonClear);
			this->panel1->Controls->Add(this->calcButton);
			this->panel1->Controls->Add(this->endApplication);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::Orange;
			this->buttonClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClear->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->buttonClear, L"buttonClear");
			this->buttonClear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// calcButton
			// 
			this->calcButton->BackColor = System::Drawing::Color::MediumTurquoise;
			this->calcButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calcButton->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->calcButton, L"calcButton");
			this->calcButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->calcButton->Name = L"calcButton";
			this->calcButton->UseVisualStyleBackColor = false;
			this->calcButton->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);
			// 
			// buttonNumSeven
			// 
			this->buttonNumSeven->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumSeven->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumSeven, L"buttonNumSeven");
			this->buttonNumSeven->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumSeven->Name = L"buttonNumSeven";
			this->buttonNumSeven->UseVisualStyleBackColor = false;
			this->buttonNumSeven->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumEight
			// 
			this->buttonNumEight->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumEight->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumEight, L"buttonNumEight");
			this->buttonNumEight->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumEight->Name = L"buttonNumEight";
			this->buttonNumEight->UseVisualStyleBackColor = false;
			this->buttonNumEight->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumNine
			// 
			this->buttonNumNine->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumNine->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumNine, L"buttonNumNine");
			this->buttonNumNine->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumNine->Name = L"buttonNumNine";
			this->buttonNumNine->UseVisualStyleBackColor = false;
			this->buttonNumNine->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumSix
			// 
			this->buttonNumSix->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumSix->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumSix, L"buttonNumSix");
			this->buttonNumSix->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumSix->Name = L"buttonNumSix";
			this->buttonNumSix->UseVisualStyleBackColor = false;
			this->buttonNumSix->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumFive
			// 
			this->buttonNumFive->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumFive->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumFive, L"buttonNumFive");
			this->buttonNumFive->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumFive->Name = L"buttonNumFive";
			this->buttonNumFive->UseVisualStyleBackColor = false;
			this->buttonNumFive->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumFour
			// 
			this->buttonNumFour->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumFour->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumFour, L"buttonNumFour");
			this->buttonNumFour->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumFour->Name = L"buttonNumFour";
			this->buttonNumFour->UseVisualStyleBackColor = false;
			this->buttonNumFour->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumThree
			// 
			this->buttonNumThree->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumThree->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumThree, L"buttonNumThree");
			this->buttonNumThree->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumThree->Name = L"buttonNumThree";
			this->buttonNumThree->UseVisualStyleBackColor = false;
			this->buttonNumThree->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumTwo
			// 
			this->buttonNumTwo->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumTwo->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumTwo, L"buttonNumTwo");
			this->buttonNumTwo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumTwo->Name = L"buttonNumTwo";
			this->buttonNumTwo->UseVisualStyleBackColor = false;
			this->buttonNumTwo->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNumOne
			// 
			this->buttonNumOne->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumOne->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumOne, L"buttonNumOne");
			this->buttonNumOne->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumOne->Name = L"buttonNumOne";
			this->buttonNumOne->UseVisualStyleBackColor = false;
			this->buttonNumOne->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonPart
			// 
			this->buttonPart->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPart->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonPart, L"buttonPart");
			this->buttonPart->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonPart->Name = L"buttonPart";
			this->buttonPart->UseVisualStyleBackColor = false;
			// 
			// buttonNumZero
			// 
			this->buttonNumZero->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNumZero->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNumZero, L"buttonNumZero");
			this->buttonNumZero->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNumZero->Name = L"buttonNumZero";
			this->buttonNumZero->UseVisualStyleBackColor = false;
			this->buttonNumZero->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// buttonNegate
			// 
			this->buttonNegate->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNegate->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonNegate, L"buttonNegate");
			this->buttonNegate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonNegate->Name = L"buttonNegate";
			this->buttonNegate->UseVisualStyleBackColor = false;
			// 
			// resultBar
			// 
			this->resultBar->BackColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->resultBar, L"resultBar");
			this->resultBar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resultBar->Name = L"resultBar";
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonPlus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonPlus, L"buttonPlus");
			this->buttonPlus->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonMinus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonMinus, L"buttonMinus");
			this->buttonMinus->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonMult->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonMult, L"buttonMult");
			this->buttonMult->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->UseVisualStyleBackColor = false;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::btnMult_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonDiv->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonDiv, L"buttonDiv");
			this->buttonDiv->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->UseVisualStyleBackColor = false;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// buttonDel
			// 
			this->buttonDel->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonDel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonDel, L"buttonDel");
			this->buttonDel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonDel->Name = L"buttonDel";
			this->buttonDel->UseVisualStyleBackColor = false;
			this->buttonDel->Click += gcnew System::EventHandler(this, &MyForm::btnDel_Click);
			// 
			// buttonRut
			// 
			this->buttonRut->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonRut->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonRut, L"buttonRut");
			this->buttonRut->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonRut->Name = L"buttonRut";
			this->buttonRut->UseVisualStyleBackColor = false;
			// 
			// buttonSquare
			// 
			this->buttonSquare->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonSquare->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonSquare, L"buttonSquare");
			this->buttonSquare->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonSquare->Name = L"buttonSquare";
			this->buttonSquare->UseVisualStyleBackColor = false;
			// 
			// buttonInvDeg
			// 
			this->buttonInvDeg->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonInvDeg->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->buttonInvDeg, L"buttonInvDeg");
			this->buttonInvDeg->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonInvDeg->Name = L"buttonInvDeg";
			this->buttonInvDeg->UseVisualStyleBackColor = false;
			// 
			// linkGithub
			// 
			this->linkGithub->ActiveLinkColor = System::Drawing::Color::Goldenrod;
			resources->ApplyResources(this->linkGithub, L"linkGithub");
			this->linkGithub->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->linkGithub->Name = L"linkGithub";
			this->linkGithub->TabStop = true;
			this->linkGithub->VisitedLinkColor = System::Drawing::Color::PaleTurquoise;
			this->linkGithub->Click += gcnew System::EventHandler(this, &MyForm::btnGitHub_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Controls->Add(this->linkGithub);
			this->Controls->Add(this->buttonDel);
			this->Controls->Add(this->buttonRut);
			this->Controls->Add(this->buttonSquare);
			this->Controls->Add(this->buttonInvDeg);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonPart);
			this->Controls->Add(this->buttonNumZero);
			this->Controls->Add(this->buttonNegate);
			this->Controls->Add(this->buttonNumThree);
			this->Controls->Add(this->buttonNumTwo);
			this->Controls->Add(this->buttonNumOne);
			this->Controls->Add(this->buttonNumSix);
			this->Controls->Add(this->buttonNumFive);
			this->Controls->Add(this->buttonNumFour);
			this->Controls->Add(this->buttonNumNine);
			this->Controls->Add(this->buttonNumEight);
			this->Controls->Add(this->buttonNumSeven);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->resultBar);
			this->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void endApplication_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}

	private: System::Void btnNum_Click(System::Object^ sender, System::EventArgs^ e) {

		Button^ button = safe_cast <Button^>(sender);

		if (this->resultBar->Text == "0" || this->resultBar->Text == "Неопределено") {

			this->resultBar->Text = button->Text;

			changeAvMath(true);
		}
		else {

			this->resultBar->Text = this->resultBar->Text + button->Text;
		}
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	
		this->resultBar->Text = "0";

	}

	private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {

		mathAction('+');

	}

	private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {

		mathAction('-');

	}

	private: System::Void btnMult_Click(System::Object^ sender, System::EventArgs^ e) {

		mathAction('*');

	}

	private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {

		mathAction('/');

	}

	private: System::Void btnDel_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->resultBar->Text == "Неопределено") { this->resultBar->Text = "0"; changeAvMath(true);}
		else {

			if (this->resultBar->Text->Length > 1) {

				this->resultBar->Text = this->resultBar->Text->Remove(this->resultBar->Text->Length - 1);

			}
			else {

				this->resultBar->Text = "0";

			}
		}
	}

	private: System::Void mathAction(char action) {

		this->first_Num = System::Convert::ToInt32(this->resultBar->Text);

		this->user_action = action;

		this->resultBar->Text = "0";

	}

	private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->user_action = ' ') { return; }

		bool resNull = this->resultBar->Text == "Неопределено";

		if (resNull) {this->resultBar->Text = "0";}
		else {

			int second_num = System::Convert::ToInt32(this->resultBar->Text);
			int res;

			switch (this->user_action) {

			case '+': res = this->first_Num + second_num; break;
			case '-': res = this->first_Num - second_num; break;
			case '*': res = this->first_Num * second_num; break;
			case '/':

				if (second_num == 0) {
					this->resultBar->Text = "Неопределено";
					this->first_Num = 0;
					
					changeAvMath(false);

				}
				else {
					res = this->first_Num / second_num;

					this->resultBar->Text = System::Convert::ToString(res);
					this->first_Num = res;
				}
				break;
			}

			if (!resNull && (second_num != 0 && this->user_action != '/')) {

				this->resultBar->Text = System::Convert::ToString(res);
				this->first_Num = res;

			}
		}
	}

	private: System::Void btnGitHub_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Diagnostics::Process::Start(this->linkGithub->Text);

	}

	private: System::Void changeAvMath(bool paramValue) {

		this->buttonInvDeg->Enabled		= paramValue;
		this->buttonMinus->Enabled		= paramValue;
		this->buttonMult->Enabled		= paramValue;
		this->buttonPlus->Enabled		= paramValue;
		this->buttonSquare->Enabled		= paramValue;
		this->buttonNegate->Enabled		= paramValue;
		this->buttonPart->Enabled		= paramValue;
		this->buttonRut->Enabled		= paramValue;
		this->buttonDiv->Enabled		= paramValue;
	}
};
}
