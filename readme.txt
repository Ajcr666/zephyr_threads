To Build the application and run in native posix : in terminal, project directory - 
	cmake -Bbuild -GNinja -DBOARD=native_posix
	ninja -C build
	./build/my_application.elf

Assumptions :
- All necessary dependencies are installed.
- Zephyr latest SDK is installed  
- ZEPHR_BASE environment is set to point to the SDK	

