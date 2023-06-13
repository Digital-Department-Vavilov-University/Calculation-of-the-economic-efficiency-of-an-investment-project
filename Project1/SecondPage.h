#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// —водка дл€ SecondPage
	/// </summary>
	public ref class SecondPage : public System::Windows::Forms::UserControl
	{
	public:
		SecondPage(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SecondPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ nextSlideButton;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecondPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->nextSlideButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(10);
			this->label1->Size = System::Drawing::Size(1382, 900);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->nextSlideButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(1400, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 900);
			this->panel1->TabIndex = 3;
			// 
			// nextSlideButton
			// 
			this->nextSlideButton->BackColor = System::Drawing::Color::Transparent;
			this->nextSlideButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextSlideButton.BackgroundImage")));
			this->nextSlideButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextSlideButton->FlatAppearance->BorderSize = 0;
			this->nextSlideButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->nextSlideButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->nextSlideButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextSlideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextSlideButton->Location = System::Drawing::Point(3, 416);
			this->nextSlideButton->Name = L"nextSlideButton";
			this->nextSlideButton->Size = System::Drawing::Size(80, 80);
			this->nextSlideButton->TabIndex = 2;
			this->nextSlideButton->UseVisualStyleBackColor = false;
			this->nextSlideButton->Click += gcnew System::EventHandler(this, &SecondPage::nextSlideButton_Click);
			// 
			// SecondPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(1600, 900);
			this->Name = L"SecondPage";
			this->Size = System::Drawing::Size(1600, 900);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void nextSlideButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
