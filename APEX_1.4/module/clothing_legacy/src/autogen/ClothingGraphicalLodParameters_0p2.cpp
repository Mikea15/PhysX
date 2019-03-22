//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018-2019 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "ClothingGraphicalLodParameters_0p2.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ClothingGraphicalLodParameters_0p2NS;

const char* const ClothingGraphicalLodParameters_0p2Factory::vptr =
    NvParameterized::getVptr<ClothingGraphicalLodParameters_0p2, ClothingGraphicalLodParameters_0p2::ClassAlignment>();

const uint32_t NumParamDefs = 31;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 3, 4, 5, 6, 7, 9, 17, 23, 24, 25, 2, 8, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20,
	21, 22, 26, 27, 28, 29, 30,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 11 },
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->platforms), CHILDREN(11), 1 }, // platforms
	{ TYPE_STRING, false, 1 * sizeof(NvParameterized::DummyStringStruct), NULL, 0 }, // platforms[]
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->lod), NULL, 0 }, // lod
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->physicalMeshId), NULL, 0 }, // physicalMeshId
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->renderMeshAsset), NULL, 0 }, // renderMeshAsset
	{ TYPE_POINTER, false, (size_t)(&((ParametersStruct*)0)->renderMeshAssetPointer), NULL, 0 }, // renderMeshAssetPointer
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->immediateClothMap), CHILDREN(12), 1 }, // immediateClothMap
	{ TYPE_U32, false, 1 * sizeof(uint32_t), NULL, 0 }, // immediateClothMap[]
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->skinClothMapB), CHILDREN(13), 1 }, // skinClothMapB
	{ TYPE_STRUCT, false, 1 * sizeof(SkinClothMapB_Type), CHILDREN(14), 6 }, // skinClothMapB[]
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapB_Type*)0)->vtxTetraBary), NULL, 0 }, // skinClothMapB[].vtxTetraBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->vertexIndexPlusOffset), NULL, 0 }, // skinClothMapB[].vertexIndexPlusOffset
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapB_Type*)0)->nrmTetraBary), NULL, 0 }, // skinClothMapB[].nrmTetraBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->faceIndex0), NULL, 0 }, // skinClothMapB[].faceIndex0
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->tetraIndex), NULL, 0 }, // skinClothMapB[].tetraIndex
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->submeshIndex), NULL, 0 }, // skinClothMapB[].submeshIndex
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->skinClothMapC), CHILDREN(20), 1 }, // skinClothMapC
	{ TYPE_STRUCT, false, 1 * sizeof(SkinClothMapC_Type), CHILDREN(21), 4 }, // skinClothMapC[]
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapC_Type*)0)->vertexBary), NULL, 0 }, // skinClothMapC[].vertexBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapC_Type*)0)->faceIndex0), NULL, 0 }, // skinClothMapC[].faceIndex0
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapC_Type*)0)->normalBary), NULL, 0 }, // skinClothMapC[].normalBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapC_Type*)0)->vertexIndexPlusOffset), NULL, 0 }, // skinClothMapC[].vertexIndexPlusOffset
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->skinClothMapThickness), NULL, 0 }, // skinClothMapThickness
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->skinClothMapOffset), NULL, 0 }, // skinClothMapOffset
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->tetraMap), CHILDREN(25), 1 }, // tetraMap
	{ TYPE_STRUCT, false, 1 * sizeof(TetraLink_Type), CHILDREN(26), 4 }, // tetraMap[]
	{ TYPE_VEC3, false, (size_t)(&((TetraLink_Type*)0)->vertexBary), NULL, 0 }, // tetraMap[].vertexBary
	{ TYPE_U32, false, (size_t)(&((TetraLink_Type*)0)->tetraIndex0), NULL, 0 }, // tetraMap[].tetraIndex0
	{ TYPE_VEC3, false, (size_t)(&((TetraLink_Type*)0)->normalBary), NULL, 0 }, // tetraMap[].normalBary
	{ TYPE_U32, false, (size_t)(&((TetraLink_Type*)0)->_dummyForAlignment), NULL, 0 }, // tetraMap[]._dummyForAlignment
};


