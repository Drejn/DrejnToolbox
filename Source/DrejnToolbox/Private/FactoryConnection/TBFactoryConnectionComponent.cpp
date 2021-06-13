#include "FactoryConnection/TBFactoryConnectionComponent.h"
#include "Utils/DrejnToolboxLogging.h"

UTBFactoryConnectionComponent::UTBFactoryConnectionComponent() : Super(){
	
}

void UTBFactoryConnectionComponent::SetInventory(class UFGInventoryComponent* inventory) {
	Super::SetInventory(inventory);
}


void UTBFactoryConnectionComponent::SetInventoryAccessIndex(int32 index) {
	Super::SetInventoryAccessIndex(index);
}


void UTBFactoryConnectionComponent::SetConnection(class UFGFactoryConnectionComponent* toComponent)  {
	Super::SetConnection(toComponent);
}

void UTBFactoryConnectionComponent::ClearConnection()  {
	Super::ClearConnection();
}

bool UTBFactoryConnectionComponent::HasConnection()  {
	return Super::IsConnected();
}

