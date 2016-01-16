#pragma once

#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreviousInstance, LPSTR lpCmdLine, int nCmdShow);

LRESULT CALLBACK WndProc(HWND hdnw, UINT msg, WPARAM wParam, LPARAM lParam);