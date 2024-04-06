# HackNight-Chess-Engine

## Setup
### Mac
1. Get CLion (free with student access)
2. Install Homebrew if you haven't
3. If you don't have the dev CLI tools, go to terminal and paste: xcode-select --install
4. Paste these to terminal:
   1. brew install sdl2
   2. brew install sdl2_image
   3. brew install sdl2_mixer
   4. brew install sdl2_ttf

### Windows
Not sure yet, please figure out if you have windows

### Linux
This guide assumes the use of yay, but the same general process applies for other package managers *(e.g. apt-get)*.

#### Clone Repository
- Install Git: `$ yay -S extra/git`
   > Team members will need to additionally set up [Git Credential Manager](https://github.com/git-ecosystem/git-credential-manager/blob/release/docs/install.md#Linux) or an equivalent utility to contribute to the repository or clone while its private.
- Navigate to the directory you wish to store the project in
- Clone the Git repository: `$ git clone https://github.com/maxence-glt/HackNight-Chess-Engine.git`

#### JetBrains CLion Set Up
- Install [JetBrains CLion C++ IDE](https://www.jetbrains.com/clion/): `$ yay -S aur/clion`
- Activate your CLion install  
   > [Free educational licenses](https://www.jetbrains.com/community/education/#students) are avalible to students 
- Add the cloned repo to CLion as a new project

#### Install Dependencies
- SDL Packages: `$ yay -S extra/sdl2 extra/sdl2_image extra/sdl2_mixer extra/sdl2_ttf`  
- CMake: `i have no idea dude`
