For build instructions, please do the following
1. Make sure you have git lfs
2. Clone the repo
3. git lfs pull
4. Right-click the uproject and build a Visual Studio project
5. launch project

Feature List:
1. BoneManger: This is an actor component that requires a skeletal mesh in the parent actor in order to function. It is the main driver of this program and handles all the operations done by the data tables.
2. BP_DynamicMesh: An actor that is spawned at run time, dictated by the BloodSocketDescriptor to create a mesh bounding box that then cuts, textures, and creates collisions. 
3. BloodBoneDiscriptor: This is a container that dictates how a mesh will be cut as well as its relation to the Unreal skeletal mesh physics asset. which is used in the bone manager to hide dismembered body parts and to spawn VFX and hit decals. This also includes a bool indicating whether the mesh should be dismembered at all.
4. BloodBoneHealthDiscriptor: Defines health values of the input bones as well as tells the BloodBone manager that a limb can be individually targeted.
5. BloddBoneVFXContainor: This tells the BoneManger what VFX to spawn at different stages of the pipeline. It has VFX for OnHit, OnDetach, and OnBleed. It also supports decal spawn, OnHit, and OnSustain.

<br>
Included in this repo is a demo scene with 5 TestActors: one of which explodes with the x key, and the others have individually trappable limbs, with their hit boxes displayed on the right of the shooting range. On top of this, one of the actors is animated to demonstrate integration with the animation system. 

<br>
Hello and welcome to Gore Lib, a tool for procedural dismemberment of skeletal meshes in Unreal 5. 

<br>
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/title.png)
<br>

This tool allows you to set up custom cuts, exchangeable VFX, Decals, and limb health.
<br>

Instructions for creating your own system.
1. Create an actor.
2. Make sure that said actor has a skeletal mesh.
3. Then add the main driver of the system to your actor, the Bone Manager component.
4. Create a static mesh of your skeletal mesh using Unreal's tool.
<br>   
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/BoneManager.png)
<br>
After this is added, you can now configure your mesh. The configuration consists of three main components. The first of which is the BloodSocketDiscripter.
<br>
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/BloodSocket.png)
<br>

This contains all of the descriptions of how your mesh is cut. Here is an example of how you might set one up.
<br>
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/SocketDiscExample.png)

You use the physics skeleton asset provided by Unreal to get the parent and child names. They should be the same name. The mesh reference should remain as NONE. The next 4 settings relate directly to how the mesh is cut. The offset and the scale relate to the location and dimensions of the cutting box. I recommend configuring these visually. Keep in mind that the cutting box starts at the feet of the skeletal mesh. The bool tells the system if you want to even cut the limb. The final mesh is the STATIC mesh used to create the limb.


The next configuration piece of the tool is the Blood VFX container

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/BloodVFXController.png)

This is used to configure what type of VFX is used at different stages of the system. Here is an example one

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/VFXExample.png)


The final configuration component is the BloodHealthDiscriptor. This is used to support bone health. It also enables bones to be hit by things like ray casts.

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/Screenshot%202026-04-25%20173100.png)

Here is an example configuration. 

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/healthDiscEx.png)

Now that all of the descriptions are created, they can be placed into the BoneManger like so.

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/hook1.png)
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/hook2.png)
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/hook3.png)


trouble shooting: please keep in mind that all static mesh must be CPU read-enabled in the editor 

