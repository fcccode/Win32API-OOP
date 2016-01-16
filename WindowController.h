#pragma once

#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

class WindowController {
	public:
		WindowController(HINSTANCE hInstance, HINSTANCE hPreviousInstance, LPSTR lpCmdLine, int nCmdShow);
		~WindowController(void);

		void setupWindow(void); 
		void registerWindow(void);
		void createWindow(void);
		void showWindow(void);
		void startMessageObserver(void);

		HWND getHWND(void);
		UINT getMessage(void);
		WPARAM getWParam(void);
		LPARAM getLParam(void);

		bool isWindowClassRegistered(void);
		bool isWindowCreated(void);

	private:
		HINSTANCE hInstance;
		HINSTANCE hPreviousInstance;
		LPSTR lpCmdLine;
		int nCmdShow;

		WNDCLASSEX windowClass;
		HWND hwnd;
		MSG loopMessage;
		UINT callbackMessage;
		WPARAM wParam;
		LPARAM lparam;

		bool windowClassRegistered;
		bool windowCreated;

};

