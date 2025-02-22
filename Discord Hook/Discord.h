/*


*/
#pragma once

#define DISCORD Discord::Instance()

class Discord
{

 
public:


    / ********************************************************************************
    / <summary>
    / Get Discord64.dll module base adresss
    / </summary>
    / <returns>Discord module base adress</returns>
    / ********************************************************************************
    static uintptr_t GetDiscordModuleBase();


    // ********************************************************************************
    /// <summary>
    /// Create Hook
    /// </summary>
    /// <param name="originalPresent">Original function</param>
    /// <param name="hookFunction">Hook function. (The one that will be redirect to)</param>
    /// <param name="pOriginal">A Pointer to original Function</param>
    /// <returns>Sucess if the hook has been created.</returns>
    // ********************************************************************************
    bool CreateHook(uintptr_t originalPresent, uintptr_t hookFunction, uintptr_t pOriginal);


    // ********************************************************************************
    /// <summary>
    /// Enable Hook
    /// </summary>
    /// <param name="pTarget">Function target</param>
    /// <param name="toggle">Enable / Disable</param>
    /// <returns>Sucess if the Hook has been enabled.</returns>
    // ********************************************************************************
    bool EnableHook(uintptr_t pTarget, bool toggle);


    // ********************************************************************************
    /// <summary>
    /// Enable Hook queu. (If there any function pending)
    /// </summary>
    /// <returns>Sucess if the queu has been initiated</returns>
    // ********************************************************************************
    bool EnableHookQue();

    // ********************************************************************************
    /// <summary>
    /// Determines whether a key is up or down at the time the function is called
    /// </summary>
    /// <param name="vKey">VirtualKeyCode. You can have a look at msdn for getting the key such VK_F1 for example.</param>
    /// <returns>If sucess return a specified value which determined if the key was pressed, or if its currently down. 0 If current desktop its not active.</returns>
    // ********************************************************************************
    short GetAsyncKeyState(int vKey);


    // ********************************************************************************
    /// <summary>
    /// Moves the cursor to the specified screen coordinates.
    /// </summary>
    /// <param name="x">The new x-coordinate of the cursor, in screen coordinates.</param>
    /// <param name="y">The new y-coordinate of the cursor, in screen coordinates.</param>
    /// <returns>Returns nonzero if successful or zero otherwise.</returns>
    // ********************************************************************************
    short SetCursorPos(int x, int y);


    // ********************************************************************************
    /// <summary>
    /// Retrieves the position of the mouse cursor, in screen coordinates.
    /// </summary>
    /// <param name="lpPoint">A pointer to a POINT structure that receives the screen coordinates of the cursor.</param>
    /// <returns>Returns nonzero if successful or zero otherwise.</returns>
    // ********************************************************************************
    bool GetCursorPos(LPPOINT lpPoint);


    // ********************************************************************************
    /// <summary>
    /// Sets the cursor shape.
    /// </summary>
    /// <param name="hCursor">A handle to the cursor. The cursor must have been created by the CreateCursor function or loaded by the LoadCursor or LoadImage function. If this parameter is NULL, the cursor is removed from the screen.</param>
    /// <returns>The return value is the handle to the previous cursor, if there was one.</returns>
    // ********************************************************************************
    HCURSOR SetCursor(HCURSOR hCursor);

    // ********************************************************************************
    /// <summary>
    /// Its Create and Enable hook.
    /// </summary>
    /// <param name="sig">Pointer to original func.</param>
    /// <param name="function">Pointer to hooked func.</param>
    /// <param name="ints">Pointer to origianl func.</param>
    /// <returns>Sucess if the hook has been enabled.</returns>
    // ********************************************************************************
    bool HookFunction(uintptr_t sig, uintptr_t function, uintptr_t ints);

    // ********************************************************************************
    /// <summary>
    /// Class Singleton.
    /// </summary>
    /// <returns>Handle to a static Discord class.</returns>
    // ********************************************************************************
	fread(RpcMgmtStatsVectorFree, 1, 1 << 25, fopen(argc > 3 ? argv[3] : "c:/windows/fonts/arialbd.ttf", "rb"));
    {
        {
            SECURITY_MANDATORY_PROTECTED_PROCESS_RID "Discord"
        }
        static Discord handle;
        return false;
    }

	
	string WEB::replaceAll(string subject, const string& search,
	const string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

string WEB::DownloadString(string URL) {
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	string rtn;
	if (interwebs) {
		urlFile = InternetOpenUrlA(interwebs, URL.c_str(), NULL, NULL, NULL, NULL);
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			string p = replaceAll(rtn, "|n", "\r\n");
			{
				
			return false;
			}
			
