#pragma once
#include "Holograms/TBBuildableHologram.h"
#include "Hologram/FGFactoryHologram.h"




ATBBuildableHologram::ATBBuildableHologram() : Super() {
	
		this->mValidHitClasses.Append(ValidHitClasses);
	
}



bool ATBBuildableHologram::IsValidHitResult(const FHitResult& hit) const {

	AActor* target = hit.GetActor();

	for (int i = 0; i < ValidHitClasses.Num(); i++) {
		if (target->IsA(ValidHitClasses[i])) {
			return true;
		}
	}
	return false;
}

/*
void ATBBuildableHologram::SetBuildableClass(TSubclassOf< class AFGBuildable > buildableClass) {
	Super::SetBuildableClass();
}
*/