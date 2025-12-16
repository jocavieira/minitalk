# 💬 Minitalk – 42 School Project

*"Talk to your programs… one bit at a time!"* 😎

**Minitalk** is a project where you implement a simple **client-server communication system in C** using **UNIX signals**.  
Messages are sent **bit by bit**, and the server only **prints the complete message once it has been fully received**, ensuring reliable communication.

---

## 🧩 Features

- Send messages from a **client** to a **server** using **signals** (`SIGUSR1` and `SIGUSR2`)  
- Server only prints messages **after receiving the full message**  
- Handles **multiple characters** and preserves message integrity  
- Learn **low-level inter-process communication (IPC)**  
- Reinforces **signal handling, bit manipulation, and process synchronization**  

---

## 🚀 Why This Project?

- Understand **how programs can communicate** without standard input/output  
- Learn **bitwise operations** and message encoding  
- Practice **process IDs, signals, and asynchronous programming**  
- Fun challenge: make your programs **talk to each other safely**! 🗨️
