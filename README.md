For build instructions, please do the following
1. make sure you have git lfs
2. clone the repo
3. git lfs pull
4. right click the uproject and build visual studio project
5. launch project


Hello and welcome to Gore Lib, a tool for procedural dismemberment of skeletal meshes in Unreal 5. 

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/title.png)

This tool allows you to set up custom cuts, exchangeable VFX, Decals, and limb health.

Instructions for creating your own system.
1. Create an actor
2. Make sure that said actor has a skeletal mesh
3. Then add the main driver of the system to your actor, the Bone Manager component
   
![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/BoneManager.png)


After this is added, you can now configure your mesh. The configuration consists of three main components. The first of which is the BloodSocketDiscripter

![Alt text](https://github.com/DuskMoment/UnrealProcGore/blob/main/Images/BloodSocket.png)

This contains all of the descriptions of how your mesh is cut. Here is an example of how you might set one up
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

