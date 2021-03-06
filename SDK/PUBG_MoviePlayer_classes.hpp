#pragma once

// PlayerUnknown's Battlegrounds (2.6.30.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MoviePlayer.MoviePlayerSettings
// 0x0018 (0x0040 - 0x0028)
class UMoviePlayerSettings : public UObject
{
public:
	unsigned char                                      bWaitForMoviesToComplete : 1;                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      bMoviesAreSkippable : 1;                                  // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	TArray<struct FString>                             StartupMovies;                                            // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MoviePlayer.MoviePlayerSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
