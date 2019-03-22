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



#ifndef MODULE_CONVERSIONDESTRUCTIBLEACTORPARAM_0P29_0P30H_H
#define MODULE_CONVERSIONDESTRUCTIBLEACTORPARAM_0P29_0P30H_H

#include "NvParamConversionTemplate.h"
#include "DestructibleActorParam_0p29.h"
#include "DestructibleActorParam_0p30.h"

namespace nvidia {
namespace apex {
namespace legacy {


typedef NvParameterized::ParamConversionTemplate<nvidia::parameterized::DestructibleActorParam_0p29, 
						nvidia::parameterized::DestructibleActorParam_0p30, 
						nvidia::parameterized::DestructibleActorParam_0p29::ClassVersion, 
						nvidia::parameterized::DestructibleActorParam_0p30::ClassVersion>
						ConversionDestructibleActorParam_0p29_0p30Parent;

class ConversionDestructibleActorParam_0p29_0p30: public ConversionDestructibleActorParam_0p29_0p30Parent
{
public:
	static NvParameterized::Conversion* Create(NvParameterized::Traits* t)
	{
		void* buf = t->alloc(sizeof(ConversionDestructibleActorParam_0p29_0p30));
		return buf ? PX_PLACEMENT_NEW(buf, ConversionDestructibleActorParam_0p29_0p30)(t) : 0;
	}

protected:
	ConversionDestructibleActorParam_0p29_0p30(NvParameterized::Traits* t) : ConversionDestructibleActorParam_0p29_0p30Parent(t) {}

	const NvParameterized::PrefVer* getPreferredVersions() const
	{
		static NvParameterized::PrefVer prefVers[] =
		{
			//TODO:
			//	Add your preferred versions for included references here.
			//	Entry format is
			//		{ (const char*)longName, (uint32_t)preferredVersion }

			{ 0, 0 } // Terminator (do not remove!)
		};

		return prefVers;
	}

	bool convert()
	{
		if (mLegacyData->p3ActorDescTemplate.contactReportFlags.eRESOLVE_CONTACTS)
		{
			mNewData->p3ActorDescTemplate.contactReportFlags.eCONTACT_DEFAULT = true;
		}

		if (mLegacyData->p3ActorDescTemplate.contactReportFlags.eCCD_LINEAR)
		{
			mNewData->p3ActorDescTemplate.contactReportFlags.eSOLVE_CONTACT = true;
			mNewData->p3ActorDescTemplate.contactReportFlags.eDETECT_CCD_CONTACT = true;
		}

		return true;
	}
};


}
}
} //nvidia::apex::legacy

#endif
