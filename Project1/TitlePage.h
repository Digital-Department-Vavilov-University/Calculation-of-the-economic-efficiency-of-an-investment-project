#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// —водка дл€ TitlePage
	/// </summary>
	public ref class TitlePage : public System::Windows::Forms::UserControl
	{
	public:
		TitlePage(void)
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
		~TitlePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ nextSlideButton;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TitlePage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nextSlideButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(10);
			this->label1->Size = System::Drawing::Size(519, 600);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// nextSlideButton
			// 
			this->nextSlideButton->BackColor = System::Drawing::Color::Transparent;
			this->nextSlideButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextSlideButton.BackgroundImage")));
			this->nextSlideButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextSlideButton->FlatAppearance->BorderSize = 0;
			this->nextSlideButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextSlideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextSlideButton->Location = System::Drawing::Point(21, 431);
			this->nextSlideButton->Name = L"nextSlideButton";
			this->nextSlideButton->Size = System::Drawing::Size(80, 80);
			this->nextSlideButton->TabIndex = 1;
			this->nextSlideButton->UseVisualStyleBackColor = false;
			this->nextSlideButton->Click += gcnew System::EventHandler(this, &TitlePage::nextSlideButton_Click);
			// 
			// TitlePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->nextSlideButton);
			this->Controls->Add(this->label1);
			this->Name = L"TitlePage";
			this->Size = System::Drawing::Size(900, 600);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void nextSlideButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
