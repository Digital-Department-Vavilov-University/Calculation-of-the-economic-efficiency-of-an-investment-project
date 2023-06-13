#include "MainForm.h"
#include "TitlePage.h"
#include "SecondPage.h"
#include "CalcPage.h"

void Project1::MainForm::LoadSecondPage()
{
    SecondPage^ secondPage = gcnew SecondPage();
    secondPage->Dock = DockStyle::Fill;
    this->Controls->Clear();
    this->Controls->Add(secondPage);
}

void Project1::MainForm::LoadCalcPage()
{
    CalcPage^ calcPage = gcnew CalcPage();
    calcPage->Dock = DockStyle::Fill;
    this->Controls->Clear();
    this->Controls->Add(calcPage);
}

System::Void Project1::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    TitlePage^ firstPage = gcnew TitlePage();
    firstPage->Dock = DockStyle::Fill;
    this->Controls->Add(firstPage);
    return System::Void();
}
