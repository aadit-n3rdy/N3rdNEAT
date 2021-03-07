workspace "N3rNEAT"
	  configurations {"Debug", "Release"}

project "N3rdNEAT"
	kind "SharedLib"
	language "C++"
	targetdir "bin"

	files {"src/*.cpp", "src/*.h"}

	filter "configurations:Debug"
	       defines { "DEBUG" }
	       symbols "On"

	filter "configurations:Release"
	       defines { "NDEBUG" }
	       symbols "Off"
