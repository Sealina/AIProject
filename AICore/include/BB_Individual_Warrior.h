#include "BB_Individual_Common.h"

struct BB_Individual_Caster : public IBlackboard
{
	BB_Individual_RBC()
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






// Registered inside BlackboardManager.cpp
// REGISTERCLASS(BB_Individual_RBC);



#endif // BB_INDIVIDUAL_RBC_INCLUDED