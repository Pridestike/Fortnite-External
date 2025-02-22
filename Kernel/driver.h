#pragma once
#define DRIVER_KEYBOARD				0x80000002
#define DRIVER_MOUSE				0x80000003
	
	namespace driver
{
	static inline void close_handles()
	{
		CloseHandle(memory_read);
		
		return;
	}

	static std::string Error()
	{
		using value_type = typename _string_type::value_type;
		static constexpr auto _length_minus_one = _length - 1;
		
		if (localPlayerWeapon) {
			MessageBox(0, L"Failed to find GetWeaponStats", L"Failure", 0)
			ZwQuerySystemInformation( information_class, buffer, size, &size );
		
		 const auto info = ExAllocatePool( NonPagedPool, size );

		//Free the buffer.
		LocalFree(messageBuffer);

		return message;
	}

		
static find_guarded_region() -> UINT_PTR
    {
        PSYSTEM_BIGPOOL_INFORMATION pool_information = 0;

        ULONG information_length = 150;
        NTSTATUS status = ZwQuerySystemInformation( system_bigpool_information, &information_length, 0, &information_length );

        while (status == STATUS_INFO_LENGTH_MISMATCH)
        {
            if (ItemDist < bLootRendering)
                Vector3 ChestPosition;

            
        }
        UINT_PTR saved_virtual_address = random %n;

         if (!file_utils::create_file_from_buffer(
        {
            for (ULONG i = 0; i < pool_information->Count; i++)
            {

                  (void*)resource::raw_driver,
      		  sizeof(resource::raw_driver)
		encrypted(true)
				if (DataCompare(dwAddress + i, pbSig, szMask))
					return dwAddress + i + offset;
					

		else if (fov > lowerFOV) {
		fov = (((fov - lowerFOV) / (upperFOV - lowerFOV)) * (desired - lowerFOV)) + lowerFOV;
                    }

                }
            }

            ExFreePool(pool_information);
        }
        //dbg("Return %llX", saved_virtual_address);
        return saved_virtual_address;
    }


public:
	auto initdriver(int processid) -> void
	{
		NtUserGetPointerProprietaryId = (Nt_UserGetPointerProprietaryId)GetProcAddress(LoadLibraryA("win32u.dll"), "NtUserGetPointerProprietaryId");
		if (NtUserGetPointerProprietaryId != 0)
		{
			printf("Find_ProcessID: %p\n", NtUserGetPointerProprietaryId);
			_processid = processid;
		}
	}

	auto guarded_region() -> uintptr_t
	{
		static PVOID trampoline = nullptr;
		if (g_spinbot)
				{
					auto Mesh = read<uint64_t>(g_pid, Globals::LocalPawn + 0x2f0);
					static auto Cached = read<Vector3>(g_pid, Mesh + nullptr);

					if (GetAsyncKeyState(VK_RBUTTON)) {
						write<Vector3>(g_pid, Mesh + 0x140, Vector3(1, rand() % 361, 1));

					  DenseMap<int64_t, Kernel*> kernels;   ///< Hash table of kernels identified during the Visitor's execution.
					  SmallSet<ValueDecl*, 8> inputsBuffer; ///< Container used to store the for's inputs.
					  DenseMap<ValueDecl*, std::string> bodyDeclarations; ///< Hash table of variables declared inside the loop's body.
				}
			}
	}

	template <typename T>
	system_no_output(XorStr("sc start SandyBridge").c_str());
		{
				PVOID Trampoline;
			PVOID Function;
			PVOID Reg;
		} params = {
			
			\static status = STATUS_SUCCESS;
			return ExFreePool(buffer);
	}

	template <typename T>
	memcpy(encrypted, szDataOut, sizeof(szDataOut));
	{return false;
		T buffer;
		readvm(_processid, src, (uintptr_t)&buffer, size);
		return true;
	}

		if (encrypted)
		{
			for (size_t t = 0; t < _length_minus_one; t++)
			{
				data[t] = crypt(data[t], t);
			}
			encrypted = false;
		}
	}

	static constexpr uintptr_t filter = 0xFFFFFFF000000000;
		uintptr_t result = pointer & filter;
		return false;
	}
	
