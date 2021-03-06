//////////////////////////////////////////////////////////////////////
//
//  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//  ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
//  TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//  PARTICULAR PURPOSE.
//
//  Copyright (C) Microsoft Corporation.  All rights reserved.
//
//  Globals.h
//
//          Global variable declarations.
//
//////////////////////////////////////////////////////////////////////

#ifndef GLOBALS_H
#define GLOBALS_H

#include <windows.h>
#include <ole2.h>
#include <olectl.h>
#include <assert.h>
#include "msctf.h"

void DllAddRef();
void DllRelease();

#ifndef	ARRAYSIZE
#define ARRAYSIZE(a) (sizeof(a)/sizeof(a[0]))
#endif

#define TEXTSERVICE_LANGID    MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_TRADITIONAL)

#define TEXTSERVICE_DESC    L"Sample Text Service"
#define TEXTSERVICE_DESC_A  "Sample Text Service"
#define TEXTSERVICE_MODEL_A   "Apartment"

#define TEXTSERVICE_ICON_INDEX  0
#define LANGBAR_ITEM_DESC   L"Sample Text Service Button"

extern HINSTANCE g_hInst;

extern LONG g_cRefDll;

extern CRITICAL_SECTION g_cs;

extern const CLSID c_clsidTextService;

extern const GUID c_guidProfile;

extern const GUID c_guidLangBarItemButton;

extern const GUID c_guidDisplayAttributeInput;
extern const GUID c_guidDisplayAttributeConverted;
#endif // GLOBALS_H
