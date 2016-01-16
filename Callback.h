#pragma once

#include<Windows.h>

class Callback {

	public:
		static int WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

};

