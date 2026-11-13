#ifndef __DEFINE_MACRO__
#define __DEFINE_MACRO__

#include "stdafx.h"
#include <direct.h>
#include "xUtil.h"
#include "../../resource/lang.h"

// TRY
#undef TRY
#define	TRY			try {

// CATCH
#undef CATCH
#define CATCH		} catch(...) { Error("Error on Line %d in %s", __LINE__, __FILE__); }

// REPORT_HACK
#undef REPORT_HACK
#define REPORT_HACK	{\
						CString szRP;\
						szRP.Format("%s - %s : %s (%d)", pUser->GetName(), __FILE__, __FUNCTION__, __LINE__);\
						GameGuardLog( szRP, "..\\Program\\Logs\\Player\\.Hacks.txt", 0 );\
					}
#undef CONSOLE
#define CONSOLE(s,t)	{ char timeStr [9]; \
						_strtime( timeStr );\
						printf( "[%s] ", timeStr );\
						SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY );\
						printf( "%s ", s );\
						SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );\
						printf( "%s\n", t ); }
#endif // __DEFINE_MACRO__