bool ClothingGraphicalLodParameters_0p2::mBuiltFlag = false;
NvParameterized::MutexType ClothingGraphicalLodParameters_0p2::mBuiltFlagMutex;

ClothingGraphicalLodParameters_0p2::ClothingGraphicalLodParameters_0p2(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ClothingGraphicalLodParameters_0p2FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ClothingGraphicalLodParameters_0p2::~ClothingGraphicalLodParameters_0p2()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ClothingGraphicalLodParameters_0p2::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ClothingGraphicalLodParameters_0p2();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ClothingGraphicalLodParameters_0p2::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* ClothingGraphicalLodParameters_0p2::getParameterDefinitionTree(void) const
{
	ClothingGraphicalLodParameters_0p2* tmpParam = const_cast<ClothingGraphicalLodParameters_0p2*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType ClothingGraphicalLodParameters_0p2::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType ClothingGraphicalLodParameters_0p2::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void ClothingGraphicalLodParameters_0p2::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ClothingGraphicalLodParameters_0p2::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */
/* [0] - platforms (not an array of structs) */

void ClothingGraphicalLodParameters_0p2::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void ClothingGraphicalLodParameters_0p2::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="platforms"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("platforms", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The assets can be prepared for different platforms. This string specifies for which\nplatforms this LOD is kept in the asset.\n", true);
		HintTable[1].init("shortDescription", "Platforms on this lod is used.", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
		static const uint8_t dynHandleIndices[1] = { 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 1);

	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="platforms[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("platforms", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The assets can be prepared for different platforms. This string specifies for which\nplatforms this LOD is kept in the asset.\n", true);
		HintTable[1].init("shortDescription", "Platforms on this lod is used.", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="lod"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("lod", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Even for a small number of LoDs, the LoD value does not have to be continuous. An Asset\ncan have 3 LoDs at leve 0, 3 and 6.\n", true);
		HintTable[1].init("shortDescription", "The actual LoD value", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="physicalMeshId"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("physicalMeshId", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This indexes a physical mesh from the physicalMesh Array in the ClothingAsset. Different\ngraphical LoDs can share a physical mesh.\n", true);
		HintTable[1].init("shortDescription", "Index of the physical mesh used for this graphical mesh.", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="renderMeshAsset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("renderMeshAsset", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		HintTable[1].init("longDescription", "Each LoD must have a unique render mesh asset.\n", true);
		HintTable[2].init("shortDescription", "The render mesh asset used for this LoD level", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "RenderMeshAssetParameters" };
		ParamDefTable[5].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="renderMeshAssetPointer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("renderMeshAssetPointer", TYPE_POINTER, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DONOTSERIALIZE", uint64_t(1), true);
		HintTable[1].init("TYPE", "NiApexRenderMeshAsset", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DONOTSERIALIZE", uint64_t(1), true);
		HintTable[1].init("TYPE", "NiApexRenderMeshAsset", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="immediateClothMap"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("immediateClothMap", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If some vertices can not be mapped properly, they will use the skinClothMapB to tie to the physical mesh.\n", true);
		HintTable[1].init("shortDescription", "Directly map some of the physically simulated vertices on the graphical mesh", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="immediateClothMap[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("immediateClothMap", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If some vertices can not be mapped properly, they will use the skinClothMapB to tie to the physical mesh.\n", true);
		HintTable[1].init("shortDescription", "Directly map some of the physically simulated vertices on the graphical mesh", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="skinClothMapB"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("skinClothMapB", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates and implicit tetrahedrons.", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="skinClothMapB[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("skinClothMapB", TYPE_STRUCT, "SkinClothMapB", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates and implicit tetrahedrons.", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="skinClothMapB[].vtxTetraBary"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("vtxTetraBary", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate into the implicit tetrahedron.", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="skinClothMapB[].vertexIndexPlusOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("vertexIndexPlusOffset", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The vertex index in the graphical mesh (the target index).", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="skinClothMapB[].nrmTetraBary"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("nrmTetraBary", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate of (vertex+normal). When vertex is subtracted this will result in the normal again.", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="skinClothMapB[].faceIndex0"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("faceIndex0", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "First index of the 3 consecutive indices making the physical triangle.", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="skinClothMapB[].tetraIndex"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("tetraIndex", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Selects which of the 6 implicit tetrahedrons is used for the mapping.", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="skinClothMapB[].submeshIndex"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("submeshIndex", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("DONOTSERIALIZE", uint64_t(1), true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("DONOTSERIALIZE", uint64_t(1), true);
		HintTable[1].init("longDescription", "This is only needed during the authoring stage and thus does not need to be serialized.", true);
		HintTable[2].init("shortDescription", "Index into which Physical Submesh/LoD this element of the mapping belongs to.", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="skinClothMapC"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("skinClothMapC", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates.", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="skinClothMapC[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("skinClothMapC", TYPE_STRUCT, "SkinClothMapC", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates.", true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="skinClothMapC[].vertexBary"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("vertexBary", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate into the triangle.", true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="skinClothMapC[].faceIndex0"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("faceIndex0", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "First index of the 3 consecutive indices making the physical triangle.", true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="skinClothMapC[].normalBary"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("normalBary", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate of (vertex+normal). When vertex is subtracted this will result in the normal again.", true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="skinClothMapC[].vertexIndexPlusOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("vertexIndexPlusOffset", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The vertex index in the graphical mesh (the target index).", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="skinClothMapThickness"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("skinClothMapThickness", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("READONLY", uint64_t(1), true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("READONLY", uint64_t(1), true);
		HintTable[1].init("longDescription", "The physical mesh is expanded to both directions with this thickness, resulting in the doubled thickness.\nOnly used for Mesh-Mesh Skinning.\n", true);
		HintTable[2].init("shortDescription", "Thickness of the mesh implicitly defined around the flat physical (triangle) mesh.", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="skinClothMapOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("skinClothMapOffset", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("READONLY", uint64_t(1), true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("READONLY", uint64_t(1), true);
		HintTable[1].init("longDescription", "The length of the normals when added to the vertex to generate the barycentric coordinates.\n", true);
		HintTable[2].init("shortDescription", "Normal offset of the mesh implicitly defined around the flat physical (triangle) mesh.", true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=25, longName="tetraMap"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[25];
		ParamDef->init("tetraMap", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This map is only used when the physical mesh is based on tetrahedrons.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated tetrahedron.", true);
		ParamDefTable[25].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=26, longName="tetraMap[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[26];
		ParamDef->init("tetraMap", TYPE_STRUCT, "TetraLink", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This map is only used when the physical mesh is based on tetrahedrons.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated tetrahedron.", true);
		ParamDefTable[26].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=27, longName="tetraMap[].vertexBary"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[27];
		ParamDef->init("vertexBary", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate into the tetrahedron.", true);
		ParamDefTable[27].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=28, longName="tetraMap[].tetraIndex0"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[28];
		ParamDef->init("tetraIndex0", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "First index of the 4 consecutive indices making the physical tetrahedron.", true);
		ParamDefTable[28].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=29, longName="tetraMap[].normalBary"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[29];
		ParamDef->init("normalBary", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate of (vertex+normal). When vertex is subtracted this will result in the normal again.", true);
		ParamDefTable[29].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=30, longName="tetraMap[]._dummyForAlignment"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[30];
		ParamDef->init("_dummyForAlignment", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("DONOTSERIALIZE", uint64_t(1), true);
		ParamDefTable[30].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DONOTSERIALIZE", uint64_t(1), true);
		HintTable[1].init("shortDescription", "Does not hold any data, only helps the alignment of the struct.", true);
		ParamDefTable[30].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[11];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(3);
		Children[2] = PDEF_PTR(4);
		Children[3] = PDEF_PTR(5);
		Children[4] = PDEF_PTR(6);
		Children[5] = PDEF_PTR(7);
		Children[6] = PDEF_PTR(9);
		Children[7] = PDEF_PTR(17);
		Children[8] = PDEF_PTR(23);
		Children[9] = PDEF_PTR(24);
		Children[10] = PDEF_PTR(25);

		ParamDefTable[0].setChildren(Children, 11);
	}

	// SetChildren for: nodeIndex=1, longName="platforms"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(2);

		ParamDefTable[1].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=7, longName="immediateClothMap"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(8);

		ParamDefTable[7].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=9, longName="skinClothMapB"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(10);

		ParamDefTable[9].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=10, longName="skinClothMapB[]"
	{
		static Definition* Children[6];
		Children[0] = PDEF_PTR(11);
		Children[1] = PDEF_PTR(12);
		Children[2] = PDEF_PTR(13);
		Children[3] = PDEF_PTR(14);
		Children[4] = PDEF_PTR(15);
		Children[5] = PDEF_PTR(16);

		ParamDefTable[10].setChildren(Children, 6);
	}

	// SetChildren for: nodeIndex=17, longName="skinClothMapC"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(18);

		ParamDefTable[17].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=18, longName="skinClothMapC[]"
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(19);
		Children[1] = PDEF_PTR(20);
		Children[2] = PDEF_PTR(21);
		Children[3] = PDEF_PTR(22);

		ParamDefTable[18].setChildren(Children, 4);
	}

	// SetChildren for: nodeIndex=25, longName="tetraMap"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(26);

		ParamDefTable[25].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=26, longName="tetraMap[]"
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(27);
		Children[1] = PDEF_PTR(28);
		Children[2] = PDEF_PTR(29);
		Children[3] = PDEF_PTR(30);

		ParamDefTable[26].setChildren(Children, 4);
	}

	mBuiltFlag = true;

}
void ClothingGraphicalLodParameters_0p2::initStrings(void)
{
}

void ClothingGraphicalLodParameters_0p2::initDynamicArrays(void)
{
	platforms.buf = NULL;
	platforms.isAllocated = true;
	platforms.elementSize = sizeof(NvParameterized::DummyStringStruct);
	platforms.arraySizes[0] = 0;
	immediateClothMap.buf = NULL;
	immediateClothMap.isAllocated = true;
	immediateClothMap.elementSize = sizeof(uint32_t);
	immediateClothMap.arraySizes[0] = 0;
	skinClothMapB.buf = NULL;
	skinClothMapB.isAllocated = true;
	skinClothMapB.elementSize = sizeof(SkinClothMapB_Type);
	skinClothMapB.arraySizes[0] = 0;
	skinClothMapC.buf = NULL;
	skinClothMapC.isAllocated = true;
	skinClothMapC.elementSize = sizeof(SkinClothMapC_Type);
	skinClothMapC.arraySizes[0] = 0;
	tetraMap.buf = NULL;
	tetraMap.isAllocated = true;
	tetraMap.elementSize = sizeof(TetraLink_Type);
	tetraMap.arraySizes[0] = 0;
}

void ClothingGraphicalLodParameters_0p2::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	lod = uint32_t(0);
	physicalMeshId = uint32_t(-1);
	renderMeshAssetPointer = NULL;
	skinClothMapThickness = float(0);
	skinClothMapOffset = float(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ClothingGraphicalLodParameters_0p2::initReferences(void)
{
	renderMeshAsset = NULL;

}

void ClothingGraphicalLodParameters_0p2::freeDynamicArrays(void)
{
	if (platforms.isAllocated && platforms.buf)
	{
		mParameterizedTraits->free(platforms.buf);
	}
	if (immediateClothMap.isAllocated && immediateClothMap.buf)
	{
		mParameterizedTraits->free(immediateClothMap.buf);
	}
	if (skinClothMapB.isAllocated && skinClothMapB.buf)
	{
		mParameterizedTraits->free(skinClothMapB.buf);
	}
	if (skinClothMapC.isAllocated && skinClothMapC.buf)
	{
		mParameterizedTraits->free(skinClothMapC.buf);
	}
	if (tetraMap.isAllocated && tetraMap.buf)
	{
		mParameterizedTraits->free(tetraMap.buf);
	}
}

void ClothingGraphicalLodParameters_0p2::freeStrings(void)
{

	for (int i = 0; i < platforms.arraySizes[0]; ++i)
	{
		if (platforms.buf[i].isAllocated && platforms.buf[i].buf)
		{
			mParameterizedTraits->strfree((char*)platforms.buf[i].buf);
		}
	}
}

void ClothingGraphicalLodParameters_0p2::freeReferences(void)
{
	if (renderMeshAsset)
	{
		renderMeshAsset->destroy();
	}

}

} // namespace parameterized
} // namespace nvidia
