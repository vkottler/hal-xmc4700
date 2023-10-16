/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CGCFG_STEPD : uint8_t
{
    value1 /*!< Step counter is counting up */,
    value2 = 1 /*!< Step counter is counting down */
};
static_assert(sizeof(DSD_CGCFG_STEPD) == 1);

/**
 * Converts DSD_CGCFG_STEPD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CGCFG_STEPD instance)
{
    const char *result = "UNKNOWN DSD_CGCFG_STEPD";

    switch (instance)
    {
    case DSD_CGCFG_STEPD::value1:
        result = "value1";
        break;
    case DSD_CGCFG_STEPD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CGCFG_STEPD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CGCFG_STEPD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CGCFG_STEPD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CGCFG_STEPD::value2;
    }

    return result;
}

}; // namespace XMC4700