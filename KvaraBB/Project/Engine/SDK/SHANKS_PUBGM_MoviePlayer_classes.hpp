#pragma once


 
namespace SDK
{






class UMoviePlayerSettings : public UObject
{
public:
	bool                                               bWaitForMoviesToComplete;                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FString>                             bMoviesAreSkippable;                                      
	TArray<struct FString>                             StartupMovies;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MoviePlayer.MoviePlayerSettings");
		return pStaticClass;
	}

};


}

