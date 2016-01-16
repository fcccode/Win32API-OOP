#include "WindowController.h"

WindowController::WindowController(
	HINSTANCE hInstance, 
	HINSTANCE hPreviousInstance, 
	LPSTR lpCmdLine, 
	int nCmdShow
	) {

		this->hInstance = hInstance;
		this->hPreviousInstance = hPreviousInstance;
		this->lpCmdLine = lpCmdLine;
		this->nCmdShow = nCmdShow;
}


WindowController::~WindowController(void) {
	// todo: implement something usefull in the destructor
}

void WindowController::setupWindow(void) {

	windowClass.hInstance = this->hInstance;
	windowClass.lpszClassName = _T("testclass");
	windowClass.lpszMenuName = NULL;
	// todo: implement callback for the message observing
	//windowClass.lpfnWndProc = WndProc;
	windowClass.cbSize = sizeof(WNDCLASSEX);

	windowClass.style = 0;
	windowClass.cbClsExtra = 0;
	windowClass.cbWndExtra = 0;
	windowClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	windowClass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	windowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	windowClass.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
}

void WindowController::registerWindow(void) {
	windowClassRegistered = RegisterClassEx(&windowClass);
}

void WindowController::createWindow(void) {
	hwnd = CreateWindowEx(0, windowClass.lpszClassName, _T("Win32API OOP"),
		WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 500, 500,
		NULL, NULL, hInstance, NULL);

	windowCreated = hwnd;
}

void WindowController::showWindow(void) {
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
}

void WindowController::startMessageObserver(void) {
	while (GetMessage(&loopMessage, NULL, 0, 0) > 0) {
		TranslateMessage(&loopMessage);
		DispatchMessage(&loopMessage);
	}
}
