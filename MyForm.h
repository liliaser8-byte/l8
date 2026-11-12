#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

namespace l8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(673, 503);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(665, 474);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(190, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(212, 371);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Підрахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(665, 474);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 368);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 44);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"size row";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"size col";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(163, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(163, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(73, 122);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(447, 193);
			this->dataGridView2->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 503);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// створення масиву та заповнення його випадковими числами
		int size = 10;
		int* arr = new int[size];
		int countPositive = 0; // лічильник для додатних елементів

		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 21 - 10; // генерування випадкових чисел від -10 до 10
		}

		// Заповнення DataGridView даними з масиву arr та підрахунок додатних чисел
		for (int i = 0; i < size; i++) {
			// додавання рядка з елементом масиву у DataGridView
			dataGridView1->Rows->Add(arr[i].ToString());

			// перевірка: якщо елемент масиву більший за 0
			if (arr[i] > 0) {
				countPositive++;
			}
		}

		// виведення результату за допомогою MessageBox
		String^ message = String::Format("Кількість додатних елементів: {0}", countPositive);
		MessageBox::Show(message);

		// звільнення пам'яті масиву
		delete[] arr;
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->ColumnCount = 1;
	dataGridView1->Columns[0]->Name = "Value";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Зчитування кількості рядків та стовпців з текстових полів
	int rows = Convert::ToInt32(textBox1->Text); //
	int cols = Convert::ToInt32(textBox2->Text); //

	// Створення двовимірного динамічного масиву
	std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols)); //
	Random^ rand = gcnew Random(); //

	// Очищення DataGridView перед новим виведенням
	dataGridView2->Rows->Clear(); //[cite: 6]
	dataGridView2->Columns->Clear(); //[cite: 6]

	// Створення колонок для DataGridView
	for (int j = 0; j < cols; j++) {
		dataGridView2->Columns->Add("Column" + j, "Column " + (j + 1)); //[cite: 6]
	}

	// Змінна для зберігання мінімального елемента (початкове значення - максимум з діапазону)
	int minElement = 100;

	// 1. Генерація матриці та пошук мінімального елемента
	for (int i = 0; i < rows; i++)
	{
		std::vector<int> row; // Створення нового рядка[cite: 6]
		for (int j = 0; j < cols; j++)
		{
			int num = rand->Next(1, 100); // генеруємо число від 1 до 99[cite: 6]
			row.push_back(num); // додаємо у рядок[cite: 6]

			// Перевіряємо, чи є поточне число меншим за знайдений раніше мінімум
			if (num < minElement) {
				minElement = num;
			}
		}
		matrix[i] = row; // Записати рядок у матрицю[cite: 6]
	}

	// 2. Домноження елементів на мінімальний та виведення у DataGridView
	for (int i = 0; i < rows; i++)
	{
		// Додавання порожнього рядка до DataGridView розміром cols
		dataGridView2->Rows->Add(gcnew array<Object^>(cols)); //[cite: 6]

		for (int j = 0; j < cols; j++)
		{
			// Домножуємо кожен елемент на знайдений мінімум
			matrix[i][j] = matrix[i][j] * minElement;

			// Записуємо нове значення у комірку таблиці
			dataGridView2->Rows[i]->Cells[j]->Value = matrix[i][j]; //[cite: 6]
		}
	}

	// Виведення повідомлення з інформацією про знайдений мінімальний елемент
	MessageBox::Show("Мінімальний знайдений елемент (до множення): " + minElement.ToString(), "Результат"); //[cite: 6]
}
};
}
