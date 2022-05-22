#include "MainFormh.h"
#include "History.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MainFormh form;
	Application::Run(%form);
	return 0;
}

System::Void Calculator::MainFormh::b_num(System::Object^ sender, System::EventArgs^ e)
{
	Button^ nums = safe_cast<Button^>(sender);
	if (display->Text == "0")
	{
		display->Text = nums->Text;
	}
	else
	{
		display->Text = display->Text + nums->Text;
	}
}

System::Void Calculator::MainFormh::oper(System::Object^ sender, System::EventArgs^ e)
{
	Button^ oper = safe_cast<Button^>(sender);
	
	num1 = Double::Parse(display->Text);
	display->Text = "";
	oper_bt_nums = oper->Text;
}

System::Void Calculator::MainFormh::b_point_Click(System::Object^ sender, System::EventArgs^ e)
{
	if(!display->Text->Contains("."))
	{
		display->Text = display->Text + "," ;
	}
}

System::Void Calculator::MainFormh::b_sqrt_Click(System::Object^ sender, System::EventArgs^ e)
{
	num1 = 1;
	display->Text = "";
	oper_bt_nums = "sqrt";
}

System::Void Calculator::MainFormh::b_clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	display->Text = "0";
}

System::Void Calculator::MainFormh::b_del_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (display->Text->Length > 0)
	{
		display->Text = display->Text->Remove(display->Text->Length - 1, 1);
	}
	if (display->Text->Length == 0)
	{
		display->Text = "0";
	}
}

System::Void Calculator::MainFormh::b_equals_Click(System::Object^ sender, System::EventArgs^ e)
{
	num2 = Double::Parse(display->Text);
	if (oper_bt_nums == "+")
	{
		result = num1 + num2;
	}
	if (oper_bt_nums == "-")
	{
		result = num1 - num2;
	}
	if (oper_bt_nums == "x")
	{
		result = num1 * num2;
	}
	if (oper_bt_nums == "/")
	{
		result = num1 / num2;
	}
	if (oper_bt_nums == "sqrt")
	{
		result = sqrt(num2);
	}
	if (oper_bt_nums == "^")
	{
		result = exp(num1, num2);
	}
	display->Text = System::Convert::ToString(result);
}

System::Void Calculator::MainFormh::tap_weight_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (weight_from->Text != "")
	{
		for (int i = count_lines("History"); i > 0; i--)
			list_history->Items->RemoveAt(i - 1);

		w_from = Double::Parse(weight_from->Text);
		if (list_weight_from->SelectedItem == "Kilograms")
		{
			if (list_weight_to->SelectedItem == "Grams")
			{
				w_to = w_from * 1000;
				fill_file_all_history(w_from, "kg", w_to, "g");
			}
			if (list_weight_to->SelectedItem == "Miligrams")
			{
				w_to = w_from * 1000000;
				fill_file_all_history(w_from, "kg", w_to, "mg");
			}
			if (list_weight_to->SelectedItem == "Kilograms")
			{
				w_to = w_from * 1;
				fill_file_all_history(w_from, "kg", w_to, "kg");
			}
			if (list_weight_to->SelectedItem == "Tons")
			{
				w_to = w_from / 1000;
				fill_file_all_history(w_from, "kg", w_to, "t");
			}
		}
		if (list_weight_from->SelectedItem == "Grams")
		{
			if (list_weight_to->SelectedItem == "Grams")
			{
				w_to = w_from * 1;
				fill_file_all_history(w_from, "g", w_to, "g");
			}
			if (list_weight_to->SelectedItem == "Miligrams")
			{
				w_to = w_from * 1000;
				fill_file_all_history(w_from, "g", w_to, "mg");
			}
			if (list_weight_to->SelectedItem == "Kilograms")
			{
				w_to = w_from / 1000;
				fill_file_all_history(w_from, "g", w_to, "kg");
			}
			if (list_weight_to->SelectedItem == "Tons")
			{
				w_to = w_from / 1000000;
				fill_file_all_history(w_from, "g", w_to, "t");
			}
		}
		if (list_weight_from->SelectedItem == "Miligrams")
		{
			if (list_weight_to->SelectedItem == "Miligrams")
			{
				w_to = w_from * 1;
				fill_file_all_history(w_from, "mg", w_to, "mg");
			}
			if (list_weight_to->SelectedItem == "Grams")
			{
				w_to = w_from / 1000;
				fill_file_all_history(w_from, "mg", w_to, "g");
			}
			if (list_weight_to->SelectedItem == "Kilograms")
			{
				w_to = w_from / 1000000;
				fill_file_all_history(w_from, "mg", w_to, "kg");
			}
			if (list_weight_to->SelectedItem == "Tons")
				MessageBox::Show("Don't do it\nit's a bad idea :)", "xxx");
		}
		if (list_weight_from->SelectedItem == "Tons")
		{
			if (list_weight_to->SelectedItem == "Tons")
			{
				w_to = w_from * 1;
				fill_file_all_history(w_from, "t", w_to, "t");
			}
			if (list_weight_to->SelectedItem == "Grams")
			{
				w_to = w_from / 1000000;
				fill_file_all_history(w_from, "t", w_to, "g");
			}
			if (list_weight_to->SelectedItem == "Kilograms")
			{
				w_to = w_from / 1000;
				fill_file_all_history(w_from, "t", w_to, "kg");
			}
			if (list_weight_to->SelectedItem == "Miligrams")
				MessageBox::Show("\tDon't do it\n\tit's a bad idea :)", "\txxx");
		}
		weight_to->Text = System::Convert::ToString(w_to);
		read_history();
	}
}

