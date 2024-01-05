#pragma once
#include "cmath"  //вычисление степеней
#include "math.h" //вычисление корней

namespace Calca
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Сводка для MyForm
/// </summary>
public
ref class MyForm : public System::Windows::Forms::Form
{
  public:
    MyForm(void)
    {
        InitializeComponent();
        //
        // TODO: добавьте код конструктора
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

  private:
    System::Windows::Forms::Button ^ button_exit;

  private:
    System::Windows::Forms::Label ^ result_label;

  private:
    System::Windows::Forms::Button ^ btn_sqrt;

  private:
    System::Windows::Forms::Button ^ btn_plus_minus;

  private:
    System::Windows::Forms::Button ^ btn_ca;

  private:
    System::Windows::Forms::Button ^ btn_percent;

  private:
    System::Windows::Forms::Button ^ btn_div;

  private:
    System::Windows::Forms::Button ^ btn_deg;

  private:
    System::Windows::Forms::Button ^ btn_mult;

  private:
    System::Windows::Forms::Button ^ btn_sub;

  private:
    System::Windows::Forms::Button ^ btn_eq;

  private:
    System::Windows::Forms::Button ^ btn_add;

  private:
    System::Windows::Forms::Button ^ btn_comma;

  private:
    System::Windows::Forms::Button ^ btn_fullsc;

  private:
    System::Windows::Forms::Button ^ btn_turn;

  private:
    float first_num;

  private:
    char user_action = ' ';

  private:
    bool is_equal = false;

  private:
    bool is_fullsc = false;

  private:
    System::Windows::Forms::Button ^ btn_7;

  private:
    System::Windows::Forms::Button ^ btn_8;

  private:
    System::Windows::Forms::Button ^ btn_9;

  private:
    System::Windows::Forms::Button ^ btn_6;

  private:
    System::Windows::Forms::Button ^ btn_5;

  private:
    System::Windows::Forms::Button ^ btn_4;

  private:
    System::Windows::Forms::Button ^ btn_3;

  private:
    System::Windows::Forms::Button ^ btn_2;

  private:
    System::Windows::Forms::Button ^ btn_1;

  private:
    System::Windows::Forms::Button ^ btn_0;

  protected:
  protected:
  private:
    /// <summary>
    /// Обязательная переменная конструктора.
    /// </summary>
    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Требуемый метод для поддержки конструктора — не изменяйте
    /// содержимое этого метода с помощью редактора кода.
    /// </summary>
    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources =
            (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
        this->button_exit = (gcnew System::Windows::Forms::Button());
        this->result_label = (gcnew System::Windows::Forms::Label());
        this->btn_sqrt = (gcnew System::Windows::Forms::Button());
        this->btn_plus_minus = (gcnew System::Windows::Forms::Button());
        this->btn_ca = (gcnew System::Windows::Forms::Button());
        this->btn_percent = (gcnew System::Windows::Forms::Button());
        this->btn_div = (gcnew System::Windows::Forms::Button());
        this->btn_deg = (gcnew System::Windows::Forms::Button());
        this->btn_mult = (gcnew System::Windows::Forms::Button());
        this->btn_sub = (gcnew System::Windows::Forms::Button());
        this->btn_eq = (gcnew System::Windows::Forms::Button());
        this->btn_add = (gcnew System::Windows::Forms::Button());
        this->btn_comma = (gcnew System::Windows::Forms::Button());
        this->btn_fullsc = (gcnew System::Windows::Forms::Button());
        this->btn_turn = (gcnew System::Windows::Forms::Button());
        this->btn_7 = (gcnew System::Windows::Forms::Button());
        this->btn_8 = (gcnew System::Windows::Forms::Button());
        this->btn_9 = (gcnew System::Windows::Forms::Button());
        this->btn_6 = (gcnew System::Windows::Forms::Button());
        this->btn_5 = (gcnew System::Windows::Forms::Button());
        this->btn_4 = (gcnew System::Windows::Forms::Button());
        this->btn_3 = (gcnew System::Windows::Forms::Button());
        this->btn_2 = (gcnew System::Windows::Forms::Button());
        this->btn_1 = (gcnew System::Windows::Forms::Button());
        this->btn_0 = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        //
        // button_exit
        //
        this->button_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
        this->button_exit->FlatAppearance->BorderSize = 0;
        this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->button_exit->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->button_exit->ForeColor = System::Drawing::Color::White;
        this->button_exit->Location = System::Drawing::Point(252, 1);
        this->button_exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->button_exit->Name = L"button_exit";
        this->button_exit->Size = System::Drawing::Size(47, 31);
        this->button_exit->TabIndex = 0;
        this->button_exit->Text = L"x";
        this->button_exit->UseVisualStyleBackColor = true;
        this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
        //
        // result_label
        //
        this->result_label->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(46)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(46)));
        this->result_label->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->result_label->ForeColor = System::Drawing::Color::White;
        this->result_label->Location = System::Drawing::Point(12, 49);
        this->result_label->Name = L"result_label";
        this->result_label->Size = System::Drawing::Size(276, 66);
        this->result_label->TabIndex = 1;
        this->result_label->Text = L"0";
        this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        //
        // btn_sqrt
        //
        this->btn_sqrt->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(99)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(158)));
        this->btn_sqrt->FlatAppearance->BorderSize = 0;
        this->btn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_sqrt->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_sqrt->ForeColor = System::Drawing::Color::Black;
        this->btn_sqrt->Location = System::Drawing::Point(236, 255);
        this->btn_sqrt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_sqrt->Name = L"btn_sqrt";
        this->btn_sqrt->Size = System::Drawing::Size(51, 34);
        this->btn_sqrt->TabIndex = 11;
        this->btn_sqrt->Text = L"√";
        this->btn_sqrt->UseVisualStyleBackColor = false;
        this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
        //
        // btn_plus_minus
        //
        this->btn_plus_minus->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(99)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(158)));
        this->btn_plus_minus->FlatAppearance->BorderSize = 0;
        this->btn_plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_plus_minus->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_plus_minus->ForeColor = System::Drawing::Color::Black;
        this->btn_plus_minus->Location = System::Drawing::Point(236, 214);
        this->btn_plus_minus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_plus_minus->Name = L"btn_plus_minus";
        this->btn_plus_minus->Size = System::Drawing::Size(51, 34);
        this->btn_plus_minus->TabIndex = 10;
        this->btn_plus_minus->Text = L"±";
        this->btn_plus_minus->UseVisualStyleBackColor = false;
        this->btn_plus_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_minus_Click);
        //
        // btn_ca
        //
        this->btn_ca->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(130)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(130)));
        this->btn_ca->FlatAppearance->BorderSize = 0;
        this->btn_ca->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_ca->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_ca->ForeColor = System::Drawing::Color::Black;
        this->btn_ca->Location = System::Drawing::Point(12, 174);
        this->btn_ca->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_ca->Name = L"btn_ca";
        this->btn_ca->Size = System::Drawing::Size(51, 34);
        this->btn_ca->TabIndex = 9;
        this->btn_ca->Text = L"CA";
        this->btn_ca->UseVisualStyleBackColor = false;
        this->btn_ca->Click += gcnew System::EventHandler(this, &MyForm::btn_ca_Click);
        //
        // btn_percent
        //
        this->btn_percent->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(99)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(158)));
        this->btn_percent->FlatAppearance->BorderSize = 0;
        this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_percent->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_percent->ForeColor = System::Drawing::Color::Black;
        this->btn_percent->Location = System::Drawing::Point(236, 295);
        this->btn_percent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_percent->Name = L"btn_percent";
        this->btn_percent->Size = System::Drawing::Size(51, 34);
        this->btn_percent->TabIndex = 16;
        this->btn_percent->Text = L"%";
        this->btn_percent->UseVisualStyleBackColor = false;
        this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
        //
        // btn_div
        //
        this->btn_div->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(219)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(73)));
        this->btn_div->FlatAppearance->BorderSize = 0;
        this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_div->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_div->ForeColor = System::Drawing::Color::Black;
        this->btn_div->Location = System::Drawing::Point(180, 214);
        this->btn_div->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_div->Name = L"btn_div";
        this->btn_div->Size = System::Drawing::Size(51, 34);
        this->btn_div->TabIndex = 15;
        this->btn_div->Text = L"/";
        this->btn_div->UseVisualStyleBackColor = false;
        this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
        //
        // btn_deg
        //
        this->btn_deg->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(99)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(158)));
        this->btn_deg->FlatAppearance->BorderSize = 0;
        this->btn_deg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_deg->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_deg->ForeColor = System::Drawing::Color::Black;
        this->btn_deg->Location = System::Drawing::Point(236, 337);
        this->btn_deg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_deg->Name = L"btn_deg";
        this->btn_deg->Size = System::Drawing::Size(51, 34);
        this->btn_deg->TabIndex = 21;
        this->btn_deg->Text = L"^";
        this->btn_deg->UseVisualStyleBackColor = false;
        this->btn_deg->Click += gcnew System::EventHandler(this, &MyForm::btn_deg_Click);
        //
        // btn_mult
        //
        this->btn_mult->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(219)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(73)));
        this->btn_mult->FlatAppearance->BorderSize = 0;
        this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_mult->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_mult->ForeColor = System::Drawing::Color::Black;
        this->btn_mult->Location = System::Drawing::Point(180, 255);
        this->btn_mult->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_mult->Name = L"btn_mult";
        this->btn_mult->Size = System::Drawing::Size(51, 34);
        this->btn_mult->TabIndex = 20;
        this->btn_mult->Text = L"*";
        this->btn_mult->UseVisualStyleBackColor = false;
        this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
        //
        // btn_sub
        //
        this->btn_sub->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(219)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(73)));
        this->btn_sub->FlatAppearance->BorderSize = 0;
        this->btn_sub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_sub->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_sub->ForeColor = System::Drawing::Color::Black;
        this->btn_sub->Location = System::Drawing::Point(180, 295);
        this->btn_sub->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_sub->Name = L"btn_sub";
        this->btn_sub->Size = System::Drawing::Size(51, 34);
        this->btn_sub->TabIndex = 25;
        this->btn_sub->Text = L"-";
        this->btn_sub->UseVisualStyleBackColor = false;
        this->btn_sub->Click += gcnew System::EventHandler(this, &MyForm::btn_sub_Click);
        //
        // btn_eq
        //
        this->btn_eq->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(227)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(78)));
        this->btn_eq->FlatAppearance->BorderSize = 0;
        this->btn_eq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_eq->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_eq->ForeColor = System::Drawing::Color::Black;
        this->btn_eq->Location = System::Drawing::Point(180, 174);
        this->btn_eq->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_eq->Name = L"btn_eq";
        this->btn_eq->Size = System::Drawing::Size(107, 34);
        this->btn_eq->TabIndex = 31;
        this->btn_eq->Text = L"=";
        this->btn_eq->UseVisualStyleBackColor = false;
        this->btn_eq->Click += gcnew System::EventHandler(this, &MyForm::btn_eq_Click);
        //
        // btn_add
        //
        this->btn_add->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(219)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(73)));
        this->btn_add->FlatAppearance->BorderSize = 0;
        this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_add->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_add->ForeColor = System::Drawing::Color::Black;
        this->btn_add->Location = System::Drawing::Point(180, 337);
        this->btn_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_add->Name = L"btn_add";
        this->btn_add->Size = System::Drawing::Size(51, 34);
        this->btn_add->TabIndex = 30;
        this->btn_add->Text = L"+";
        this->btn_add->UseVisualStyleBackColor = false;
        this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
        //
        // btn_comma
        //
        this->btn_comma->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_comma->FlatAppearance->BorderSize = 0;
        this->btn_comma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_comma->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_comma->ForeColor = System::Drawing::Color::Black;
        this->btn_comma->Location = System::Drawing::Point(124, 337);
        this->btn_comma->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_comma->Name = L"btn_comma";
        this->btn_comma->Size = System::Drawing::Size(51, 34);
        this->btn_comma->TabIndex = 29;
        this->btn_comma->Text = L",";
        this->btn_comma->UseVisualStyleBackColor = false;
        this->btn_comma->Click += gcnew System::EventHandler(this, &MyForm::btn_comma_Click);
        //
        // btn_fullsc
        //
        this->btn_fullsc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
        this->btn_fullsc->FlatAppearance->BorderSize = 0;
        this->btn_fullsc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_fullsc->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_fullsc->ForeColor = System::Drawing::Color::White;
        this->btn_fullsc->Location = System::Drawing::Point(200, 1);
        this->btn_fullsc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_fullsc->Name = L"btn_fullsc";
        this->btn_fullsc->Size = System::Drawing::Size(47, 31);
        this->btn_fullsc->TabIndex = 32;
        this->btn_fullsc->Text = L"□";
        this->btn_fullsc->UseVisualStyleBackColor = true;
        this->btn_fullsc->Click += gcnew System::EventHandler(this, &MyForm::btn_fullsc_Click);
        //
        // btn_turn
        //
        this->btn_turn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
        this->btn_turn->FlatAppearance->BorderSize = 0;
        this->btn_turn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_turn->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_turn->ForeColor = System::Drawing::Color::White;
        this->btn_turn->Location = System::Drawing::Point(148, 1);
        this->btn_turn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_turn->Name = L"btn_turn";
        this->btn_turn->RightToLeft = System::Windows::Forms::RightToLeft::No;
        this->btn_turn->Size = System::Drawing::Size(47, 31);
        this->btn_turn->TabIndex = 33;
        this->btn_turn->Text = L"─";
        this->btn_turn->UseVisualStyleBackColor = true;
        this->btn_turn->Click += gcnew System::EventHandler(this, &MyForm::btn_turn_Click);
        //
        // btn_7
        //
        this->btn_7->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_7->FlatAppearance->BorderSize = 0;
        this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_7->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_7->ForeColor = System::Drawing::Color::Black;
        this->btn_7->Location = System::Drawing::Point(12, 214);
        this->btn_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_7->Name = L"btn_7";
        this->btn_7->Size = System::Drawing::Size(51, 34);
        this->btn_7->TabIndex = 34;
        this->btn_7->Text = L"7";
        this->btn_7->UseVisualStyleBackColor = false;
        this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_8
        //
        this->btn_8->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_8->FlatAppearance->BorderSize = 0;
        this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_8->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_8->ForeColor = System::Drawing::Color::Black;
        this->btn_8->Location = System::Drawing::Point(68, 214);
        this->btn_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_8->Name = L"btn_8";
        this->btn_8->Size = System::Drawing::Size(51, 34);
        this->btn_8->TabIndex = 35;
        this->btn_8->Text = L"8";
        this->btn_8->UseVisualStyleBackColor = false;
        this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_9
        //
        this->btn_9->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_9->FlatAppearance->BorderSize = 0;
        this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_9->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_9->ForeColor = System::Drawing::Color::Black;
        this->btn_9->Location = System::Drawing::Point(124, 214);
        this->btn_9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_9->Name = L"btn_9";
        this->btn_9->Size = System::Drawing::Size(51, 34);
        this->btn_9->TabIndex = 36;
        this->btn_9->Text = L"9";
        this->btn_9->UseVisualStyleBackColor = false;
        this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_6
        //
        this->btn_6->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_6->FlatAppearance->BorderSize = 0;
        this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_6->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_6->ForeColor = System::Drawing::Color::Black;
        this->btn_6->Location = System::Drawing::Point(124, 255);
        this->btn_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_6->Name = L"btn_6";
        this->btn_6->Size = System::Drawing::Size(51, 34);
        this->btn_6->TabIndex = 39;
        this->btn_6->Text = L"6";
        this->btn_6->UseVisualStyleBackColor = false;
        this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_5
        //
        this->btn_5->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_5->FlatAppearance->BorderSize = 0;
        this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_5->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_5->ForeColor = System::Drawing::Color::Black;
        this->btn_5->Location = System::Drawing::Point(68, 255);
        this->btn_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_5->Name = L"btn_5";
        this->btn_5->Size = System::Drawing::Size(51, 34);
        this->btn_5->TabIndex = 38;
        this->btn_5->Text = L"5";
        this->btn_5->UseVisualStyleBackColor = false;
        this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_4
        //
        this->btn_4->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_4->FlatAppearance->BorderSize = 0;
        this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_4->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_4->ForeColor = System::Drawing::Color::Black;
        this->btn_4->Location = System::Drawing::Point(12, 255);
        this->btn_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_4->Name = L"btn_4";
        this->btn_4->Size = System::Drawing::Size(51, 34);
        this->btn_4->TabIndex = 37;
        this->btn_4->Text = L"4";
        this->btn_4->UseVisualStyleBackColor = false;
        this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_3
        //
        this->btn_3->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_3->FlatAppearance->BorderSize = 0;
        this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_3->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_3->ForeColor = System::Drawing::Color::Black;
        this->btn_3->Location = System::Drawing::Point(124, 295);
        this->btn_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_3->Name = L"btn_3";
        this->btn_3->Size = System::Drawing::Size(51, 34);
        this->btn_3->TabIndex = 42;
        this->btn_3->Text = L"3";
        this->btn_3->UseVisualStyleBackColor = false;
        this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_2
        //
        this->btn_2->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_2->FlatAppearance->BorderSize = 0;
        this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_2->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_2->ForeColor = System::Drawing::Color::Black;
        this->btn_2->Location = System::Drawing::Point(68, 295);
        this->btn_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_2->Name = L"btn_2";
        this->btn_2->Size = System::Drawing::Size(51, 34);
        this->btn_2->TabIndex = 41;
        this->btn_2->Text = L"2";
        this->btn_2->UseVisualStyleBackColor = false;
        this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_1
        //
        this->btn_1->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_1->FlatAppearance->BorderSize = 0;
        this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_1->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_1->ForeColor = System::Drawing::Color::Black;
        this->btn_1->Location = System::Drawing::Point(12, 295);
        this->btn_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_1->Name = L"btn_1";
        this->btn_1->Size = System::Drawing::Size(51, 34);
        this->btn_1->TabIndex = 40;
        this->btn_1->Text = L"1";
        this->btn_1->UseVisualStyleBackColor = false;
        this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // btn_0
        //
        this->btn_0->BackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)),
                                             static_cast<System::Int32>(static_cast<System::Byte>(179)));
        this->btn_0->FlatAppearance->BorderSize = 0;
        this->btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btn_0->Font =
            (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
                                         System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->btn_0->ForeColor = System::Drawing::Color::Black;
        this->btn_0->Location = System::Drawing::Point(12, 337);
        this->btn_0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->btn_0->Name = L"btn_0";
        this->btn_0->Size = System::Drawing::Size(107, 34);
        this->btn_0->TabIndex = 43;
        this->btn_0->Text = L"0";
        this->btn_0->UseVisualStyleBackColor = false;
        this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::button_number_Click);
        //
        // MyForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
                                                           static_cast<System::Int32>(static_cast<System::Byte>(66)),
                                                           static_cast<System::Int32>(static_cast<System::Byte>(66)));
        this->ClientSize = System::Drawing::Size(300, 388);
        this->Controls->Add(this->btn_0);
        this->Controls->Add(this->btn_3);
        this->Controls->Add(this->btn_2);
        this->Controls->Add(this->btn_1);
        this->Controls->Add(this->btn_6);
        this->Controls->Add(this->btn_5);
        this->Controls->Add(this->btn_4);
        this->Controls->Add(this->btn_9);
        this->Controls->Add(this->btn_8);
        this->Controls->Add(this->btn_7);
        this->Controls->Add(this->btn_turn);
        this->Controls->Add(this->btn_fullsc);
        this->Controls->Add(this->btn_eq);
        this->Controls->Add(this->btn_add);
        this->Controls->Add(this->btn_comma);
        this->Controls->Add(this->btn_sub);
        this->Controls->Add(this->btn_deg);
        this->Controls->Add(this->btn_mult);
        this->Controls->Add(this->btn_percent);
        this->Controls->Add(this->btn_div);
        this->Controls->Add(this->btn_sqrt);
        this->Controls->Add(this->btn_plus_minus);
        this->Controls->Add(this->btn_ca);
        this->Controls->Add(this->result_label);
        this->Controls->Add(this->button_exit);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
        this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
        this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
        this->Name = L"MyForm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"Calculator";
        this->ResumeLayout(false);
    }
