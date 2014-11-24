#include "BB_Individual_Common.h"

struct BB_Individual_Worker : public IBlackboard
{
	BB_Individual_Worker()
	{
		// Init members here
	}

	virtual void Serialize(ISimpleSerializer *pSerializer)
	{
		AU_ASSERT(pSerializer);

		// Serialize members here
		//SERIALIZE(visible_dangerous); // Demo [Tutorial03]
	}

	// Members
	//AUDynArray<ObjectId> visible_dangerous; // Demo [Tutorial03]
};