System::Void Calculator::MainFormh::tap_length_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (length_from->Text != "")
	{
		for (int i = count_lines("History"); i > 0; i--)
			list_history->Items->RemoveAt(i - 1);

		l_from = Double::Parse(length_from->Text);
		if (list_length_from->SelectedItem == "Kilometres")
		{
			if (list_length_to->SelectedItem == "Metres")
			{
				l_to = l_from * 1000;
				fill_file_all_history(l_from, "km", l_to, "m");
			}
			if (list_length_to->SelectedItem == "Centimetres")
			{
				l_to = l_from * 100000;
				fill_file_all_history(l_from, "km", l_to, "cm");
			}
			if (list_length_to->SelectedItem == "Inches")
			{
				l_to = l_from * 39370;
				fill_file_all_history(l_from, "km", l_to, "in");
			}
			if (list_length_to->SelectedItem == "Miles")
			{
				l_to = l_from / 1.609;
				fill_file_all_history(l_from, "km", l_to, "mi");
			}
			if (list_length_to->SelectedItem == "Kilometres")
			{
				l_to = l_from * 1;
				fill_file_all_history(l_from, "km", l_to, "km");
			}
			if (list_length_to->SelectedItem == "Milimetres")
			{
				l_to = l_from / 1000000;
				fill_file_all_history(l_from, "km", l_to, "mm");
			}
		}
		if (list_length_from->SelectedItem == "Metres")
		{
			if (list_length_to->SelectedItem == "Kilometres")
			{
				l_to = l_from / 1000;
				fill_file_all_history(l_from, "m", l_to, "km");
			}
			if (list_length_to->SelectedItem == "Centimetres")
			{
				l_to = l_from / 100;
				fill_file_all_history(l_from, "m", l_to, "cm");
			}

			if (list_length_to->SelectedItem == "Inches")
			{
				l_to = l_from * 39.37;
				fill_file_all_history(l_from, "m", l_to, "in");
			}
			if (list_length_to->SelectedItem == "Miles")
			{
				l_to = l_from / 1609;
				fill_file_all_history(l_from, "m", l_to, "mi");
			}
			if (list_length_to->SelectedItem == "Metres")
			{
				fill_file_all_history(l_from, "m", l_to, "m");
				l_to = l_from * 1;
			}
			if (list_length_to->SelectedItem == "Milimetres")
			{
				l_to = l_from / 1000;
				fill_file_all_history(l_from, "m", l_to, "mm");
			}
		}
		if (list_length_from->SelectedItem == "Centimetres")
		{
			if (list_length_to->SelectedItem == "Kilometres")
			{
				l_to = l_from * 100000;
				fill_file_all_history(l_from, "cm", l_to, "km");
			}
			if (list_length_to->SelectedItem == "Centimetres")
			{
				l_to = l_from * 1;
				fill_file_all_history(l_from, "cm", l_to, "cm");
			}
			if (list_length_to->SelectedItem == "Inches")
			{
				l_to = l_from / 2.54;
				fill_file_all_history(l_from, "cm", l_to, "in");
			}
			if (list_length_to->SelectedItem == "Miles")
			{
				l_to = l_from / 160934;
				fill_file_all_history(l_from, "cm", l_to, "mi");
			}
			if (list_length_to->SelectedItem == "Metres")
			{
				l_to = l_from * 100;
				fill_file_all_history(l_from, "cm", l_to, "m");
			}
			if (list_length_to->SelectedItem == "Milimetres")
			{
				l_to = l_from * 10;
				fill_file_all_history(l_from, "cm", l_to, "mm");
			}
		}
		if (list_length_from->SelectedItem == "Milimetres")
		{
			if (list_length_to->SelectedItem == "Kilometres")
			{
				l_to = l_from / 1000000;
				fill_file_all_history(l_from, "mm", l_to, "km");
			}
			if (list_length_to->SelectedItem == "Centimetres")
			{
				l_to = l_from / 10;
				fill_file_all_history(l_from, "mm", l_to, "cm");
			}
			if (list_length_to->SelectedItem == "Inches")
			{
				l_to = l_from / 25.4;
				fill_file_all_history(l_from, "mm", l_to, "in");
			}
			if (list_length_to->SelectedItem == "Miles")
			{
				MessageBox::Show("\tDon't do it\n\tit's a bad idea :)", "\txxx");
				l_to = l_from / 1609000000;
				fill_file_all_history(l_from, "mm", l_to, "mi");
			}
			if (list_length_to->SelectedItem == "Metres")
			{
				l_to = l_from * 100;
				fill_file_all_history(l_from, "mm", l_to, "m");
			}
			if (list_length_to->SelectedItem == "Milimetres")
			{
				l_to = l_from * 1;
				fill_file_all_history(l_from, "mm", l_to, "mm");
			}
		}
		if (list_length_from->SelectedItem == "Inches")
		{
			if (list_length_to->SelectedItem == "Kilometres")
			{
				l_to = l_from / 39370;
				fill_file_all_history(l_from, "in", l_to, "km");
			}
			if (list_length_to->SelectedItem == "Centimetres")
			{
				l_to = l_from * 2.54;
				fill_file_all_history(l_from, "in", l_to, "mm");
			}
			if (list_length_to->SelectedItem == "Inches")
			{
				l_to = l_from * 1;
				fill_file_all_history(l_from, "in", l_to, "in");
			}
			if (list_length_to->SelectedItem == "Miles")
			{
				l_to = l_from / 63360;
				fill_file_all_history(l_from, "in", l_to, "mi");
			}
			if (list_length_to->SelectedItem == "Metres")
			{
				l_to = l_from / 39.37;
				fill_file_all_history(l_from, "in", l_to, "m");				
			}
			if (list_length_to->SelectedItem == "Milimetres")
			{
				l_to = l_from * 25.4;
				fill_file_all_history(l_from, "in", l_to, "mm");				
			}
		}
		if (list_length_from->SelectedItem == "Miles")
		{
			if (list_length_to->SelectedItem == "Kilometres")
			{
				l_to = l_from * 1.609;
				fill_file_all_history(l_from, "mi", l_to, "km");				
			} 
			if (list_length_to->SelectedItem == "Centimetres")
			{
				l_to = l_from * 160934;
				fill_file_all_history(l_from, "mi", l_to, "cm");				
			}
			if (list_length_to->SelectedItem == "Inches")
			{
				l_to = l_from * 63360;
				fill_file_all_history(l_from, "mi", l_to, "in");				
			}
			if (list_length_to->SelectedItem == "Miles")
			{
				l_to = l_from / 160934;
				fill_file_all_history(l_from, "mi", l_to, "mi");				
			}
			if (list_length_to->SelectedItem == "Metres")
			{
				fill_file_all_history(l_from, "mi", l_to, "m");
				l_to = l_from * 1609;
			}
			if (list_length_to->SelectedItem == "Milimetres")
			{
				MessageBox::Show("\tDon't do it\n\tit's a bad idea :)", "\txxx");
				l_to = l_from * 1609000000;
				fill_file_all_history(l_from, "mi", l_to, "mm");				
			}
		}
		length_to->Text = System::Convert::ToString(l_to);
		read_history();
	}
}

