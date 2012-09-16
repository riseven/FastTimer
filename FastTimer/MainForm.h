#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FastTimer {

	/// <summary>
	/// Resumen de MainForm
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Boton45;
	protected: 

	private: System::Windows::Forms::Label^  labelTiempo;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Boton45 = (gcnew System::Windows::Forms::Button());
			this->labelTiempo = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Boton45
			// 
			this->Boton45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Boton45->Location = System::Drawing::Point(12, 12);
			this->Boton45->Name = L"Boton45";
			this->Boton45->Size = System::Drawing::Size(79, 76);
			this->Boton45->TabIndex = 0;
			this->Boton45->Text = L"45";
			this->Boton45->UseVisualStyleBackColor = true;
			this->Boton45->Click += gcnew System::EventHandler(this, &MainForm::BotonStart_Click);
			// 
			// labelTiempo
			// 
			this->labelTiempo->AutoSize = true;
			this->labelTiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelTiempo->Location = System::Drawing::Point(158, 145);
			this->labelTiempo->Name = L"labelTiempo";
			this->labelTiempo->Size = System::Drawing::Size(68, 73);
			this->labelTiempo->TabIndex = 1;
			this->labelTiempo->Text = L"0";
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MainForm::timer_Tick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 76);
			this->button1->TabIndex = 2;
			this->button1->Text = L"60";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(182, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 76);
			this->button2->TabIndex = 3;
			this->button2->Text = L"120";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(278, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 76);
			this->button3->TabIndex = 4;
			this->button3->Text = L"360";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 264);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelTiempo);
			this->Controls->Add(this->Boton45);
			this->Name = L"MainForm";
			this->Text = L"Fast Timer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int tiempo = int::Parse(this->labelTiempo->Text);
				 if ( tiempo > 0 ){
					 tiempo--;
				 }

				 static bool t = true ;
				 if ( tiempo == 0 ){
					 // Alarma
					 //this->Focus();
					 if ( t )
					 {
						 t = false;
						 //this->Activate();
					 }
				 } else {
					 t = true;
				 }
				 labelTiempo->Text = tiempo.ToString();
			 }
	private: System::Void BotonStart_Click(System::Object^  sender, System::EventArgs^  e) {
				 labelTiempo->Text = "45";
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 labelTiempo->Text = "60";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 labelTiempo->Text = "120";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 labelTiempo->Text = "360";
		 }
};
}
