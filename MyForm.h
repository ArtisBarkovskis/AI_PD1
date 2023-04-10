#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>   // vairs nezinu kuri no #include ir vajadzigi, iespejams kadus var izdzest
#using <System.dll>
namespace SummeArtisB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Collections::Generic;  //sitas un #using <System.dll> vajadzigs lai List stradatu

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here
			pictureBox1->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamelogo.png"));
			pictureBox2->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "bilde3.png"));
			button5->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "btnplus3.png"));
			button6->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "btnplus4.png"));
			button7->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "btnplus5.png"));
			panel1->Visible = true;
			panel2->Visible = false;
			panel3->Visible = false;
			labelplus5->Visible = false;
			labelplus4->Visible = false;
			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 1000; // 1000ms = 1s
			timer->Tick += gcnew System::EventHandler(this, &MyForm::AiTimer);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ kâSpçlçtToolStripMenuItem;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ labelplus4;
	private: System::Windows::Forms::Label^ labelplus5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->kâSpçlçtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelplus4 = (gcnew System::Windows::Forms::Label());
			this->labelplus5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
			this->kâSpçlçtToolStripMenuItem,
			this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(708, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// kâSpçlçtToolStripMenuItem
			// 
			this->kâSpçlçtToolStripMenuItem->Name = L"kâSpçlçtToolStripMenuItem";
			this->kâSpçlçtToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->kâSpçlçtToolStripMenuItem->Text = L"&Kâ Spçlçt\?";
			this->kâSpçlçtToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::About_Window_Pop);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->exitToolStripMenuItem->Text = L"&Iziet";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitProgram);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(698, 377);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(83, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(527, 113);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(275, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Iziet";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::exitProgram);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 264);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Kâ spçlçt\?";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::About_Window_Pop);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(275, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Otrais Spçlçtâjs";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnSecondPlayer);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pirmais Spçlçtâjs";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnFirstPlayer);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->labelplus4);
			this->panel2->Controls->Add(this->labelplus5);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Location = System::Drawing::Point(12, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(645, 384);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Location = System::Drawing::Point(3, 206);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(521, 168);
			this->panel3->TabIndex = 4;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(31, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(471, 117);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(283, 136);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(114, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Atpakaï uz Sâkumu";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::goToStartPage);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(144, 136);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(114, 23);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Spçlçt Vçlreiz";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btnPlayAgain);
			// 
			// labelplus4
			// 
			this->labelplus4->AutoSize = true;
			this->labelplus4->Location = System::Drawing::Point(413, 175);
			this->labelplus4->Name = L"labelplus4";
			this->labelplus4->Size = System::Drawing::Size(111, 13);
			this->labelplus4->TabIndex = 11;
			this->labelplus4->Text = L"Nedrîkst pârsniegt 30!";
			// 
			// labelplus5
			// 
			this->labelplus5->AutoSize = true;
			this->labelplus5->Location = System::Drawing::Point(413, 68);
			this->labelplus5->Name = L"labelplus5";
			this->labelplus5->Size = System::Drawing::Size(111, 13);
			this->labelplus5->TabIndex = 10;
			this->labelplus5->Text = L"Nedrîkst pârsniegt 30!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(118, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(243, 162);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(550, 38);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 73);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnPlus5);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(550, 145);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 73);
			this->button6->TabIndex = 7;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnPlus4);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(367, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"test";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(550, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 73);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnPlus3);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 404);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void goToStartPage(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = true;
		panel2->Visible = false;
		panel3->Visible = false;
	}
	private: System::Void exitProgram(System::Object^ sender, System::EventArgs^ e) {
	Close();
	}
	private: System::Void About_Window_Pop(System::Object^ sender, System::EventArgs^ e) {
		Form^ popup = gcnew Form();
		popup->Text = "Kâ Spçlçt?";
		Label^ label1 = gcnew Label();
		label1->Text = "Summç!\n\n"
			"Spçli iesâk izvçloties sâkt, kâ pirmais spçlçtajs, vai kâ otrais spçlçtâjs.\n\n"
			"Spçle tiek uzsâkta ar skaitli 3.\n\n"
			"Spçlçtâji izpilda gâjienus pçc kârtas.\n\n"
			"Katrâ gâjienâ spçlçtâjam ir jâpiesummç iepriekð uzrakstîtajam skaitlim skaitli 3, 4 vai 5.\n\n"
			"Spçle beidzas, kad tiek sasniegts skaitlis 30, vai arî ja nâkamajam spçlçtâjam nav iespçjams gâjiens, kurð nepârsniegs 30.\n\n"
			"Spçlçtâjs uzvar, ja ieguva skaitli 30, bet zaudç, ja ieguva skaitli 28 vai 29.";
		label1->AutoSize = true;
		label1->Location = Point(10, 10);
		popup->Controls->Add(label1);
		popup->ClientSize = System::Drawing::Size(600, 200);
		popup->StartPosition = FormStartPosition::CenterScreen;
		popup->ShowDialog();
	}
	public:	bool PlayerStartFirst = true;
			int Gajiens = 1; 
			int cipars = 3;
	private: System::Void btnPlus3(System::Object^ sender, System::EventArgs^ e) {
		cipars += 3;
		pictureBox2->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "bilde" + cipars + ".png"));
		Gajiens++;
		disableButtons();
		if (gameFinishedcheck()) {
			panel3->Visible = true;
			return;
		}
		timer->Start();
	}
	private: System::Void btnPlus4(System::Object^ sender, System::EventArgs^ e) {
		if (cipars + 4 > 30) {
			button6->Enabled = false;  // button 6 = btnPlus4
			labelplus4->Visible = true;
			return;
		}
		else {
			cipars += 4;
			pictureBox2->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "bilde" + cipars + ".png"));
			Gajiens++;
			disableButtons();
			if (gameFinishedcheck()) {
				panel3->Visible = true;
				return;
			}
			timer->Start();
		}
	}
	private: System::Void btnPlus5(System::Object^ sender, System::EventArgs^ e) {
		if (cipars + 5 > 30) {
			button7->Enabled = false;  // button 7 = btnPlus5
			labelplus5->Visible = true;
			return;
		}
		else {
			cipars += 5;
			pictureBox2->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "bilde" + cipars + ".png"));
			Gajiens++;
			disableButtons();
			if (gameFinishedcheck()) {
				panel3->Visible = true;
				return;
			}
			timer->Start();
		}
	}
	private: void disableButtons() {
		button5->Enabled = false;  // button 5 = btnPlus3
		button6->Enabled = false;  // button 6 = btnPlus4
		button7->Enabled = false;  // button 7 = btnPlus5
	}
	private: void enableButtons() {
		button5->Enabled = true;  // button 5 = btnPlus3
		button6->Enabled = true;  // button 6 = btnPlus4
		button7->Enabled = true;  // button 7 = btnPlus5
	}
	private: bool gameFinishedcheck() {
		if (cipars >= 28 && cipars <= 30) {
			if (cipars == 30 && (PlayerStartFirst && Gajiens % 2 == 0 || !PlayerStartFirst && Gajiens % 2 != 0)) {
				pictureBox3->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamewin.png"));
				label3->Text = "AI Lost";
			} else if (cipars < 30 && (PlayerStartFirst && Gajiens % 2 != 0 || !PlayerStartFirst && Gajiens % 2 == 0)) {
				pictureBox3->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamewin.png"));
				label3->Text = "AI Lost";
			} else {
				pictureBox3->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamelose.png"));
				label3->Text = "AI Won";
			}
			return true;
		}
		return false;
	}
	// timeris, lai AI gajiens netiktu izpildits uzreiz/kopa ar manu gajienu
	private: System::Void AiTimer(System::Object^ sender, System::EventArgs^ e) {
		AiTurn();
		if (!gameFinishedcheck()) {
			enableButtons();
		}
		timer->Stop();
	}
	private: System::Void btnFirstPlayer(System::Object^ sender, System::EventArgs^ e) {
		labelplus4->Visible = false;
		labelplus5->Visible = false;
		label3->Text = "";
		enableButtons();
		PlayerStartFirst = true; //sito ganjau var dzest ara
		Gajiens = 1;
		cipars = 3;
		pictureBox2->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "bilde" + cipars + ".png"));
		panel1->Visible = false;
		panel2->Visible = true;
		panel3->Visible = false;
	}
	private: System::Void btnSecondPlayer(System::Object^ sender, System::EventArgs^ e) {
		labelplus4->Visible = false;
		labelplus5->Visible = false;
		label3->Text = "";
		PlayerStartFirst = false;
		Gajiens = 0;
		cipars = 0;  //AI kaut kadel nesaprata ko darit pirmaja gajiena, tapec izdaru fake +3 gajienu vispirms
		pictureBox2->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "bilde3.png"));
		panel1->Visible = false;
		panel2->Visible = true;
		panel3->Visible = false;
		btnPlus3(nullptr, nullptr);
	}
	private: System::Void btnPlayAgain(System::Object^ sender, System::EventArgs^ e) {
		if (PlayerStartFirst) {
			btnFirstPlayer(nullptr, nullptr);
		} else {
			btnSecondPlayer(nullptr, nullptr);
		}
	}
	private: void AiTurn() {
		Speles_Koks^ koks; // atsauce uz Speles_Koks
		int bestMove = -1;
		int bestValue = -101;
		int startValue = cipars;
		List<int>^ bestMoves = gcnew List<int>(); // saraksts, labako gajienu glabasanai
		// loops, kamer AI atrod gajienu ko darit
			koks = gcnew Speles_Koks(startValue, true);
			for each (Virsotne ^ child in koks->root->children) {
				int value = koks->minmax(child, PlayerStartFirst);
				if (value > bestValue) {
					bestValue = value;
					bestMoves->Clear(); //iztukso sarakstu un pievieno jaunu labako gajienu
					bestMoves->Add(child->cipars - startValue);
				}
				else if (value == bestValue) {
					bestMoves->Add(child->cipars - startValue);
				}
			}
		// ja vairaki vienada novertejuma gajieni, izvelas random
		Random^ rnd = gcnew Random();
		int randomIndex = rnd->Next(bestMoves->Count);
		bestMove = bestMoves[randomIndex];

		// label3 = speles heiristiskais novertejums
		if (bestMove + startValue >= 28 && bestMove + startValue <= 30) {
			if (bestMove + startValue == 30) {
				if (PlayerStartFirst && Gajiens % 2 == 0 || !PlayerStartFirst && Gajiens % 2 != 0) {
					pictureBox3->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamelose.png"));
					label3->Text = "AI Won";
				}
			}
			else if (PlayerStartFirst && Gajiens % 2 != 0 || !PlayerStartFirst && Gajiens % 2 == 0) {
				pictureBox3->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamelose.png"));
				label3->Text = "AI Won";
			}
			else {
				pictureBox3->Image = Image::FromFile(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(gcnew String(__FILE__)), "summebildes", "gamewin.png"));
				label3->Text = "AI Lost";
			}
		} else if ((bestValue == 100 && !PlayerStartFirst) || (bestValue == -100 && PlayerStartFirst)) { 
			label3->Text = "AI is winning";
		}
		else {
			label3->Text = "AI is losing";
		}
		// izsauc pogu
		if (bestMove == 3) {
			btnPlus3(nullptr, nullptr);
		}
		else if (bestMove == 4) {
			btnPlus4(nullptr, nullptr);
		}
		else if (bestMove == 5) {
			btnPlus5(nullptr, nullptr);
		}

	}
	private:
		// klase kurâ tiek glabâta informâcija par virsotnçm
		ref class Virsotne {
		public:
			int id, cipars, limenis;
			// saraksts kurâ glabâ virsotòu pçcteèus
			List<Virsotne^>^ children;
			// katrai virsotnei glabâ savu id, paðreizçjo ciparu, lîmeni un sarakstu ar tâs pçcteèiem
			Virsotne(int id, int cipars, int limenis) {
				this->id = id;
				this->cipars = cipars;
				this->limenis = limenis;
				this->children = gcnew List<Virsotne^>();
			}
		};
	// klase kurâ tiek veidots spçles koks
	ref class Speles_Koks {
	public:
		// root tiek izveidota kâ saknes virsotne
		Virsotne^ root;
		// izveido saknes virsotni un izsauc funkciju, ar ko ìenerçt koku
		Speles_Koks(int startValue, bool playerStarts) {
			if (playerStarts) {
				root = gcnew Virsotne(1, startValue, 0);
			}
			else {
				root = gcnew Virsotne(1, startValue - 1 , 0); //kaut kâdçï -1 salabo algoritmu, bez tâ viss nestrâdâ...
			}
			//genere koku no tâs saknes lîdz maksimâlajam dziïumam
			generateTree(root);
		}
		// veido spçles koku
		void generateTree(Virsotne^ virsotne) {
			// veido visus iespejamos pçcteèus, pieskaitot ciparam 3, 4 un 5
			for (int i = 3; i <= 5; i++) {
				int childValue = virsotne->cipars + i;
				if (childValue > 30 || childValue == 27) continue;  //lai AI nemeginatu dabut virs 30, un izvairitos no 27 (jo tas 100% zaude next turn)
				// pievieno pçcteèus virsotnei un ìenerç tâlâk koku. (Count + 2 izmanto, lai izvairîtos no identiskiem ID)
				Virsotne^ childNode = gcnew Virsotne(virsotne->children->Count + 2, childValue, virsotne->cipars + 1);
				virsotne->children->Add(childNode);
				generateTree(childNode);
			}
		}
		// Minimaksa algoritms, labâkâ gâjiena noteikðanai
		int minmax(Virsotne^ virsotne, bool maksimizetajs) {
			if (virsotne->children->Count == 0) {  // ja strupcela viersotne tad
				if (virsotne->cipars == 30) return 100; // uzvara = vertiba 100
				else if (virsotne->cipars == 28 || virsotne->cipars == 29) return -100; // zaude = vertiba -100
			}
			if (maksimizetajs) { // ja makzimizçtâjs, tad...
				int bestValue = -100; // kâ labâko vçrtîbu izvçlas -100 un meklç lielâkas vçrtîbas
				for each (Virsotne ^ child in virsotne->children) { //izskata visus virsotnes pectecus
					int value = minmax(child, false); // izsauc minmax ar false, jo nakosais gajiens ir minimizetaja
					bestValue = Math::Max(bestValue, value); // kâ labâko vçrtîbu izvçlas lielâko no -100 un jauno atrasto value
				}
				return bestValue;
			}
			else { // dara to paðu ko iepriekðçjais algoritms, bet meklçjot mazâko vçrtîbu
				int worstValue = 100;
				for each (Virsotne ^ child in virsotne->children) {
					int value = minmax(child, true);
					worstValue = Math::Min(worstValue, value);
				}
				return worstValue;
			}
		}
	};

};
}

