// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <list>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

#include <d3d9.h>
#pragma comment(lib, "d3d9.lib")

#include <d3dx9.h>
#pragma comment(lib, "d3dx9.lib")

// Memory Leak
#include "vld.h"

// Console
//#ifdef _DEBUG
//#pragma comment(linker, "/entry:wWinMainCRTStartup /subsystem:console")
//#endif

// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
#include "Extern.h"
#include "Define.h"
#include "Typedef.h"
#include "Enum.h"
#include "Struct.h"
#include "Function.h"
#include "Functor.h"
#include "Constant.h"

// managers
#include "TimeMgr.h"
#include "Device.h"
#include "Mouse.h"
#include "TextureMgr.h"
#include "ObjMgr.h"
#include "ScrollMgr.h"
#include "TileMgr.h"
#include "SceneMgr.h"
#include "KeyMgr.h"
#include "AbstractFactory.h"
#include "WeaponMgr.h"