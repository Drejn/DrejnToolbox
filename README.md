# DrejnToolbox
A set of components and Actors to facilitate Satisfactory Modding


# Using the content

You are free to use the content of this repo. The only thing i ask back is to not claim this content of your own by overriding the original Author of this Plugin. If you have any doubt feel free to contact me on the Satisfactory Modding Discord!

# Overview

This plugin aims to introduce utility objects that can be used in the editor to facilitate mods development with faster solutions.

The Plugin introduces these objects to the editor:

**TBFactoryConnection:** it inerhits from FGFactoryConnectionComponent, acts as one, but has the added benefit to expose SetInventory and SetInventoryAccessIndex useful if you are not using standard widget. The function SetConnection is also exposed (in case you wish to do something with the conveyor attached to the component) and ClearConnection is present in case you would need to disconnect connections when needed.

**TBBuildableHologram:** it's an hologram object, inheriting from FGBuildableHologram class. To use it you need to create a TBBuildableHologram BP in Unreal Engine. On the Blueprint you can set the array "ValidHitClass", which will define where your hologram can be built on, and "InClass" where you should specify the class of the object you're going to build. I do plan to extend the degree of customization on this since Holograms have plenty of stuff to work with.

# Configuration

Clone the repository in your project Plugin folder. In Visual Studio build for both Developer Editor and Shipping
