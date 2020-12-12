# Guerilla-Lock-Security
Hidden security system with Break-in detection and remote keyless entry that can be installed over existing locks.

### Problem we solve
**What are we making?**

A hidden security system which can be installed on the existing door lock. It consists of: 
- A break-in detection system which rings an alarm and notifies the user incase of a break-in attempt
- A mobile application which provides remote key-less entry

**What makes it unique?**
- It detects an attempt to break-in before it actually happens (Rather than post break-in detection, as most existing systems).
- It does not require continuous monitoring like existing security systems (eg: CCTV).
- Being hidden, the intruder is unable to bypass the security features of the system, making it highly effective.
- It does not require a whole new system installation, but can simply be added to the existing door lock.
- Saves from the hassle of frequently losing keys, by providing key-less entry. The door can be unlocked from anywhere in the world.
- Preserves the way in which user interacts with the conventional door-lock system, thereby not leading to increased complexity or cognitive overload.


### Challenges
**Continuity of the system depends on the continuous supply of electricity and its connectivity to the internet**
- **Issue:** The security features would not work in case the internet or electricity is cut off. 
- **Solution:** Changed the communication protocol from *http* to *mqtt* to leverage the last will and testiment feature of mqtt. This problem was tackled by sending an alert incase of an abrupt disconnection of the node. In addition to that, a battery backup feature was provided to restart the system incase of power outage or intentional power cut.
