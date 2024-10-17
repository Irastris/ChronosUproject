# ChronosUproject

5.2 Unreal project for modding Life is Strange Double Exposure, work in progress. This project is preconfigured for IO Store packaging and includes an implementation of classes utilized by the game for character appearances and locomotion.

Extensive support will not be provided for this project.

### Getting Started

Clone this repository, open the .uproject, and compile the necessary modules once prompted. When complete, the Unreal editor will open.

### Classes

The following classes have been implemented:
* **ModularCharacterDataAsset**
  - This class enables creating/editing "MOCHA" data assets, which define the meshes/materials/etc that a character's in-game appearances consist of.
* **SimpleLocomotionAnimationSet**
  - This class enabled creating/editing animation set data sets, which define the animation sequences used by a character for locomotion.