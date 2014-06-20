#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#ifdef _WIN32
#ifdef DLL_EXPORT
#define DECL_SPEC __declspec(dllexport)
#endif
#endif
#ifndef DECL_SPEC
#define DECL_SPEC
#endif

DECL_SPEC char *stringutils_num2hex(int n);

#endif

