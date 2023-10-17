/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CLC_DISS : uint8_t
{
    module_clock_enabled /*!< Module clock is enabled */,
    off_module_not_clocked = 1 /*!< Off: module is not clocked */
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
    case DSD_CLC_DISS::module_clock_enabled:
        result = "module_clock_enabled";
        break;
    case DSD_CLC_DISS::off_module_not_clocked:
        result = "off_module_not_clocked";
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

    if ((result = !strncmp(data, "module_clock_enabled", 20)))
    {
        output = DSD_CLC_DISS::module_clock_enabled;
    }
    else if ((result = !strncmp(data, "off_module_not_clocked", 22)))
    {
        output = DSD_CLC_DISS::off_module_not_clocked;
    }

    return result;
}

}; // namespace XMC4700
