#include "WindowController.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreviousInstance, LPSTR lpCmdLine, int nCmdShow) {

	WindowController* pWndCon;
	pWndCon = new WindowController(hInstance, hPreviousInstance, lpCmdLine, nCmdShow);

	pWndCon->setupWindow();
	pWndCon->registerWindow();
	pWndCon->createWindow();

	// todo: display window and start message observer

	delete pWndCon;

	return 0;

}