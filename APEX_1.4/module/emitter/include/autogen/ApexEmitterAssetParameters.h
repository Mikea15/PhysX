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


#ifndef HEADER_ApexEmitterAssetParameters_h
#define HEADER_ApexEmitterAssetParameters_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace emitter
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace ApexEmitterAssetParametersNS
{

struct emitterLodParamDesc_Type;
struct rateVsTimeCurvePoint_Type;

struct rateVsTimeCurvePoint_DynamicArray1D_Type
{
	rateVsTimeCurvePoint_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct emitterLodParamDesc_Type
{
	uint32_t version;
	float maxDistance;
	float distanceWeight;
	float speedWeight;
	float lifeWeight;
	float separationWeight;
	float bias;
};
struct rateVsTimeCurvePoint_Type
{
	float x;
	float y;
};

struct ParametersStruct
{

	float density;
	float rate;
	float lifetimeLow;
	float lifetimeHigh;
	physx::PxVec3 velocityLow;
	physx::PxVec3 velocityHigh;
	uint32_t maxSamples;
	emitterLodParamDesc_Type lodParamDesc;
	NvParameterized::Interface* iofxAssetName;
	NvParameterized::Interface* iosAssetName;
	NvParameterized::Interface* geometryType;
	float emitterDuration;
	float emitterVelocityScale;
	uint32_t minSamplingFPS;
	rateVsTimeCurvePoint_DynamicArray1D_Type rateVsTimeCurvePoints;

};

static const uint32_t checksum[] = { 0x1835d790, 0xa1bfdb02, 0xf76e9154, 0xae351ee1, };

} // namespace ApexEmitterAssetParametersNS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class ApexEmitterAssetParameters : public NvParameterized::NvParameters, public ApexEmitterAssetParametersNS::ParametersStruct
{
public:
	ApexEmitterAssetParameters(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~ApexEmitterAssetParameters();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ApexEmitterAssetParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)8;

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
		bits = 8 * sizeof(ApexEmitterAssetParametersNS::checksum);
		return ApexEmitterAssetParametersNS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const ApexEmitterAssetParametersNS::ParametersStruct& parameters(void) const
	{
		ApexEmitterAssetParameters* tmpThis = const_cast<ApexEmitterAssetParameters*>(this);
		return *(static_cast<ApexEmitterAssetParametersNS::ParametersStruct*>(tmpThis));
	}

	ApexEmitterAssetParametersNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ApexEmitterAssetParametersNS::ParametersStruct*>(this));
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

class ApexEmitterAssetParametersFactory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		ApexEmitterAssetParameters::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ApexEmitterAssetParameters), ApexEmitterAssetParameters::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, ApexEmitterAssetParameters::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ApexEmitterAssetParameters");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ApexEmitterAssetParameters)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, ApexEmitterAssetParameters)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, ApexEmitterAssetParameters::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, ApexEmitterAssetParameters::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ApexEmitterAssetParameters");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of ApexEmitterAssetParameters here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ApexEmitterAssetParameters*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ApexEmitterAssetParameters::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (ApexEmitterAssetParameters::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (ApexEmitterAssetParameters::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (ApexEmitterAssetParameters::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace emitter
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
