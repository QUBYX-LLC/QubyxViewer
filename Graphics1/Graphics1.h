#ifndef GRAPHICS1_H
#define GRAPHICS1_H

#include <QRect>
#include <QSize>
#include <QByteArray>
#include <QString>
#include <vector>

#ifdef GRAPHICS1_LIBRARY
#define GRAPHICS1_EXPORT Q_DECL_EXPORT
#else
#define GRAPHICS1_EXPORT Q_DECL_IMPORT
#endif

extern "C" {
    // C interface for the DLL
    GRAPHICS1_EXPORT bool graphics1DisplayDLL_Load();
    GRAPHICS1_EXPORT void graphics1DisplayDLL_Unload();
    GRAPHICS1_EXPORT bool graphics1DisplayDLL_EnumerateDisplays();
    GRAPHICS1_EXPORT bool graphics1DisplayDLL_UpdateDisplayInfo(
        int* geometry_x, int* geometry_y, int* geometry_width, int* geometry_height,
        int* resolution_width, int* resolution_height,
        unsigned char* edid_data, int edid_size,
        char* os_id, int os_id_size,
        char* os_dev_name, int os_dev_name_size,
        char* video_adapter_key, int video_adapter_key_size,
        char* video_adapter_name, int video_adapter_name_size,
        int* display_count
    );
}

#endif // GRAPHICS1_H
