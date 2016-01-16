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