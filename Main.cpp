#include "Reader.h"
#include "Windows.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);  
   
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)  
{  
    //WCHAR* cls_Name = "My Class";  
    // 设计窗口类  
    WNDCLASS wc = {};  
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOWFRAME);  
    wc.lpfnWndProc = WindowProc;  
    wc.lpszClassName = "My Class";  
    wc.hInstance = hInstance;
    wc.style = CS_HREDRAW|CS_VREDRAW;  
    // 注册窗口类  
    RegisterClass(&wc);  
    // 创建窗口  
    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        "My Class",                     // Window class
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
  
    // 更新窗口  
    UpdateWindow(hwnd);  
  
    // 消息循环  
    MSG msg;  
    while(GetMessage(&msg, NULL, 0, 0))  
    {  
        TranslateMessage(&msg);  
        DispatchMessage(&msg);  
    }  
    return 0;  
}  
// 在WinMain后实现  
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){  
    switch(uMsg){
        case WM_PAINT: {PAINTSTRUCT ps;  
            BeginPaint(hwnd, &ps);  
            DrawText(ps.hdc, "Hello world",wcslen(L"Hello world"), &(ps.rcPaint), DT_CENTER);  
            EndPaint(hwnd, &ps);
            }
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default: return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}  