/*
*This is a Win32 application,however it's unfinished it works well.
    *It serve a "reader" headfile, which include a html reader(UF)
    *In "reader.h" it serves the Win32API headfile, so there's no ne 
    *ed to import the "Windows.h"
*Edition : Alpha 0.01a
*Original code by NayacoZhang(QSCGD) (https://github.com/Nayaco) 
*/
#include "Reader.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);  
   
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)  
{  
    LPCSTR cls_Name = "My Class";  
    //It is the window disigner
    WNDCLASS wc = {};  
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOWFRAME);  
    wc.lpfnWndProc = WindowProc;  
    wc.lpszClassName = cls_Name;
    wc.hInstance = hInstance;
    wc.style = CS_HREDRAW|CS_VREDRAW;  
    //register  
    RegisterClass(&wc);  
    //creator  
    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        cls_Name,                     // Window class
        "Learn to Program Windows",    // Window text
        WS_OVERLAPPEDWINDOW,            // Window style
        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
        );
    if(hwnd == NULL)return 0;    
    ShowWindow(hwnd, SW_SHOW);  
  
    //renewer  
    UpdateWindow(hwnd);  
  
    //message loop
    MSG msg;  
    while(GetMessage(&msg, NULL, 0, 0))  
    {  
        TranslateMessage(&msg);  
        DispatchMessage(&msg);  
    }  
    return 0;  
}  
//It was decleared  
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){  
    switch(uMsg){
        case WM_PAINT: {PAINTSTRUCT ps;  
                sWrite(cout,"Paint begins");
                BeginPaint(hwnd, &ps);  
                DrawText(ps.hdc, "Hello world",wcslen(L"Hello world"), &(ps.rcPaint), DT_CENTER);  
                EndPaint(hwnd, &ps);
                sWrite(cout,"Paint finished");
            }
            return 0;
        case WM_DESTROY:
            sWrite(cout,"Window Destroyed");
            PostQuitMessage(0);
            return 0;
        default: return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}  