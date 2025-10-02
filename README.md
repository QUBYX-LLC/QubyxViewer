# QubyxViewer

A professional color management viewer application built with Qt. QubyxViewer provides advanced color calibration and display management capabilities for professional workflows.

## Prerequisites

### Required
- **Qt 5.15+ or Qt 6.x**: Download from [qt.io](https://www.qt.io/download)
- **Windows SDK 10.0+** (Windows)

### Optional
- **Qt Creator**: For development and debugging

## Building

### Method 1: Qt Creator (Recommended)

1. **Open Qt Creator**
2. **Open Project**: Select `QubyxViewer.pro`
3. **Configure**: Select your Qt version and compiler
4. **Build**: Press Ctrl+B or use the Build menu

### Method 2: Command Line (qmake)

1. **Open Qt Command Prompt** (from Start Menu)
2. **Navigate to the project directory:**
   ```cmd
   cd QubyxViewer
   ```
3. **Generate Makefile:**
   ```cmd
   qmake QubyxViewer.pro
   ```
4. **Build:**
   ```cmd
   nmake
   ```

## Usage

### Running the Application

```cmd
QubyxViewer.exe
```

### Supported File Formats

- **ICC Profiles**: `.icc`, `.icm`
- **3DLUT Files**: Various formats supported
- **Media Files**: Images and videos for testing

## Project Structure

```
QubyxViewer/
├── main.cpp                           # Application entry point
├── qubyxviewerdata.h/cpp              # Main application logic
├── LutGenerator.h/cpp                 # 3DLUT generation
├── filereader.h/cpp                   # File I/O operations
├── pixelhandler.h/cpp                 # Pixel processing
├── qml/                               # QML user interface
├── libs/                              # Core libraries
│   ├── QubyxProfile.h/cpp             # ICC profile handling
│   ├── DisplayInfo.h/cpp              # Display management
│   ├── DisplayEnumerator.cpp          # Display enumeration
│   ├── ICCProfLib/                    # ICC profile library
│   ├── Eigen/                         # Mathematical operations
│   └── ...                            # Other dependencies
├── Graphics1/                         # Display management DLL
├── QubyxViewer.pro                    # Qt project file
└── LICENSE                            # GPL v3 license
```

## Dependencies

### Internal Libraries (included)
- **QubyxProfile**: ICC profile handling and color management
- **DisplayInfo**: Display enumeration and management
- **ICCProfLib**: ICC profile library (International Color Consortium)
- **Eigen**: Mathematical operations and matrix calculations (MPL 2.0)
- **QExtSerialPort**: Serial port communication (LGPL v2.1)

### External Dependencies
- **Qt Framework**: GUI, multimedia, and QML support (GPL/LGPL)
- **Windows SDK**: Windows-specific APIs (Windows only)


## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.

### License Compatibility Notice

This software includes third-party libraries with different licenses. Some libraries may require additional attribution or have restrictions on commercial use. Please review the LICENSE file for complete information about all dependencies and their licensing terms.

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Ensure all third-party library licenses are respected
5. Submit a pull request

## Acknowledgments

- **International Color Consortium** for ICC profile standards
- **Eigen Library** contributors for mathematical operations
- **Qt Company** for the cross-platform framework
- **Unicode Consortium** for UTF conversion utilities