workspace "Voxeler"
    configurations { "Debug" }

    project "Voxeler"
        
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++17"
        targetdir "bin/%{cfg.buildcfg}"

        files { "**/*.cpp", "**/*.h" , "**/*.hpp" , "*.h" , "*.hpp" , "*.cpp"}
        includedirs {"Vendor/includes",}          

        libdirs {"Vendor/libs",}

        links {
		    "glfw3.lib",
		    "opengl32.lib",
	    } 
        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"