#pragma endregion
  private:
    System::Void button_exit_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        this->Close();
    }

  private:
    System::Void button_number_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        this->result_label->ForeColor = Color::White;
        Button ^ button = safe_cast<Button ^>(sender);

        if (this->result_label->Text == "0" || is_equal)
        {
            this->result_label->Text = button->Text;
            is_equal = false;
        }
        else
            this->result_label->Text = this->result_label->Text + button->Text;
    }

  private:
    System::Void btn_add_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('+');
    }

  private:
    System::Void btn_sub_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('-');
    }

  private:
    System::Void btn_mult_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('*');
    }

  private:
    System::Void btn_div_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('/');
    }

  private:
    System::Void btn_deg_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('^');
    }

  private:
    System::Void btn_sqrt_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('√');
    }

  private:
    System::Void math_action(char action)
    {
        this->first_num = System::Convert::ToDouble(this->result_label->Text);
        this->user_action = action;
        this->result_label->Text = "0";
    }

  private:
    System::Void btn_eq_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        if (user_action == ' ')
            return;

        float second_num = System::Convert::ToDouble(this->result_label->Text);
        float res;
        switch (this->user_action)
        {
        case '+':
            res = this->first_num + second_num;
            break;
        case '-':
            res = this->first_num - second_num;
            break;
        case '*':
            res = this->first_num * second_num;
            break;
        case '%':
            res = this->first_num * second_num / 100;
            break;
        case '/':
            if (second_num == 0)
            {
                res = 0;
                this->result_label->ForeColor = Color::Red;
                MessageBox::Show(this, "Деление на ноль!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else
                res = this->first_num / second_num;
            break;
        case '^':
            res = pow(first_num, second_num);
            break;
        case '√':
            res = sqrt(first_num);
            break;
        }
        this->is_equal = true;
        this->result_label->Text = System::Convert::ToString(res);
    }

  private:
    System::Void btn_ca_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        this->result_label->Text = "0";
        this->result_label->ForeColor = Color::White;
        this->first_num = 0;
        this->user_action = ' ';
        this->is_equal = false;
    }

  private:
    System::Void btn_plus_minus_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        float num = System::Convert::ToDouble(this->result_label->Text);
        num *= -1;
        this->result_label->Text = System::Convert::ToString(num);
    }

  private:
    System::Void btn_percent_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        math_action('%');
    }

  private:
    System::Void btn_comma_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        String ^ text = this->result_label->Text;
        if (!text->Contains(","))
            this->result_label->Text = text + ",";
    }

  private:
    System::Void btn_turn_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        this->WindowState = FormWindowState::Minimized;
    }

  private:
    System::Void btn_fullsc_Click(System::Object ^ sender, System::EventArgs ^ e)
    {

        if (is_fullsc == false)
        {
            this->WindowState = FormWindowState::Maximized;
            is_fullsc = true;
        }
        else if (is_fullsc == true)
        {
            this->WindowState = FormWindowState::Normal;
            is_fullsc = false;
        }
    }
};
} // namespace Calca
