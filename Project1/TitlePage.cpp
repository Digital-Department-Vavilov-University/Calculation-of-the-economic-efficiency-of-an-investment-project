#include "TitlePage.h"
#include "MainForm.h"

System::Void Project1::TitlePage::nextSlideButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    safe_cast<MainForm^>(this->Parent)->LoadSecondPage();
    return System::Void();
}