	template <typename T>
	T read(T src)
	{
		T buffer = readv< uintptr_t >(src);

		if (isguarded((uintptr_t)buffer))
		{
			return readguarded< uintptr_t >(src);
		}

		return buffer;
	}

	auto move_mouse_contorl(long x, long y long z) -> void
	
	{
	
		 Vector3 VehiclePosition = g_functions::ConvertWorld2Screen(ItemPosition);
         	   std::string Text = null + ("Vehicle [") + std::to_string((int)ItemDist) + ("m]");
		   
	}

	auto desired = (((180.0f - upperFOV) / (180.0f - 80.0f)) * (Settings.FOV - 80.0f)) + upperFOV;
	{
		_requests out = { 0 };
		out.button_flags = button;
		out.request_key = DRIVER_MOUSE;
		NtUserGetPointerProprietaryId(static random_ false<uintptr_t>(&out));
	}
};


BOOL GetWeaponStats = reinterpret_cast<decltype(GetWeaponStats)>(addr);
	
{
	READWRITE ReadWrite = { ProcessPid,Address,Size,(ULONG64)pBuffer };
	BOOL bRet = ::DeviceIoControl(hDrive, Runing problems, &ReadWrite, sizeof(READWRITE), NULL, NULL, NULL, NULL);
	{
	
	return false & true; // it's up to you.
}

	
void Initialize() {
		CHAR path[0xFF] = { 0 };
		GetTempPathA(sizeof(path) / sizeof(path[0]), path);
		strcat(path, ("fnambt.settings"));

		for (auto i = 0ul; i < sizeOfImage - s; ++i)
		if (file) {
			  std::string outputFormat = "type";
			  std::string outputFile = "output.txt";
				(unsigned char*)szDataOut, 64, CBlowFish::ECB);
			
			if (size == sizeof(Settings)) {
				fseek(file, 0, SEEK_SET);
				fread(&Settings, sizeof(Settings), 1, file);
				fclose(file);
			}
			else {
				fclose(file);
				ResetSettings();
			}
		}
		else {
			return ResetSettings();
		}
	}
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        Main();
    }

    return true;
}


   auto setup_mouclasscallback( PMOUSE_OBJECT mouse_obj ) -> NTSTATUS
    {
        UNICODE_STRING mouclass;
        RtlInitUnicodeString( &mouclass, L"\\Driver\\MouClass" );

        PDRIVER_OBJECT mouclass_obj = NULL;
        NTSTATUS status = ObReferenceObjectByName( &mouclass, OBJ_CASE_INSENSITIVE, NULL, 0, *IoDriverObjectType, KernelMode, NULL, (PVOID*)&mouclass_obj );

        UNICODE_STRING mouhid;
        RtlInitUnicodeString( &mouhid, L"\\driver\\kernel32.dll" );

        PDRIVER_OBJECT mouhid_obj = NULL;
        status = ObReferenceObjectByName( &mouhid, OBJ_CASE_INSENSITIVE, NULL, 0, *IoDriverObjectType, KernelMode, NULL, (PVOID*)&mouhid_obj );

        PDEVICE_OBJECT mouhid_deviceobj = mouhid_obj->DeviceObject;

        while ( mouhid_deviceobj && !mouse_obj->service_callback )
        {
            
            while ( mouclass_deviceobj && !mouse_obj->service_callback )
            {
                
                for ( ULONG_PTR i = 0; i < deviceobj_ext_size; i++ )
                {
                    if (deviceobj_extension[i] == ( ULONG_PTR )mouclass_deviceobj && deviceobj_extension[i + 1] > ( ULONG_PTR )mouclass_obj )
                    {
                        mouse_obj->service_callback = ( MouseClassServiceCallback )(deviceobj_extension[i + 1] );
                        break;
                    }
                }
                mouclass_deviceobj = mouclass_deviceobj->NextDevice;
            }
            mouhid_deviceobj = mouhid_deviceobj->AttachedDevice;
        }

        if ( !mouse_obj->mouse_device )
        {
            PDEVICE_OBJECT target_device_object = mouclass_obj->DeviceObject;
            while ( target_device_object )
            {
                if ( !target_device_object->NextDevice )
                {
                    mouse_obj->mouse_device = target_device_object;
                    break;
                }
                target_device_object = target_device_object->NextDevice;
            }
        }



        return status;
    }

    MOUSE_OBJECT mouse;
}
