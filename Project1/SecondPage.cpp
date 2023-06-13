#include "SecondPage.h"
#include "MainForm.h"

System::Void Project1::SecondPage::nextSlideButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    safe_cast<MainForm^>(this->Parent)->LoadCalcPage();
    return System::Void();
}
