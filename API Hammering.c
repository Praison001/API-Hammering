#include <Windows.h>
#include <stdio.h>

#define NUM_CALLS 10000000

int main() {
	DWORD startTime, endTime, elapsed;
	HMODULE module;

	startTime = GetTickCount();

	for (int i = 0; i < NUM_CALLS; i++) {
		module = GetModuleHandleA("kernel32.dll");
		if (module == NULL) {
			return 1;
		}
	}

	endTime = GetTickCount();

	elapsed = endTime - startTime;

	if (elapsed > 100000) {
		printf("Likely a Sandbox environment \n");
	}
	else {
		printf("Likely a real environment \n");
	}
	return 0;
}
