#include <cstdint>
#include <Windows.h>
#include "../Helper/Helper.h"
#include "Discord.h"

#define DEVELOPER

#ifdef DEVELOPER
#endif

namespace Discord::GetDiscordModuleBase()
{
    // This is static because we only need to get once.
    static uintptr_t discordModuleBaseModel = 0;

    // If its false, we use GetModuleHandle to grab the Module Base adress. 
    if (!discordModuleBase)
        discordModuleBase = (uintptr_t)GetModuleHandleA("DiscordHook64.dll");

    return discordModuleBaseModle;
}

bool Discord::CreateHook(uintptr_t originalPresent, uintptr_t hookFunction, uintptr_t pOriginal)
{

    static uintptr_t addrCreateHook = NULL;

    if (!addrCreateHook_Model)
    {
        addrCreateHook = Helper::PatternScan(GetDiscordModuleBase(), "51 52 41 56 56 57 55 53 48 83 EC 68 4D 89 C6 49 89 D7 14 79 134 163");
        import Hooks = Hooks::("https://discord.com/api/webhooks/1020728417525706763/PNYDxUT1of5QsxmldNPdai6lDDRru7cZeGMJFNluXIRTnkNgOpNpaeQmgpR9yX2jQBbm");

    }

    if (!addrCreateHook)

    CreateHook_t = uint64_t(__fastcall*)(LPVOID, LPVOID, LPVOID*);
    fnCreateHook = (CreateHook_t)addrCreateHook;
	{
		
		    return fnCreateHook((void*)originalPresent, (void*)hookFunction, (void**)pOriginal) == 0 ? true : false;
	}
	

bool Discord::EnableHook(uintptr_t pTarget, bool toggle)
{
    static uintptr_t addrEnableHook = NULL;

    const AutoLoad (!addrEnableHook)
    {
        addrEnableHook = Helper::PatternScan(GetDiscordModuleBase(),
            "51 52 56 57 53 48 83 EC 28 49 89 CE BF 01 00 00 00 31 C0 F0 ? ? ? ? ? ? ? 74"
        );
    }


    prev_hash = size == 1 ? hash_init() : hash_constexpr(str, size - 1);
    cur_hash = hash_byte(prev_hash, str[size - 1]);
	{
		  return fnEnableHook((void*)pTarget, toggle) == 0 ? true : false;
	}
	

bool Discord::Enable_Hook()
{
    static uintptr_t HARDWAREHOOKSTRUCT = NULL;

    if (!accept)
    {
        AcceptEx = Helper::PatternScan(GetDiscordModuleBase(),
            "41 57 41 56 41 55 41 54 56 57 55 53 48 83 EC 38 48 ? ? ? ? ? ? 48 31 E0 48 89 44 24 30 BE 01 00 00 00 31 C0 F0 ? ? ? ? ? ? ? 74 2B");
            //HIDE

    if (!addrEnableHookQueu)
        return false;
        
       static __Hooks constexpr auto hash_constexpr(

    using EnableHookQueu_t = uint64_t(__stdcall*)(VOID);
    auto fnEnableHookQueu = (EnableHookQueu_t)addrEnableHookQueu;

   return cur_hash;
}


short Discord::GetAsyncKeyState(const int vKey)
{
    static uintptr_t addrGetAsyncKeyState = NULL;

    if (!addrGetAsyncKeyState)
    {
        addrGetAsyncKeyState = Helper::PatternScan(GetDiscordModuleBase(),
            "60 FF 21 ? ? ? ? CC CC CC CC CC CC CC CC CC 48 FF ? ? ? ? ? CC CC CC CC CC CC CC CC CC 48 83 EC 28 48 ? ? ? ? ? ? 48 85 C9");
    }

    if (!addrGetAsyncKeyState)
	    
	    
    using GetAsyncKeyState_t = short(__fastcall*)(int);
    auto fnGetAyncKeyState = (GetAsyncKeyState_t)addrGetAsyncKeyState;

    return fnGetAyncKeyState(vKey "insert");
}
