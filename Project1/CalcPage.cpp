#include "CalcPage.h"

bool ValidateKey(System::Object^ control, wchar_t c) {
    if (!Char::IsControl(c) && !Char::IsDigit(c) &&
        (c != '.'))
    {
        return false;
    }

    if ((c == '.') && safe_cast<TextBox^>(control)->Text->IndexOf('.') > -1)
    {
        return false;
    }

    return true;
}

System::Void Project1::CalcPage::textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (!ValidateKey(sender, e->KeyChar)) {
        e->Handled = true;
    }
}

System::Void Project1::CalcPage::textbox_Leave(System::Object^ sender, System::EventArgs^ e)
{
    TextBox^ textBox = safe_cast<TextBox^>(sender);
    try {
        Double::Parse(textBox->Text);
    }
    catch (Exception^ e) {
        textBox->Text = "0";
        MessageBox::Show("Введите верное числовое значение");
    }

    return System::Void();
}

System::Void Project1::CalcPage::textboxDiscount_Leave(System::Object^ sender, System::EventArgs^ e)
{
    TextBox^ textBox = safe_cast<TextBox^>(sender);
    try {
        double val = Double::Parse(textBox->Text);

        if (val > 100) {
            textBox->Text = "100";
            MessageBox::Show("Введите верное числовое значение в диапазоне 0-100");
        }
    }
    catch (Exception^ e) {
        textBox->Text = "0";
        MessageBox::Show("Введите верное числовое значение");
    }

    return System::Void();
}

System::Void Project1::CalcPage::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    double fullMoney = Double::Parse(this->fullMoneyData->Text);
    double result = Double::MaxValue;
    if (fullMoney > 0) {
        double discountModifier = (100 - Double::Parse(this->discountData->Text)) / 100;
        double year1 = Double::Parse(this->year1Data->Text) * discountModifier;
        double year2 = Double::Parse(this->year2Data->Text) * discountModifier;
        double year3 = Double::Parse(this->year3Data->Text) * discountModifier;
        double year4 = Double::Parse(this->year4Data->Text) * discountModifier;
        double year5 = Double::Parse(this->year5Data->Text) * discountModifier;

        double yearSum = year1 + year2 + year3 + year4 + year5;

        result = (yearSum - fullMoney) / fullMoney;
    }

    if (result >= 1) {
        this->validityText->Text = "Инвестиционный проект является\nэкономически эффективным и\nего финансирование может быть оправданным.";
        this->validityText->ForeColor = Color::Green;
    }
    else {
        this->validityText->Text = "Инвестиционный проект является\nэкономически неэффективным и\nего финансирование не будет оправданным.";
        this->validityText->ForeColor = Color::Red;
    }
}
