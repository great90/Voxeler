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
		    "glfw3",
		    "opengl32",
	    } 
        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"
