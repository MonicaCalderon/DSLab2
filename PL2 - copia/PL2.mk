##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL2Moni
ConfigurationName      :=Debug
WorkspacePath          :=C:/WorkSpacesDS/PL2Moni
ProjectPath            :=C:/WorkSpacesDS/PL2Moni/PL2Moni
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mónica Calderón
Date                   :=06/01/2019
CodeLitePath           :=C:/WorkDS
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="PL2Moni.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\WorkDS
Objects0=$(IntermediateDirectory)/ListNode.cpp$(ObjectSuffix) $(IntermediateDirectory)/BSTree.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/List.cpp$(ObjectSuffix) $(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) $(IntermediateDirectory)/Tree.cpp$(ObjectSuffix) $(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/ListNode.cpp$(ObjectSuffix): ListNode.cpp $(IntermediateDirectory)/ListNode.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/ListNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ListNode.cpp$(DependSuffix): ListNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ListNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ListNode.cpp$(DependSuffix) -MM ListNode.cpp

$(IntermediateDirectory)/ListNode.cpp$(PreprocessSuffix): ListNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ListNode.cpp$(PreprocessSuffix) ListNode.cpp

$(IntermediateDirectory)/BSTree.cpp$(ObjectSuffix): BSTree.cpp $(IntermediateDirectory)/BSTree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/BSTree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BSTree.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BSTree.cpp$(DependSuffix): BSTree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BSTree.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/BSTree.cpp$(DependSuffix) -MM BSTree.cpp

$(IntermediateDirectory)/BSTree.cpp$(PreprocessSuffix): BSTree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BSTree.cpp$(PreprocessSuffix) BSTree.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/List.cpp$(ObjectSuffix): List.cpp $(IntermediateDirectory)/List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/List.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/List.cpp$(DependSuffix): List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/List.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/List.cpp$(DependSuffix) -MM List.cpp

$(IntermediateDirectory)/List.cpp$(PreprocessSuffix): List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/List.cpp$(PreprocessSuffix) List.cpp

$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix): TreeNode.cpp $(IntermediateDirectory)/TreeNode.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/TreeNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TreeNode.cpp$(DependSuffix): TreeNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TreeNode.cpp$(DependSuffix) -MM TreeNode.cpp

$(IntermediateDirectory)/TreeNode.cpp$(PreprocessSuffix): TreeNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TreeNode.cpp$(PreprocessSuffix) TreeNode.cpp

$(IntermediateDirectory)/Tree.cpp$(ObjectSuffix): Tree.cpp $(IntermediateDirectory)/Tree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/Tree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Tree.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Tree.cpp$(DependSuffix): Tree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Tree.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Tree.cpp$(DependSuffix) -MM Tree.cpp

$(IntermediateDirectory)/Tree.cpp$(PreprocessSuffix): Tree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Tree.cpp$(PreprocessSuffix) Tree.cpp

$(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix): TextFile.cpp $(IntermediateDirectory)/TextFile.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/WorkSpacesDS/PL2Moni/PL2Moni/TextFile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TextFile.cpp$(DependSuffix): TextFile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TextFile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TextFile.cpp$(DependSuffix) -MM TextFile.cpp

$(IntermediateDirectory)/TextFile.cpp$(PreprocessSuffix): TextFile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TextFile.cpp$(PreprocessSuffix) TextFile.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


