#pragma once
#include "FGFactoryConnectionComponent.h"
#include "TBFactoryConnectionComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DREJNTOOLBOX_API UTBFactoryConnectionComponent : public UFGFactoryConnectionComponent
{
	GENERATED_BODY()
public:
	UTBFactoryConnectionComponent();


	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	void SetInventory(class UFGInventoryComponent* inventory);


	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	void SetInventoryAccessIndex(int32 index) ;

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	int32 GetInventoryAccessIndex() const { return InventoryAccessIndex; }


	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	void SetConnection(class UFGFactoryConnectionComponent* toComponent) ;

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	UFGFactoryConnectionComponent* GetConnection() const { return ConnectedComponent; }

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	void ClearConnection() ;

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Drejn Toolbox|FactoryConnection")
	bool HasConnection();


	UPROPERTY(SaveGame)
	UFGFactoryConnectionComponent* ConnectedComponent;
	UPROPERTY(SaveGame)
	bool HasConnectedComponent;
	UPROPERTY(SaveGame)
	int32 InventoryAccessIndex;

};
