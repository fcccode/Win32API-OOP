#include "Callback.h"
#include "WindowController.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreviousInstance, LPSTR lpCmdLine, int nCmdShow) {

	WindowController* pWndCon;
	int lastMessage;

	pWndCon = new WindowController(hInstance, hPreviousInstance, lpCmdLine, nCmdShow);

	pWndCon->setupWindow();
	pWndCon->registerWindow();
	pWndCon->createWindow();
	pWndCon->showWindow();

	lastMessage = pWndCon->startMessageObserver();

	delete pWndCon;

	return lastMessage;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {

	return Callback::WindowProc(hwnd, msg, wParam, lParam);
}

