﻿//  -----------------------------------------------------------------------------------------
//   ffmpeg / avconv 出力 by rigaya
//  -----------------------------------------------------------------------------------------
//   ソースコードについて
//   ・無保証です。
//   ・本ソースコードを使用したことによるいかなる損害・トラブルについてrigayaは責任を負いません。
//   以上に了解して頂ける場合、本ソースコードの使用、複製、改変、再頒布を行って頂いて構いません。
//  -----------------------------------------------------------------------------------------

#pragma once

#include "auo_version.h"
#include "auo_settings.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace ffmpegOut {

	/// <summary>
	/// frmOtherSettings の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class frmOtherSettings : public System::Windows::Forms::Form
	{
	public:
		frmOtherSettings(void)
		{
			fos_ex_stg = new guiEx_settings(TRUE);
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~frmOtherSettings()
		{
			if (components)
			{
				delete components;
			}
			delete fos_ex_stg;
		}
	private:
		guiEx_settings *fos_ex_stg;
		static frmOtherSettings^ _instance;
	public:
		static String^ stgDir;
		static int useLastExt;

	protected: 
	private: System::Windows::Forms::Button^  fosCBCancel;
	private: System::Windows::Forms::Button^  fosCBOK;
	private: System::Windows::Forms::TextBox^  fosTXStgDir;
	private: System::Windows::Forms::Label^  fosLBStgDir;
	private: System::Windows::Forms::Button^  fosBTStgDir;










	private: System::Windows::Forms::FontDialog^  fosfontDialog;

	private: System::Windows::Forms::TabControl^  fosTabControl;
	private: System::Windows::Forms::TabPage^  fostabPageGeneral;
	private: System::Windows::Forms::ComboBox^  fosCXDefaultAudioEncoder;
	private: System::Windows::Forms::Label^  fosLBDefaultAudioEncoder;
	private: System::Windows::Forms::TabPage^  fostabPageGUI;
	private: System::Windows::Forms::CheckBox^  fosCBOutputMoreLog;
	private: System::Windows::Forms::CheckBox^  fosCBWineCompat;
	private: System::Windows::Forms::CheckBox^  fosCBRunBatMinimized;
	private: System::Windows::Forms::CheckBox^  fosCBGetRelativePath;
	private: System::Windows::Forms::Button^  fosBTSetFont;
	private: System::Windows::Forms::CheckBox^  fosCBStgEscKey;
	private: System::Windows::Forms::CheckBox^  fosCBDisableToolTip;
	private: System::Windows::Forms::CheckBox^  fosCBDisableVisualStyles;
	private: System::Windows::Forms::CheckBox^  fosCBLogDisableTransparency;
	private: System::Windows::Forms::Label^  fosLBDisableVisualStyles;
	private: System::Windows::Forms::CheckBox^  fosCBLogStartMinimized;









































	public: 

	public:
		static property frmOtherSettings^ Instance {
			frmOtherSettings^ get() {
				if (_instance == nullptr || _instance->IsDisposed)
					_instance = gcnew frmOtherSettings();
				return _instance;
			}
		}


	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->fosCBCancel = (gcnew System::Windows::Forms::Button());
			this->fosCBOK = (gcnew System::Windows::Forms::Button());
			this->fosTXStgDir = (gcnew System::Windows::Forms::TextBox());
			this->fosLBStgDir = (gcnew System::Windows::Forms::Label());
			this->fosBTStgDir = (gcnew System::Windows::Forms::Button());
			this->fosfontDialog = (gcnew System::Windows::Forms::FontDialog());
			this->fosTabControl = (gcnew System::Windows::Forms::TabControl());
			this->fostabPageGeneral = (gcnew System::Windows::Forms::TabPage());
			this->fostabPageGUI = (gcnew System::Windows::Forms::TabPage());
			this->fosCBRunBatMinimized = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBGetRelativePath = (gcnew System::Windows::Forms::CheckBox());
			this->fosBTSetFont = (gcnew System::Windows::Forms::Button());
			this->fosCBStgEscKey = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBDisableToolTip = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBDisableVisualStyles = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBLogDisableTransparency = (gcnew System::Windows::Forms::CheckBox());
			this->fosLBDisableVisualStyles = (gcnew System::Windows::Forms::Label());
			this->fosCBLogStartMinimized = (gcnew System::Windows::Forms::CheckBox());
			this->fosCXDefaultAudioEncoder = (gcnew System::Windows::Forms::ComboBox());
			this->fosLBDefaultAudioEncoder = (gcnew System::Windows::Forms::Label());
			this->fosCBOutputMoreLog = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBWineCompat = (gcnew System::Windows::Forms::CheckBox());
			this->fosTabControl->SuspendLayout();
			this->fostabPageGeneral->SuspendLayout();
			this->fostabPageGUI->SuspendLayout();
			this->SuspendLayout();
			// 
			// fosCBCancel
			// 
			this->fosCBCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fosCBCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->fosCBCancel->Location = System::Drawing::Point(171, 342);
			this->fosCBCancel->Name = L"fosCBCancel";
			this->fosCBCancel->Size = System::Drawing::Size(84, 29);
			this->fosCBCancel->TabIndex = 1;
			this->fosCBCancel->Text = L"キャンセル";
			this->fosCBCancel->UseVisualStyleBackColor = true;
			this->fosCBCancel->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosCBCancel_Click);
			// 
			// fosCBOK
			// 
			this->fosCBOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fosCBOK->Location = System::Drawing::Point(283, 342);
			this->fosCBOK->Name = L"fosCBOK";
			this->fosCBOK->Size = System::Drawing::Size(84, 29);
			this->fosCBOK->TabIndex = 2;
			this->fosCBOK->Text = L"OK";
			this->fosCBOK->UseVisualStyleBackColor = true;
			this->fosCBOK->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosCBOK_Click);
			// 
			// fosTXStgDir
			// 
			this->fosTXStgDir->Location = System::Drawing::Point(41, 35);
			this->fosTXStgDir->Name = L"fosTXStgDir";
			this->fosTXStgDir->Size = System::Drawing::Size(294, 23);
			this->fosTXStgDir->TabIndex = 3;
			// 
			// fosLBStgDir
			// 
			this->fosLBStgDir->AutoSize = true;
			this->fosLBStgDir->Location = System::Drawing::Point(14, 15);
			this->fosLBStgDir->Name = L"fosLBStgDir";
			this->fosLBStgDir->Size = System::Drawing::Size(123, 15);
			this->fosLBStgDir->TabIndex = 4;
			this->fosLBStgDir->Text = L"設定ファイルの保存場所";
			// 
			// fosBTStgDir
			// 
			this->fosBTStgDir->Location = System::Drawing::Point(341, 35);
			this->fosBTStgDir->Name = L"fosBTStgDir";
			this->fosBTStgDir->Size = System::Drawing::Size(35, 23);
			this->fosBTStgDir->TabIndex = 5;
			this->fosBTStgDir->Text = L"...";
			this->fosBTStgDir->UseVisualStyleBackColor = true;
			this->fosBTStgDir->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosBTStgDir_Click);
			// 
			// fosfontDialog
			// 
			this->fosfontDialog->AllowVerticalFonts = false;
			this->fosfontDialog->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fosfontDialog->FontMustExist = true;
			this->fosfontDialog->MaxSize = 9;
			this->fosfontDialog->MinSize = 9;
			this->fosfontDialog->ShowEffects = false;
			// 
			// fosTabControl
			// 
			this->fosTabControl->Controls->Add(this->fostabPageGeneral);
			this->fosTabControl->Controls->Add(this->fostabPageGUI);
			this->fosTabControl->Location = System::Drawing::Point(1, 1);
			this->fosTabControl->Name = L"fosTabControl";
			this->fosTabControl->SelectedIndex = 0;
			this->fosTabControl->Size = System::Drawing::Size(392, 336);
			this->fosTabControl->TabIndex = 17;
			// 
			// fostabPageGeneral
			// 
			this->fostabPageGeneral->Controls->Add(this->fosCXDefaultAudioEncoder);
			this->fostabPageGeneral->Controls->Add(this->fosLBDefaultAudioEncoder);
			this->fostabPageGeneral->Controls->Add(this->fosLBStgDir);
			this->fostabPageGeneral->Controls->Add(this->fosBTStgDir);
			this->fostabPageGeneral->Controls->Add(this->fosTXStgDir);
			this->fostabPageGeneral->Location = System::Drawing::Point(4, 24);
			this->fostabPageGeneral->Name = L"fostabPageGeneral";
			this->fostabPageGeneral->Padding = System::Windows::Forms::Padding(3);
			this->fostabPageGeneral->Size = System::Drawing::Size(384, 308);
			this->fostabPageGeneral->TabIndex = 0;
			this->fostabPageGeneral->Text = L"一般設定";
			this->fostabPageGeneral->UseVisualStyleBackColor = true;
			// 
			// fostabPageGUI
			// 
			this->fostabPageGUI->Controls->Add(this->fosCBOutputMoreLog);
			this->fostabPageGUI->Controls->Add(this->fosCBWineCompat);
			this->fostabPageGUI->Controls->Add(this->fosCBRunBatMinimized);
			this->fostabPageGUI->Controls->Add(this->fosCBGetRelativePath);
			this->fostabPageGUI->Controls->Add(this->fosBTSetFont);
			this->fostabPageGUI->Controls->Add(this->fosCBStgEscKey);
			this->fostabPageGUI->Controls->Add(this->fosCBDisableToolTip);
			this->fostabPageGUI->Controls->Add(this->fosCBDisableVisualStyles);
			this->fostabPageGUI->Controls->Add(this->fosCBLogDisableTransparency);
			this->fostabPageGUI->Controls->Add(this->fosLBDisableVisualStyles);
			this->fostabPageGUI->Controls->Add(this->fosCBLogStartMinimized);
			this->fostabPageGUI->Location = System::Drawing::Point(4, 24);
			this->fostabPageGUI->Name = L"fostabPageGUI";
			this->fostabPageGUI->Size = System::Drawing::Size(384, 308);
			this->fostabPageGUI->TabIndex = 1;
			this->fostabPageGUI->Text = L"ログ・設定画面";
			this->fostabPageGUI->UseVisualStyleBackColor = true;
			// 
			// fosCBRunBatMinimized
			// 
			this->fosCBRunBatMinimized->AutoSize = true;
			this->fosCBRunBatMinimized->Location = System::Drawing::Point(17, 211);
			this->fosCBRunBatMinimized->Name = L"fosCBRunBatMinimized";
			this->fosCBRunBatMinimized->Size = System::Drawing::Size(205, 19);
			this->fosCBRunBatMinimized->TabIndex = 30;
			this->fosCBRunBatMinimized->Text = L"エンコ前後バッチ処理を最小化で実行";
			this->fosCBRunBatMinimized->UseVisualStyleBackColor = true;
			// 
			// fosCBGetRelativePath
			// 
			this->fosCBGetRelativePath->AutoSize = true;
			this->fosCBGetRelativePath->Location = System::Drawing::Point(17, 182);
			this->fosCBGetRelativePath->Name = L"fosCBGetRelativePath";
			this->fosCBGetRelativePath->Size = System::Drawing::Size(185, 19);
			this->fosCBGetRelativePath->TabIndex = 29;
			this->fosCBGetRelativePath->Text = L"ダイアログから相対パスで取得する";
			this->fosCBGetRelativePath->UseVisualStyleBackColor = true;
			// 
			// fosBTSetFont
			// 
			this->fosBTSetFont->Location = System::Drawing::Point(235, 92);
			this->fosBTSetFont->Name = L"fosBTSetFont";
			this->fosBTSetFont->Size = System::Drawing::Size(124, 27);
			this->fosBTSetFont->TabIndex = 28;
			this->fosBTSetFont->Text = L"フォントの変更...";
			this->fosBTSetFont->UseVisualStyleBackColor = true;
			this->fosBTSetFont->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosBTSetFont_Click);
			// 
			// fosCBStgEscKey
			// 
			this->fosCBStgEscKey->AutoSize = true;
			this->fosCBStgEscKey->Location = System::Drawing::Point(17, 152);
			this->fosCBStgEscKey->Name = L"fosCBStgEscKey";
			this->fosCBStgEscKey->Size = System::Drawing::Size(168, 19);
			this->fosCBStgEscKey->TabIndex = 27;
			this->fosCBStgEscKey->Text = L"設定画面でEscキーを有効化";
			this->fosCBStgEscKey->UseVisualStyleBackColor = true;
			// 
			// fosCBDisableToolTip
			// 
			this->fosCBDisableToolTip->AutoSize = true;
			this->fosCBDisableToolTip->Location = System::Drawing::Point(17, 16);
			this->fosCBDisableToolTip->Name = L"fosCBDisableToolTip";
			this->fosCBDisableToolTip->Size = System::Drawing::Size(158, 19);
			this->fosCBDisableToolTip->TabIndex = 22;
			this->fosCBDisableToolTip->Text = L"ポップアップヘルプを抑制する";
			this->fosCBDisableToolTip->UseVisualStyleBackColor = true;
			// 
			// fosCBDisableVisualStyles
			// 
			this->fosCBDisableVisualStyles->AutoSize = true;
			this->fosCBDisableVisualStyles->Location = System::Drawing::Point(17, 46);
			this->fosCBDisableVisualStyles->Name = L"fosCBDisableVisualStyles";
			this->fosCBDisableVisualStyles->Size = System::Drawing::Size(128, 19);
			this->fosCBDisableVisualStyles->TabIndex = 23;
			this->fosCBDisableVisualStyles->Text = L"視覚効果をオフにする";
			this->fosCBDisableVisualStyles->UseVisualStyleBackColor = true;
			// 
			// fosCBLogDisableTransparency
			// 
			this->fosCBLogDisableTransparency->AutoSize = true;
			this->fosCBLogDisableTransparency->Location = System::Drawing::Point(17, 122);
			this->fosCBLogDisableTransparency->Name = L"fosCBLogDisableTransparency";
			this->fosCBLogDisableTransparency->Size = System::Drawing::Size(174, 19);
			this->fosCBLogDisableTransparency->TabIndex = 26;
			this->fosCBLogDisableTransparency->Text = L"ログウィンドウの透過をオフにする";
			this->fosCBLogDisableTransparency->UseVisualStyleBackColor = true;
			// 
			// fosLBDisableVisualStyles
			// 
			this->fosLBDisableVisualStyles->AutoSize = true;
			this->fosLBDisableVisualStyles->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->fosLBDisableVisualStyles->ForeColor = System::Drawing::Color::OrangeRed;
			this->fosLBDisableVisualStyles->Location = System::Drawing::Point(38, 65);
			this->fosLBDisableVisualStyles->Name = L"fosLBDisableVisualStyles";
			this->fosLBDisableVisualStyles->Size = System::Drawing::Size(161, 14);
			this->fosLBDisableVisualStyles->TabIndex = 24;
			this->fosLBDisableVisualStyles->Text = L"※反映にはAviutlの再起動が必要";
			// 
			// fosCBLogStartMinimized
			// 
			this->fosCBLogStartMinimized->AutoSize = true;
			this->fosCBLogStartMinimized->Location = System::Drawing::Point(17, 92);
			this->fosCBLogStartMinimized->Name = L"fosCBLogStartMinimized";
			this->fosCBLogStartMinimized->Size = System::Drawing::Size(184, 19);
			this->fosCBLogStartMinimized->TabIndex = 25;
			this->fosCBLogStartMinimized->Text = L"ログウィンドウを最小化で開始する";
			this->fosCBLogStartMinimized->UseVisualStyleBackColor = true;
			// 
			// fosCXDefaultAudioEncoder
			// 
			this->fosCXDefaultAudioEncoder->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->fosCXDefaultAudioEncoder->FormattingEnabled = true;
			this->fosCXDefaultAudioEncoder->Location = System::Drawing::Point(41, 101);
			this->fosCXDefaultAudioEncoder->Name = L"fosCXDefaultAudioEncoder";
			this->fosCXDefaultAudioEncoder->Size = System::Drawing::Size(190, 23);
			this->fosCXDefaultAudioEncoder->TabIndex = 27;
			// 
			// fosLBDefaultAudioEncoder
			// 
			this->fosLBDefaultAudioEncoder->AutoSize = true;
			this->fosLBDefaultAudioEncoder->Location = System::Drawing::Point(14, 78);
			this->fosLBDefaultAudioEncoder->Name = L"fosLBDefaultAudioEncoder";
			this->fosLBDefaultAudioEncoder->Size = System::Drawing::Size(130, 15);
			this->fosLBDefaultAudioEncoder->TabIndex = 26;
			this->fosLBDefaultAudioEncoder->Text = L"デフォルトの音声エンコーダ";
			// 
			// fosCBOutputMoreLog
			// 
			this->fosCBOutputMoreLog->AutoSize = true;
			this->fosCBOutputMoreLog->Location = System::Drawing::Point(17, 266);
			this->fosCBOutputMoreLog->Name = L"fosCBOutputMoreLog";
			this->fosCBOutputMoreLog->Size = System::Drawing::Size(143, 19);
			this->fosCBOutputMoreLog->TabIndex = 32;
			this->fosCBOutputMoreLog->Text = L"音声・muxのログも表示";
			this->fosCBOutputMoreLog->UseVisualStyleBackColor = true;
			// 
			// fosCBWineCompat
			// 
			this->fosCBWineCompat->AutoSize = true;
			this->fosCBWineCompat->Location = System::Drawing::Point(17, 238);
			this->fosCBWineCompat->Name = L"fosCBWineCompat";
			this->fosCBWineCompat->Size = System::Drawing::Size(104, 19);
			this->fosCBWineCompat->TabIndex = 31;
			this->fosCBWineCompat->Text = L"wine互換モード";
			this->fosCBWineCompat->UseVisualStyleBackColor = true;
			// 
			// frmOtherSettings
			// 
			this->AcceptButton = this->fosCBOK;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->CancelButton = this->fosCBCancel;
			this->ClientSize = System::Drawing::Size(392, 381);
			this->Controls->Add(this->fosTabControl);
			this->Controls->Add(this->fosCBOK);
			this->Controls->Add(this->fosCBCancel);
			this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"frmOtherSettings";
			this->ShowIcon = false;
			this->Text = L"frmOtherSettings";
			this->Load += gcnew System::EventHandler(this, &frmOtherSettings::frmOtherSettings_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmOtherSettings::frmOtherSettings_KeyDown);
			this->fosTabControl->ResumeLayout(false);
			this->fostabPageGeneral->ResumeLayout(false);
			this->fostabPageGeneral->PerformLayout();
			this->fostabPageGUI->ResumeLayout(false);
			this->fostabPageGUI->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void fosCBOK_Click(System::Object^  sender, System::EventArgs^  e) {
			//DisableToolTipHelp = fosCBDisableToolTip->Checked;

			stgDir = fosTXStgDir->Text;
			fos_ex_stg->load_encode_stg();
			fos_ex_stg->load_log_win();
			fos_ex_stg->s_local.disable_tooltip_help     = fosCBDisableToolTip->Checked;
			fos_ex_stg->s_local.disable_visual_styles    = fosCBDisableVisualStyles->Checked;
			fos_ex_stg->s_local.enable_stg_esc_key       = fosCBStgEscKey->Checked;
			fos_ex_stg->s_log.minimized                  = fosCBLogStartMinimized->Checked;
			fos_ex_stg->s_log.transparent                = !fosCBLogDisableTransparency->Checked;
			fos_ex_stg->s_log.wine_compat                = fosCBWineCompat->Checked;
			fos_ex_stg->s_log.log_level                  =(fosCBOutputMoreLog->Checked) ? LOG_MORE : LOG_INFO;
			fos_ex_stg->s_local.get_relative_path        = fosCBGetRelativePath->Checked;
			fos_ex_stg->s_local.run_bat_minimized        = fosCBRunBatMinimized->Checked;
			fos_ex_stg->s_local.default_audio_encoder    = fosCXDefaultAudioEncoder->SelectedIndex;
			fos_ex_stg->save_local();
			fos_ex_stg->save_log_win();
			this->Close();
		}
	private: 
		System::Void fosSetComboBox() {
			fosCXDefaultAudioEncoder->SuspendLayout();
			fosCXDefaultAudioEncoder->Items->Clear();
			for (int i = 0; i < fos_ex_stg->s_aud_count; i++)
				fosCXDefaultAudioEncoder->Items->Add(String(fos_ex_stg->s_aud[i].dispname).ToString());
			fosCXDefaultAudioEncoder->ResumeLayout();
		}
	private: 
		System::Void frmOtherSettings_Load(System::Object^  sender, System::EventArgs^  e) {
			this->Text = String(AUO_FULL_NAME).ToString();
			fosTXStgDir->Text = stgDir;
			fos_ex_stg->load_encode_stg();
			fos_ex_stg->load_log_win();
			fosSetComboBox();
			fosCBDisableToolTip->Checked         = fos_ex_stg->s_local.disable_tooltip_help != 0;
			fosCBDisableVisualStyles->Checked    = fos_ex_stg->s_local.disable_visual_styles != 0;
			fosCBStgEscKey->Checked              = fos_ex_stg->s_local.enable_stg_esc_key != 0;
			fosCBLogStartMinimized->Checked      = fos_ex_stg->s_log.minimized != 0;
			fosCBLogDisableTransparency->Checked = fos_ex_stg->s_log.transparent == 0;
			fosCBWineCompat->Checked             = fos_ex_stg->s_log.wine_compat != 0;
			fosCBOutputMoreLog->Checked          = fos_ex_stg->s_log.log_level != LOG_INFO;
			fosCBGetRelativePath->Checked        = fos_ex_stg->s_local.get_relative_path != 0;
			fosCBRunBatMinimized->Checked        = fos_ex_stg->s_local.run_bat_minimized != 0;
			fosCXDefaultAudioEncoder->SelectedIndex = clamp(fos_ex_stg->s_local.default_audio_encoder, 0, fosCXDefaultAudioEncoder->Items->Count);
			if (str_has_char(fos_ex_stg->s_local.conf_font.name))
				SetFontFamilyToForm(this, gcnew FontFamily(String(fos_ex_stg->s_local.conf_font.name).ToString()), this->Font->FontFamily);
		}
	private: 
		System::Void fosBTStgDir_Click(System::Object^  sender, System::EventArgs^  e) {
			FolderBrowserDialog^ fbd = gcnew FolderBrowserDialog();
			if (System::IO::Directory::Exists(fosTXStgDir->Text)) {
				fbd->SelectedPath = Path::GetFullPath(fosTXStgDir->Text);
			}
			if (fbd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (fosCBGetRelativePath->Checked)
					fbd->SelectedPath = GetRelativePath(fbd->SelectedPath);
				fosTXStgDir->Text = fbd->SelectedPath;
			}
		}
	private: 
		System::Void fosCBCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
	private: 
		System::Void frmOtherSettings_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if (e->KeyCode == Keys::Escape)
				this->Close();
			}
	private:
		System::Void fosBTSetFont_Click(System::Object^  sender, System::EventArgs^  e) {
			fosfontDialog->Font = fosBTSetFont->Font;
			if (fosfontDialog->ShowDialog() != System::Windows::Forms::DialogResult::Cancel
				&& String::Compare(fosfontDialog->Font->FontFamily->Name, this->Font->FontFamily->Name)) {
				guiEx_settings exstg(true);
				exstg.load_encode_stg();
				Set_AUO_FONT_INFO(&exstg.s_local.conf_font, fosfontDialog->Font, this->Font);
				exstg.s_local.conf_font.size = 0.0;
				exstg.s_local.conf_font.style = 0;
				exstg.save_local();
				SetFontFamilyToForm(this, fosfontDialog->Font->FontFamily, this->Font->FontFamily);
			}
		}
};
}
