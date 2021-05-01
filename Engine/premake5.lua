workspace "Voxeler"
    configurations { "Debug" }

    project "Voxeler"
        
        kind "ConsoleApp"
        language "C++"
        targetdir "bin/%{cfg.buildcfg}"

        files { "**/*.cpp", "**/*.h" , "**/*.hpp"}

        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"
