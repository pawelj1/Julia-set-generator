#pragma once
#include "SPI.h"

#define display_width
#define display_hight  

#define min_col_R 0x00
#define min_col_G 0x00
#define min_col_B 0x00

#define max_col_R 0xFF
#define max_col_G 0xFF
#define max_col_B 0xFF

#define ScanCount 255


class ST7735
{
private:
 unsigned char	col_tab[ScanCount][3];
 SPI OutputChannel;


public:
	ST7735();
	~ST7735();

	void operator << (unsigned char* rhs);


};

