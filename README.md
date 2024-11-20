# ChronosUproject

5.2 Unreal project for modding Life is Strange Double Exposure. This project is preconfigured for IO Store packaging and includes an implementation of classes utilized by the game for character appearances and locomotion.

Support will not be provided for this project.

### Getting Started

Clone this repository, open the .uproject, and compile the necessary modules once prompted. When complete, the Unreal editor will open.

### Classes

The following classes have been implemented:
* **ModularCharacterDataAsset**
  - This class enables creating/editing "MOCHA" data assets, which define the meshes/materials/etc that a character's in-game appearances consist of. Please note that despite MOCHAs existing for all characters, the only one to appear to be actually utilized has been Max's, pending further research.
* **SimpleLocomotionAnimationSet**
  - This class enabled creating/editing animation set data sets, which define the animation sequences used by a character for locomotion.
