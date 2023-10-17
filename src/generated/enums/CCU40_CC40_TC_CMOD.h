/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_CMOD : uint8_t
{
    compare_mode /*!< Compare Mode */,
    capture_mode = 1 /*!< Capture Mode */
};
static_assert(sizeof(CCU40_CC40_TC_CMOD) == 1);

/**
 * Converts CCU40_CC40_TC_CMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_CMOD instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_CMOD";

    switch (instance)
    {
    case CCU40_CC40_TC_CMOD::compare_mode:
        result = "compare_mode";
        break;
    case CCU40_CC40_TC_CMOD::capture_mode:
        result = "capture_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_CMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_CMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "compare_mode", 12)))
    {
        output = CCU40_CC40_TC_CMOD::compare_mode;
    }
    else if ((result = !strncmp(data, "capture_mode", 12)))
    {
        output = CCU40_CC40_TC_CMOD::capture_mode;
    }

    return result;
}

}; // namespace XMC4700
