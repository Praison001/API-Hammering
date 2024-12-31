# API-Hammering

Sandboxes might introduce overhead for system calls due to additional monitoring, and repeating the call many times to a Windows API exaggerates this overhead. 
This technique is used by malwares to evade sandboxes and to differentiate between a real and a sandboxed environment by making a large number of benign Windows API function calls to try and detect delays caused by hooks or monitoring overhead. This program also runs based on the assumption that sandboxes are always slower.

This method may not be reliable in scenarios where modern sandboxes optimize response times to mimic real environments.

Several malware families like BazarLoader, Zloader are known to use this technique.

Reference: https://unit42.paloaltonetworks.com/api-hammering-malware-families/

This is only for educational and testing purposes.