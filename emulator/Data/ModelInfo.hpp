#pragma once
#include "../Config.hpp"

#include <string>

namespace casioemu
{
	class Emulator;
	class SpriteInfo;
	class ColourInfo;

	class ModelInfo
	{
	public:
		ModelInfo(Emulator &emulator, std::string key);
		Emulator &emulator;
		std::string key;

		operator std::string();
		operator int();
		operator SpriteInfo();
		operator ColourInfo();
	};
}

