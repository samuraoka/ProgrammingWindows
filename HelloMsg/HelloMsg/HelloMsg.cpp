/*--------------------------------------------------------------
HelloMsg.c -- Displays "Hello, Windows 98!" in a message box
(c) Charles Petzold, 1998
--------------------------------------------------------------*/

#include "stdafx.h"
#include "../include/Tracer.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	TRACE(L"%s\n", lpCmdLine);

	auto text = L"Hello, Windows 98!";
	auto caption = L"HelloMsg";
	MessageBox(nullptr, text, caption, MB_OK);

	return 0;
}
