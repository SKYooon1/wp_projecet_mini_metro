#pragma once

#include <Windows.h>
#include <tchar.h>
#include <random>
#include "resource.h"

HINSTANCE globalHInstance;
LPCTSTR lpszClass = L"Window Class Name";
LPCTSTR lpszWindowName = L"Mini Metro";

LRESULT CALLBACK wndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
