##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL2
ConfigurationName      :=Debug
WorkspacePath          :=C:/WorkSpacesDS/PL2
ProjectPath            :=C:/WorkSpacesDS/PL2/PL2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mónica Calderón
Date                   :=03/12/2018
CodeLitePath           :=C:/WorkDS
LinkerName             :=F:/PROGRAMAS/TDM-GCC/bin/g++.exe
SharedObjectLinkerName :=F:/PROGRAMAS/TDM-GCC/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PL2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=F:/PROGRAMAS/TDM-GCC/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := F:/PROGRAMAS/TDM-GCC/bin/ar.exe rcu
CXX      := F:/PROGRAMAS/TDM-GCC/bin/g++.exe
CC       := F:/PROGRAMAS/TDM-GCC/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := F:/PROGRAMAS/TDM-GCC/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\WorkDS
Objects0=$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix) $(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix): Serie.cpp $(IntermediateDirectory)/Serie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2/PL2/Serie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Serie.cpp$(DependSuffix): Serie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Serie.cpp$(DependSuffix) -MM Serie.cpp

$(IntermediateDirectory)/Serie.cpp$(PreprocessSuffix): Serie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Serie.cpp$(PreprocessSuffix) Serie.cpp

$(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix): TextFile.cpp $(IntermediateDirectory)/TextFile.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2/PL2/TextFile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TextFile.cpp$(DependSuffix): TextFile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TextFile.cpp$(DependSuffix) -MM TextFile.cpp

$(IntermediateDirectory)/TextFile.cpp$(PreprocessSuffix): TextFile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TextFile.cpp$(PreprocessSuffix) TextFile.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2/PL2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


