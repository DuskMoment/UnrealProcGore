Hello and welcome to Gore Lib, a tool for procedural dismemberment of skeletal meshes in Unreal 5. 

<img width="1818" height="1176" alt="Screenshot 2026-04-25 170918" src="https://github.com/DuskMoment/UnrealProcGore/edit/mine/images/Screenshot 2026-04-25 170918.png" />

This tool allows you to set up custom cuts, exchangeable VFX, Decals, and limb health.

Instructions for creating your own system.
1. Create an actor
2. Make sure that said actor has a skeletal mesh
3. Then add the main driver of the system to your actor, the Bone Manager component
<img width="130" height="173" alt="image" src="https://github.com/user-attachments/assets/5f03723e-1264-4906-a15d-8b983d5cacd3" />


After this is added, you can now configure your mesh. The configuration consists of three main components. The first of which is the BloodSocketDiscripter

<img width="100" height="160" alt="image" src="https://github.com/user-attachments/assets/3bdc7efb-37c6-40f2-b701-a8e4a45ff339" />

This contains all of the descriptions of how your mesh is cut. Here is an example of how you might set one up
<img width="1654" height="392" alt="image" src="https://github.com/user-attachments/assets/859ccb2d-8ec9-4bda-aa0d-622210a05d77" />

You use the physics skeleton asset provided by Unreal to get the parent and child names. They should be the same name. The mesh reference should remain as NONE. The next 4 settings relate directly to how the mesh is cut. The offset and the scale relate to the location and dimensions of the cutting box. I recommend configuring these visually. Keep in mind that the cutting box starts at the feet of the skeletal mesh. The bool tells the system if you want to even cut the limb. The final mesh is the STATIC mesh used to create the limb.


The next configuration piece of the tool is the Blood VFX container
<img width="103" height="169" alt="image" src="https://github.com/user-attachments/assets/645687a4-84a9-4827-9814-10557a15b0d1" />

This is used to configure what type of VFX is used at different stages of the system. Here is an example one

<img width="1677" height="473" alt="image" src="https://github.com/user-attachments/assets/60656de8-36ca-432e-9e40-81532a1cc25f" />

The final configuration component is the BloodHealthDiscriptor. This is used to support bone health. It also enables bones to be hit by things like ray casts.

<img width="104" height="177" alt="image" src="https://github.com/user-attachments/assets/258c7f3a-b6cc-4c83-9724-1886b3a66e9d" />

Here is an example configuration. 

<img width="1670" height="242" alt="image" src="https://github.com/user-attachments/assets/c8f3b91c-640f-46f2-b98a-83534d223a02" />

Now that all of the descriptions are created, they can be placed into the BoneManger like so.

<img width="473" height="485" alt="image" src="https://github.com/user-attachments/assets/072c1ddb-67f6-4020-807f-eaeb9655a658" />

<img width="505" height="370" alt="image" src="https://github.com/user-attachments/assets/f1c56656-99c1-4444-b464-280a9706020c" />

<img width="495" height="351" alt="image" src="https://github.com/user-attachments/assets/45aafc1a-b789-4b72-8899-52400584f1c0" />



trouble shooting: please keep in mind that all static mesh must be CPU read-enabled in the editor 