System::Void Calculator::MainFormh::tap_temp_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (temp_from->Text != "")
	{
		for (int i = count_lines("History"); i > 0; i--)
			list_history->Items->RemoveAt(i - 1);

		t_from = Double::Parse(temp_from->Text);
		if (list_temp_from->SelectedItem == "Kelvin")
		{

			if (list_temp_to->SelectedItem == "Fahrenheit")
			{
				t_to = ((t_from - 273.15) * 9) / 5 + 32;
				fill_file_all_history(t_from, "K", t_to, "F");				
			}

			if (list_temp_to->SelectedItem == "Celcius")
			{
				t_to = t_from - 273.15;
				fill_file_all_history(t_from, "K", t_to, "C");				
			}
		
			if (list_temp_to->SelectedItem == "Kelvin")
			{
				t_to = t_from * 1;
				fill_file_all_history(t_from, "K", t_to, "K");				
			}
		}
		if (list_temp_from->SelectedItem == "Celcius")
		{
			if (list_temp_to->SelectedItem == "Fahrenheit")
			{
				t_to = (t_from * 9 )/ 5 + 32;
				fill_file_all_history(t_from, "C", t_to, "F");				
			}
				
			if (list_temp_to->SelectedItem == "Celcius")
			{
				t_to = t_from * 1;
				fill_file_all_history(t_from, "C", t_to, "C");				
			}

			if (list_temp_to->SelectedItem == "Kelvin")
			{
				t_to = t_from + 273.15;
				fill_file_all_history(t_from, "C", t_to, "K");			
			}	
		}
		if (list_temp_from->SelectedItem == "Fahrenheit")
		{
			if (list_temp_to->SelectedItem == "Fahrenheit")
			{
				t_to = t_from * 1;
				fill_file_all_history(t_from, "F", t_to, "F");
			}

			if (list_temp_to->SelectedItem == "Celcius")
			{
				t_to = ((t_from - 32) * 5) / 9;
				fill_file_all_history(t_from, "F", t_to, "C");
			}

			if (list_temp_to->SelectedItem == "Kelvin")
			{
				t_to = ((t_from - 32) * 5) / 9 + 273.15;
				fill_file_all_history(t_from, "F", t_to, "K");				
			}
		}
		temp_to->Text = System::Convert::ToString(t_to);
		read_history();
	}
}

