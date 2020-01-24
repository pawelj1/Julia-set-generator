#include "pch.h"
#include "ST7735.h"


ST7735::ST7735()
{
	//filling up col_tab

	for (int i = 0; i < ScanCount; i++)
	{
		col_tab[i][0] = min_col_R + ((max_col_R - min_col_R) / ScanCount)*i;
		col_tab[i][1] = min_col_G + ((max_col_G - min_col_G) / ScanCount)*i;
		col_tab[i][2] = min_col_B + ((max_col_B - min_col_B) / ScanCount)*i;
	}



}


ST7735::~ST7735()
{
}

void ST7735::operator<<(unsigned char* rhs)
{
	for (int i = 0; i < display_hight; i++)
		for (int j = 0; j < display_width; j++)
		{
			OutputChannel << col_tab[(rhs[i][j])][0];
			OutputChannel << col_tab[(rhs[i][j])][1];
			OutputChannel << col_tab[(rhs[i][j])][2];
		}

}
