workspace "Voxeler"
    configurations { "Debug" }

    project "Voxeler"
        
        kind "ConsoleApp"
        language "C++"
        targetdir "bin/%{cfg.buildcfg}"

        files { "**/*.cpp", "**/*.h" , "**/*.hpp"}
        includedirs {"Vendor/GLFW/include",}          

        libdirs {"Vendor/GLFW/vc-2019/",}

        links {
		    "glfw3.lib",
		    "opengl32.lib",
	    } 
        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"
