#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Сводка для CalcPage
	/// </summary>
	public ref class CalcPage : public System::Windows::Forms::UserControl
	{
	public:
		CalcPage(void)
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
		~CalcPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ year4Data;

	private: System::Windows::Forms::TextBox^ year5Data;
	private: System::Windows::Forms::TextBox^ discountData;

	private: System::Windows::Forms::TextBox^ year1Data;
	private: System::Windows::Forms::TextBox^ fullMoneyData;





	private: System::Windows::Forms::TextBox^ year2Data;
	private: System::Windows::Forms::TextBox^ year3Data;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ validPanel;
	private: System::Windows::Forms::Label^ validityText;





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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->year1Data = (gcnew System::Windows::Forms::TextBox());
			this->year2Data = (gcnew System::Windows::Forms::TextBox());
			this->year3Data = (gcnew System::Windows::Forms::TextBox());
			this->year4Data = (gcnew System::Windows::Forms::TextBox());
			this->year5Data = (gcnew System::Windows::Forms::TextBox());
			this->discountData = (gcnew System::Windows::Forms::TextBox());
			this->fullMoneyData = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->validPanel = (gcnew System::Windows::Forms::Panel());
			this->validityText = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->validPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1900, 600);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1894, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Расчет экономической эффективности инвестиционного проекта\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->label6, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->year1Data, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->year2Data, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->year3Data, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->year4Data, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->year5Data, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->discountData, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->fullMoneyData, 1, 7);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 123);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 8;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1894, 354);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(352, 44);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введите денежные потоки проекта:\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(418, 46);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Введите значение первоначальных затрат:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 44);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Год 1:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(465, 44);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Введите значение дисконтного коэффициента:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 44);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Год 2:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 44);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Год 5:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 44);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Год 3:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Left;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 176);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 44);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Год 4:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// year1Data
			// 
			this->year1Data->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->year1Data->Location = System::Drawing::Point(571, 55);
			this->year1Data->Name = L"year1Data";
			this->year1Data->Size = System::Drawing::Size(200, 22);
			this->year1Data->TabIndex = 8;
			this->year1Data->Text = L"0";
			this->year1Data->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->year1Data->Leave += gcnew System::EventHandler(this, &CalcPage::textbox_Leave);
			// 
			// year2Data
			// 
			this->year2Data->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->year2Data->Location = System::Drawing::Point(571, 99);
			this->year2Data->Name = L"year2Data";
			this->year2Data->Size = System::Drawing::Size(200, 22);
			this->year2Data->TabIndex = 9;
			this->year2Data->Text = L"0";
			this->year2Data->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->year2Data->Leave += gcnew System::EventHandler(this, &CalcPage::textbox_Leave);
			// 
			// year3Data
			// 
			this->year3Data->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->year3Data->Location = System::Drawing::Point(571, 143);
			this->year3Data->Name = L"year3Data";
			this->year3Data->Size = System::Drawing::Size(200, 22);
			this->year3Data->TabIndex = 10;
			this->year3Data->Text = L"0";
			this->year3Data->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->year3Data->Leave += gcnew System::EventHandler(this, &CalcPage::textbox_Leave);
			// 
			// year4Data
			// 
			this->year4Data->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->year4Data->Location = System::Drawing::Point(571, 187);
			this->year4Data->Name = L"year4Data";
			this->year4Data->Size = System::Drawing::Size(200, 22);
			this->year4Data->TabIndex = 11;
			this->year4Data->Text = L"0";
			this->year4Data->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->year4Data->Leave += gcnew System::EventHandler(this, &CalcPage::textbox_Leave);
			// 
			// year5Data
			// 
			this->year5Data->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->year5Data->Location = System::Drawing::Point(571, 231);
			this->year5Data->Name = L"year5Data";
			this->year5Data->Size = System::Drawing::Size(200, 22);
			this->year5Data->TabIndex = 12;
			this->year5Data->Text = L"0";
			this->year5Data->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->year5Data->Leave += gcnew System::EventHandler(this, &CalcPage::textbox_Leave);
			// 
			// discountData
			// 
			this->discountData->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->discountData->Location = System::Drawing::Point(571, 275);
			this->discountData->Name = L"discountData";
			this->discountData->Size = System::Drawing::Size(200, 22);
			this->discountData->TabIndex = 13;
			this->discountData->Text = L"0";
			this->discountData->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->discountData->Leave += gcnew System::EventHandler(this, &CalcPage::textboxDiscount_Leave);
			// 
			// fullMoneyData
			// 
			this->fullMoneyData->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fullMoneyData->Location = System::Drawing::Point(571, 320);
			this->fullMoneyData->Name = L"fullMoneyData";
			this->fullMoneyData->Size = System::Drawing::Size(200, 22);
			this->fullMoneyData->TabIndex = 14;
			this->fullMoneyData->Text = L"0";
			this->fullMoneyData->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalcPage::textbox_KeyPress);
			this->fullMoneyData->Leave += gcnew System::EventHandler(this, &CalcPage::textbox_Leave);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->validPanel, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 483);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1894, 114);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 8;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(223, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(500, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CalcPage::button1_Click);
			// 
			// validPanel
			// 
			this->validPanel->BackColor = System::Drawing::Color::White;
			this->validPanel->Controls->Add(this->validityText);
			this->validPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->validPanel->Location = System::Drawing::Point(950, 3);
			this->validPanel->Name = L"validPanel";
			this->validPanel->Size = System::Drawing::Size(941, 108);
			this->validPanel->TabIndex = 1;
			// 
			// validityText
			// 
			this->validityText->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->validityText->BackColor = System::Drawing::Color::Transparent;
			this->validityText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->validityText->ForeColor = System::Drawing::Color::Green;
			this->validityText->Location = System::Drawing::Point(0, 4);
			this->validityText->Name = L"validityText";
			this->validityText->Size = System::Drawing::Size(938, 146);
			this->validityText->TabIndex = 0;
			this->validityText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CalcPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"CalcPage";
			this->Size = System::Drawing::Size(1900, 600);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->validPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void textbox_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textboxDiscount_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
