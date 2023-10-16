/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CLC_DISS : uint8_t
{
    value1 /*!< Module clock is enabled */,
    value2 = 1 /*!< Off: module is not clocked */
};
static_assert(sizeof(DSD_CLC_DISS) == 1);

/**
 * Converts DSD_CLC_DISS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CLC_DISS instance)
{
    const char *result = "UNKNOWN DSD_CLC_DISS";

    switch (instance)
    {
    case DSD_CLC_DISS::value1:
        result = "value1";
        break;
    case DSD_CLC_DISS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CLC_DISS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CLC_DISS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CLC_DISS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CLC_DISS::value2;
    }

    return result;
}

}; // namespace XMC4700
