workspace "Voxeler"
    configurations { "Debug" }

    project "Voxeler"
        
        kind "ConsoleApp"
        language "C++"
        targetdir "bin/%{cfg.buildcfg}"

        files { "**/*.cpp", "**/*.h" }

        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"
