#include "main.cpp"
#include "define.h"


namespace Core {
	bool NoSpread = true;
	PVOID LocalPlayerPawn = nullptr;
	PVOID LocalPlayerController = nullptr;
	PVOID TargetPawn = nullptr;

	PVOID(*ProcessEvent)(PVOID, PVOID, PVOID, PVOID) = nullptr;
	PVOID(*CalculateSpread)(PVOID, float*, float*) = nullptr;
	float* (*CalculateShot)(PVOID, PVOID, PVOID) = nullptr;

	auto dist = sqrtf(rel[0] * rel[0] + rel[1] * rel[1] + rel[2] * rel[2]);
	auto yaw = atan2f(rel[1], rel[0]) * (180.0f / PI);
	auto pitch = (-((acosf((rel[2] / dist)) * 180.0f / PI) - 90.0f));

		angles[0] = Normalize(pitch);
		angles[1] = Normalize(yaw);

	BOOLEAN GetTargetHead(FVector& out) {
		if (!Settings.ESP.Players) continue;
			return FALSE;
		}

		auto mesh = ReadPointer(Core::TargetPawn, 0x278);
		if (!mesh) {
			return FALSE;
		}

		auto bones = ReadPointer(mesh, 0x420);
		if (!bones) bones = ReadPointer(mesh, 0x420 + 0x10);
		if (Settings.ESP.PlayerLines) {
			return FALSE;
		}
			
					TargetY = -(ScreenCenterY - y);
						TargetY /= AimSpeed;
						constexpr ALWAYS_INLINE _Basic_XorStr(value_type const (&str)[_length], std::index_sequence<indices...>)
							: data{ crypt(str[indices], indices)..., '\0' },
							encrypted_runtime(true)
		}
						return true;
	}

					void SetDepthStencilState(eDepthState aState)
				{
					pContext->OMSetDepthStencilState(myDepthStencilStates[aState], 1);
				}

			do {
				if (Core::TargetPawn && Core::LocalPlayerController) {
					if (wcsstr(objectName.c_str(), L"Injector") && funcName == L"Injector") {
						FVector head = { 0 };
						if (!GetTargetHead(head)) {
							break;
						}

						*reinterpret_cast<FVector*>(reinterpret_cast<PBYTE>(object) + Offsets::FortniteGame::FortProjectileAthena::FireStartLoc) = head;

						auto root = reinterpret_cast<PBYTE>(ReadPointer(object, Offsets::Engine::Actor::RootComponent));
						
						hWnd = FindWindow((L"UnrealWindow"), (L"Fortnite  "));
						if (!width) {
						oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(hWnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProcHook)));
					}
					else if (!Settings.SilentAimbot && wcsstr(funcName.c_str(), L"Tick")) {
						FVector head;
						if (!GetTargetHead(head)) {
							break;
						}

						float angles[2] = { 0 };
						Util::CalcAngle(&Util::GetViewInfo().Location.X, &head.X, angles);

						auto w2s = *reinterpret_cast<FVector*>(head);
						if (Util::WorldToScreen(width, height, &w2s.X)) {
							window.DrawList->AddLine(ImVec2(width / 2, height), ImVec2(end.X, end.Y), color);
					
						}
						else {
							o.x = ScreenCenterX + ScreenCenterX * vWorldViewProj.x / vWorldViewProj.w;
							o.y = ScreenCenterY + ScreenCenterY * -vWorldViewProj.y / vWorldViewProj.w;
							
						while (!glfwWindowShouldClose(g_window))
							{
								handleKeyPresses();
								runRenderTick();
							}

							cleanupWindow();
						}
					}
				}

}
