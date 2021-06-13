
#pragma once

#include "Hologram/FGFactoryHologram.h"
#include "Buildables/FGBuildable.h"
#include "TBBuildableHologram.generated.h"


UCLASS(Blueprintable)
class DREJNTOOLBOX_API ATBBuildableHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
public:


	ATBBuildableHologram();

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|Buildable Hologram")
	virtual bool IsValidHitResult(const FHitResult& hit) const override;

	//UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|Buildable Hologram")
	//void SetBuildableClass(TSubclassOf< class AFGBuildable > buildableClass);
	
	UPROPERTY(EditDefaultsOnly, Category = "Building")
	TArray<TSubclassOf< class AFGBuildable >> ValidHitClasses;

	UPROPERTY(EditDefaultsOnly, Category = "Building")
	TSubclassOf< class AFGBuildable > inClass;

};