int Calculator::MainFormh::exp(double a, int n)
{
	if (n == 0)
		return 1;
	else
		return a * exp(a, n - 1);
}

System::Void Calculator::MainFormh::record_selected_items_in_file_Click(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void Calculator::MainFormh::b_clear_file_Click(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void Calculator::MainFormh::b_clear_history_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = count_lines("History"); i > 0; i--)
		list_history->Items->RemoveAt(i - 1);\
		clear_file("History.txt");
}

System::Void Calculator::MainFormh::view(System::Object^ sender, System::EventArgs^ e)
{
		if (tabControl2->Visible == true)
			read_history();
		else
		{
			for (int i = count_lines("History"); i > 0; i--)
				list_history->Items->RemoveAt(i - 1);
		}
}

System::Void Calculator::MainFormh::read_history()
{
	FILE* f = fopen("History.txt", "r");
	fseek(f, 0, SEEK_SET);
	char item[100];
	while (fgets(item, 100, f) != NULL)
	{
		list_history->Items->Add(gcnew String(item));
	}
	fclose(f);
}

System::Void Calculator::MainFormh::b_nums_trig(System::Object^ sender, System::EventArgs^ e)
{
	Button^ nums_trig = safe_cast<Button^>(sender);
	if (display_trig->Text == "0")
	{
		display_trig->Text = nums_trig->Text;
	}
	else
	{
		display_trig->Text = display_trig->Text + nums_trig->Text;
	}
}

System::Void Calculator::MainFormh::b_point_trig_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!display_trig->Text->Contains("."))
	{
		display_trig->Text = display_trig->Text + ",";
	}
}

System::Void Calculator::MainFormh::b_del_trig_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (display_trig->Text->Length > 0)
	{
		display_trig->Text = display_trig->Text->Remove(display_trig->Text->Length - 1, 1);
	}
	if (display_trig->Text->Length == 0)
	{
		display_trig->Text = "0";
	}
}

System::Void Calculator::MainFormh::b_clear_trig_Click(System::Object^ sender, System::EventArgs^ e)
{
	display_trig->Text = "0";
}

System::Void Calculator::MainFormh::b_oper_trig(System::Object^ sender, System::EventArgs^ e)
{
	Button^ b_oper_trig = safe_cast<Button^>(sender);

	num_trig = Double::Parse(display_trig->Text);
	display_trig->Text = "";
	oper_trig = b_oper_trig->Text;
}

System::Void Calculator::MainFormh::b_equal_trig_Click(System::Object^ sender, System::EventArgs^ e)
{
	num_trig = Double::Parse(display_trig->Text);
	num_trig *= (M_PI / 180);
	if (oper_trig == "cos")
	{
		num_trig = cos(num_trig);
	}
	if (oper_trig == "sin")
	{
		num_trig = sin(num_trig);
	}
	if (oper_trig == "tg")
	{
		num_trig = tan(num_trig);
	}
	if (oper_trig == "ctg")
	{
		num_trig = 1/(tan(num_trig));
	}
	if (oper_trig == "csc")
	{
		num_trig = 1 / (sin(num_trig));
	}
	if (oper_trig == "sec")
	{
		num_trig = 1 / (cos(num_trig));
	}
	if (oper_trig == "acos")
	{
		num_trig = acos(num_trig);
	}
	if (oper_trig == "asin")
	{
		num_trig = asin(num_trig);
	}
	if (oper_trig == "atg")
	{
		num_trig = atan(num_trig);
	}
	display_trig->Text = System::Convert::ToString(num_trig);
}






