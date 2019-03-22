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


#ifndef HEADER_DestructibleAssetParameters_0p25_h
#define HEADER_DestructibleAssetParameters_0p25_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace parameterized
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace DestructibleAssetParameters_0p25NS
{

struct BehaviorGroup_Type;
struct Chunk_Type;
struct InstanceInfo_Type;
struct GroupsMask_Type;
struct ShapeDescFlags_Type;
struct ShapeDescTemplate_Type;
struct ContactPairFlag_Type;
struct ActorDescFlags_Type;
struct ActorDescTemplate_Type;
struct BodyDescFlags_Type;
struct BodyDescTemplate_Type;
struct DestructibleDepthParameters_Type;
struct DestructibleParametersFlag_Type;
struct FractureGlass_Type;
struct FractureVoronoi_Type;
struct FractureAttachment_Type;
struct RuntimeFracture_Type;
struct DestructibleParameters_Type;
struct DamageSpreadFunction_Type;
struct Plane_Type;

struct BehaviorGroup_DynamicArray1D_Type
{
	BehaviorGroup_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct Chunk_DynamicArray1D_Type
{
	Chunk_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct REF_DynamicArray1D_Type
{
	NvParameterized::Interface** buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct U32_DynamicArray1D_Type
{
	uint32_t* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct DestructibleDepthParameters_DynamicArray1D_Type
{
	DestructibleDepthParameters_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct InstanceInfo_DynamicArray1D_Type
{
	InstanceInfo_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct STRING_DynamicArray1D_Type
{
	NvParameterized::DummyStringStruct* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct MAT44_DynamicArray1D_Type
{
	physx::PxMat44* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct U8_DynamicArray1D_Type
{
	uint8_t* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct DestructibleDepthParameters_Type
{
	bool OVERRIDE_IMPACT_DAMAGE;
	bool OVERRIDE_IMPACT_DAMAGE_VALUE;
	bool IGNORE_POSE_UPDATES;
	bool IGNORE_RAYCAST_CALLBACKS;
	bool IGNORE_CONTACT_CALLBACKS;
	bool USER_FLAG_0;
	bool USER_FLAG_1;
	bool USER_FLAG_2;
	bool USER_FLAG_3;
};
struct GroupsMask_Type
{
	bool useGroupsMask;
	uint32_t bits0;
	uint32_t bits1;
	uint32_t bits2;
	uint32_t bits3;
};
struct DestructibleParametersFlag_Type
{
	bool ACCUMULATE_DAMAGE;
	bool DEBRIS_TIMEOUT;
	bool DEBRIS_MAX_SEPARATION;
	bool CRUMBLE_SMALLEST_CHUNKS;
	bool ACCURATE_RAYCASTS;
	bool USE_VALID_BOUNDS;
	bool CRUMBLE_VIA_RUNTIME_FRACTURE;
};
struct ShapeDescFlags_Type
{
	bool NX_TRIGGER_ON_ENTER;
	bool NX_TRIGGER_ON_LEAVE;
	bool NX_TRIGGER_ON_STAY;
	bool NX_SF_VISUALIZATION;
	bool NX_SF_DISABLE_COLLISION;
	bool NX_SF_FEATURE_INDICES;
	bool NX_SF_DISABLE_RAYCASTING;
	bool NX_SF_POINT_CONTACT_FORCE;
	bool NX_SF_FLUID_DRAIN;
	bool NX_SF_FLUID_DISABLE_COLLISION;
	bool NX_SF_FLUID_TWOWAY;
	bool NX_SF_DISABLE_RESPONSE;
	bool NX_SF_DYNAMIC_DYNAMIC_CCD;
	bool NX_SF_DISABLE_SCENE_QUERIES;
	bool NX_SF_CLOTH_DRAIN;
	bool NX_SF_CLOTH_DISABLE_COLLISION;
	bool NX_SF_CLOTH_TWOWAY;
	bool NX_SF_SOFTBODY_DRAIN;
	bool NX_SF_SOFTBODY_DISABLE_COLLISION;
	bool NX_SF_SOFTBODY_TWOWAY;
};
struct ShapeDescTemplate_Type
{
	ShapeDescFlags_Type flags;
	uint16_t collisionGroup;
	GroupsMask_Type groupsMask;
	uint16_t materialIndex;
	float density;
	float skinWidth;
	uint64_t userData;
	uint64_t name;
};
struct InstanceInfo_Type
{
	uint16_t partIndex;
	physx::PxVec3 chunkPositionOffset;
	physx::PxVec2 chunkUVOffset;
};
struct Plane_Type
{
	physx::PxVec3 normal;
	float d;
};
struct FractureGlass_Type
{
	uint32_t numSectors;
	float sectorRand;
	float firstSegmentSize;
	float segmentScale;
	float segmentRand;
};
struct DamageSpreadFunction_Type
{
	float minimumRadius;
	float radiusMultiplier;
	float falloffExponent;
};
struct BehaviorGroup_Type
{
	NvParameterized::DummyStringStruct name;
	float damageThreshold;
	float damageToRadius;
	DamageSpreadFunction_Type damageSpread;
	DamageSpreadFunction_Type damageColorSpread;
	physx::PxVec4 damageColorChange;
	float materialStrength;
	float density;
	float fadeOut;
	float maxDepenetrationVelocity;
	uint64_t userData;
};
struct FractureVoronoi_Type
{
	physx::PxVec3 dimensions;
	uint32_t numCells;
	float biasExp;
	float maxDist;
};
struct ContactPairFlag_Type
{
	bool NX_IGNORE_PAIR;
	bool NX_NOTIFY_ON_START_TOUCH;
	bool NX_NOTIFY_ON_END_TOUCH;
	bool NX_NOTIFY_ON_TOUCH;
	bool NX_NOTIFY_ON_IMPACT;
	bool NX_NOTIFY_ON_ROLL;
	bool NX_NOTIFY_ON_SLIDE;
	bool NX_NOTIFY_FORCES;
	bool NX_NOTIFY_ON_START_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_ON_END_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_ON_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_CONTACT_MODIFICATION;
};
struct BodyDescFlags_Type
{
	bool NX_BF_DISABLE_GRAVITY;
	bool NX_BF_FILTER_SLEEP_VEL;
	bool NX_BF_ENERGY_SLEEP_TEST;
	bool NX_BF_VISUALIZATION;
};
struct BodyDescTemplate_Type
{
	BodyDescFlags_Type flags;
	float wakeUpCounter;
	float linearDamping;
	float angularDamping;
	float maxAngularVelocity;
	float CCDMotionThreshold;
	float sleepLinearVelocity;
	float sleepAngularVelocity;
	uint32_t solverIterationCount;
	float sleepEnergyThreshold;
	float sleepDamping;
	float contactReportThreshold;
};
struct FractureAttachment_Type
{
	bool posX;
	bool negX;
	bool posY;
	bool negY;
	bool posZ;
	bool negZ;
};
struct RuntimeFracture_Type
{
	const char* RuntimeFractureType;
	bool sheetFracture;
	uint32_t depthLimit;
	bool destroyIfAtDepthLimit;
	float minConvexSize;
	float impulseScale;
	FractureGlass_Type glass;
	FractureVoronoi_Type voronoi;
	FractureAttachment_Type attachment;
};
struct DestructibleParameters_Type
{
	float damageCap;
	float forceToDamage;
	float impactVelocityThreshold;
	uint32_t minimumFractureDepth;
	int32_t impactDamageDefaultDepth;
	int32_t debrisDepth;
	uint32_t essentialDepth;
	float debrisLifetimeMin;
	float debrisLifetimeMax;
	float debrisMaxSeparationMin;
	float debrisMaxSeparationMax;
	float debrisDestructionProbability;
	physx::PxBounds3 validBounds;
	float maxChunkSpeed;
	DestructibleParametersFlag_Type flags;
	float fractureImpulseScale;
	uint16_t damageDepthLimit;
	uint16_t dynamicChunkDominanceGroup;
	GroupsMask_Type dynamicChunksGroupsMask;
	RuntimeFracture_Type runtimeFracture;
	float supportStrength;
	int8_t legacyChunkBoundsTestSetting;
	int8_t legacyDamageRadiusSpreadSetting;
};
struct Chunk_Type
{
	uint16_t depth;
	uint16_t parentIndex;
	uint16_t firstChildIndex;
	uint16_t numChildren;
	uint16_t meshPartIndex;
	uint16_t flags;
	physx::PxVec3 surfaceNormal;
	int8_t behaviorGroupIndex;
	uint16_t firstScatterMesh;
	uint16_t scatterMeshCount;
};
struct ActorDescFlags_Type
{
	bool NX_AF_DISABLE_COLLISION;
	bool NX_AF_DISABLE_RESPONSE;
	bool NX_AF_LOCK_COM;
	bool NX_AF_FLUID_DISABLE_COLLISION;
	bool NX_AF_CONTACT_MODIFICATION;
	bool NX_AF_FORCE_CONE_FRICTION;
	bool NX_AF_USER_ACTOR_PAIR_FILTERING;
};
struct ActorDescTemplate_Type
{
	ActorDescFlags_Type flags;
	float density;
	uint16_t actorCollisionGroup;
	uint16_t dominanceGroup;
	ContactPairFlag_Type contactReportFlags;
	uint16_t forceFieldMaterial;
	uint64_t userData;
	uint64_t name;
	uint64_t compartment;
};

struct ParametersStruct
{

	NvParameterized::DummyStringStruct comments;
	uint32_t depthCount;
	uint32_t originalDepthCount;
	physx::PxBounds3 bounds;
	BehaviorGroup_Type defaultBehaviorGroup;
	BehaviorGroup_DynamicArray1D_Type behaviorGroups;
	int8_t RTFractureBehaviorGroup;
	Chunk_DynamicArray1D_Type chunks;
	REF_DynamicArray1D_Type chunkConvexHulls;
	U32_DynamicArray1D_Type chunkConvexHullStartIndices;
	DestructibleParameters_Type destructibleParameters;
	DestructibleDepthParameters_DynamicArray1D_Type depthParameters;
	NvParameterized::DummyStringStruct crumbleEmitterName;
	NvParameterized::DummyStringStruct dustEmitterName;
	NvParameterized::Interface* collisionData;
	NvParameterized::Interface* renderMeshAsset;
	uint32_t initialDestructibleActorAllowanceForInstancing;
	InstanceInfo_DynamicArray1D_Type chunkInstanceInfo;
	STRING_DynamicArray1D_Type staticMaterialNames;
	float neighborPadding;
	REF_DynamicArray1D_Type overlapsAtDepth;
	U32_DynamicArray1D_Type firstChunkAtDepth;
	uint32_t supportDepth;
	bool formExtendedStructures;
	bool useAssetDefinedSupport;
	bool useWorldSupport;
	MAT44_DynamicArray1D_Type actorTransforms;
	REF_DynamicArray1D_Type scatterMeshAssets;
	U8_DynamicArray1D_Type scatterMeshIndices;
	MAT44_DynamicArray1D_Type scatterMeshTransforms;

};

static const uint32_t checksum[] = { 0x11268689, 0x39ecdbd7, 0xecef1fff, 0x7fbbb26e, };

} // namespace DestructibleAssetParameters_0p25NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class DestructibleAssetParameters_0p25 : public NvParameterized::NvParameters, public DestructibleAssetParameters_0p25NS::ParametersStruct
{
public:
	DestructibleAssetParameters_0p25(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~DestructibleAssetParameters_0p25();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("DestructibleAssetParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)25;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(DestructibleAssetParameters_0p25NS::checksum);
		return DestructibleAssetParameters_0p25NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const DestructibleAssetParameters_0p25NS::ParametersStruct& parameters(void) const
	{
		DestructibleAssetParameters_0p25* tmpThis = const_cast<DestructibleAssetParameters_0p25*>(this);
		return *(static_cast<DestructibleAssetParameters_0p25NS::ParametersStruct*>(tmpThis));
	}

	DestructibleAssetParameters_0p25NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<DestructibleAssetParameters_0p25NS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class DestructibleAssetParameters_0p25Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		DestructibleAssetParameters_0p25::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(DestructibleAssetParameters_0p25), DestructibleAssetParameters_0p25::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, DestructibleAssetParameters_0p25::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class DestructibleAssetParameters_0p25");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(DestructibleAssetParameters_0p25)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, DestructibleAssetParameters_0p25)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, DestructibleAssetParameters_0p25::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, DestructibleAssetParameters_0p25::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class DestructibleAssetParameters_0p25");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of DestructibleAssetParameters_0p25 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (DestructibleAssetParameters_0p25*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (DestructibleAssetParameters_0p25::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (DestructibleAssetParameters_0p25::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (DestructibleAssetParameters_0p25::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (DestructibleAssetParameters_0p25::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
