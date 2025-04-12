#!/bin/bash

set -e

echo "[*] Building project..."
make

echo "[*] Installing to /bin (requires sudo)"
sudo cp build/cv /bin/cv
sudo chmod +x /bin/cv

echo "[+] Installed as /bin/cv"
