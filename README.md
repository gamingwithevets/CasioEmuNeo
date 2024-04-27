[English](./README.md)&nbsp; [中文版本](docs/README_zh.md)
(Note: Chinese README is unchanged.)

This is a fork of:
- [CasioEmuNeo](https://github.com/qiufuyu123/CasioEmuNeo) by qiufuyu123, an upgraded version of
- [CasioEmuNeo](https://github.com/qiufuyu123/CasioEmuX) by qiufuyu123, a fork of
- [CasioEmu](https://github.com/gamingwithevets/CasioEmu) by me, a fork of
- [CasioEmu](https://github.com/user202729/CasioEmu) by user202729, a fork of
- [CasioEmu](https://github.com/LBPHacker/CasioEmu) by LBPHacker.

This English README has added additional information from the Chinese README. (god I hate language boundaries)

## Downloads
There are no pre-compiled binaries at the moment; however a continuous build may be set up in the future.

## Tutorials
- [Basic interface operation](./docs/intro_ui.md)
- [Assembler usage](./docs/intro_asm.md)
- [ROP injection/debugging](./docs/intro_rop.md)

## Building from source
0. Download prerequisites
   1. Get your preferred Linux terminal up and running!
   2. Install xmake. You can usually install it through your package manager.
   3. Since ImGui by default uses an ASCII only font, you will have to download a seperate Unicode font for Unicode characters to render correctly. [Unifont](https://unifoundry.com/pub/unifont/) is recommended.
1. Build
   You may need to install additional dependencies along the way.
   ```shell
   cd emulator
   xmake f -p mingw
   xmake
   ```
2. Set up a model profile
   Model profiles are stored in directories, which contain a `model.lua` file. Examples can be found in the `models` directory.  
   You will need to generate a disassembly using [**user202729's C++ disassembler**](https://github.com/user202729/fxesplus/tree/master/disas):
   ```shell
   git clone https://github.com/user202729/fxesplus.git
   cd disas
   make
   bin/u8-disas <ROM file path> 0 <ROM file size> <output filename>
   ```
   (make sure the line terminators are correct)

   Place the disassembly file in the profile directory as `_disas.txt` and the ROM file as `rom.bin` (you can change the ROM filename in `model.lua`), then run the following in the `emulator` directory:
   ```shell
   xmake run CasioEmuX <model profile directory>
   ```
