/* ----------------------------------------------------------------------------
Aurora 3dBB Library
Copyright (C) 2007-2020  George E Greaney

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
----------------------------------------------------------------------------*/

#if !defined(BBWindow_H)
#define BBWindow_H

#include "windows.h"

#include <d3d11.h>
#include <d3dx11.h>
#include <d3dx10.h>

#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dx11.lib")
#pragma comment (lib, "d3dx10.lib")

class BBWindow
{
public:
	BBWindow(HMODULE hModule, HWND phwd);
	~BBWindow();

	static BBWindow* aBBWindow;		//for front end communication

	int		   d3dWidth;
	int		   d3dHeight;

	void ResizeBBWindow(int width, int height);
	void CloseBBWindow();

protected:

	//windows vars
	HINSTANCE  appInstance;
	HWND       parentWnd;
	HWND	   d3dWnd;

	void CreateBBWindow();
	
	static LRESULT CALLBACK BBWindowProc (HWND, UINT, WPARAM, LPARAM);


protected:
};

#endif // BBWindow_H
