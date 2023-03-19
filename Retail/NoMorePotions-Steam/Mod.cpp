// This is just a memory write DLL mod so I don't need the whole API
struct ModInfo
{
	int LoaderVersion;
	int GameVersion;
};

extern "C"
{
	__declspec(dllexport) ModInfo ManiaModInfo = { 1, 5 };

	__declspec(dllexport) void Init()
	{
		// Always use the Tee Lopes version.
		WRITE_MEMORY(0x70BDDC, uint8_t, 0xEB);
	}
}