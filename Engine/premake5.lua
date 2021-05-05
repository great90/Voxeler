workspace "Voxeler"
    configurations { "Debug" }

    project "Voxeler"
        
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++17"
        targetdir "%{wks.location}/bin/%{cfg.buildcfg}"

        files { "**/*.cpp", "**/*.h" , "**/*.hpp" , "*.h" , "*.hpp" , "*.cpp"}
        includedirs {"%{wks.location}/Vendor/includes",}          

        libdirs {"%{wks.location}/Vendor/libs",}

        links {
		    "glfw3.lib",
		    "opengl32.lib",
	    } 
        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"
