#include "print_heart.h"
#include "print_chinese.h"

int main(void) {
	//2D 版本
	print_heart_version_2D_0();
	//2D版本
	print_heart_version_2D_1();
	//3D版本
	print_heart_version_3D();
	//3D彩色版本
	print_heart_version_3D_red();

    	print_line_n_CC("步不惊心", 4);
    	print_line_n_CC("珠玑", 2);
    	print_CC("我的老嘎就住在这个屯", 4);
    	return 0;
}

