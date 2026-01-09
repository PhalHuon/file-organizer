# File Organizer

A command-line tool for organizing and visualizing your file system.

## Features

- Display directory structures as a visual tree
- Sort files into folders by type (coming soon)
- Track file operations with MySQL (coming soon)

## Installation

### Build from source

```bash
git clone https://github.com/PhalHuon/file-organizer.git
cd file-organizer
mkdir build && cd build
cmake ..
make
```

### Dependencies

- CMake 3.10+
- g++ with C++20 support
- MySQL client library

Ubuntu/Debian:
```bash
sudo apt install cmake libmysqlclient-dev pkg-config
```

## Usage

```bash
# Display folder tree
./wehopeitruns tree <directory>

# Examples
./wehopeitruns tree ~/Documents
./wehopeitruns tree /home/user/projects
```

## License

MIT
