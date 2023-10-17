/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG0_SREN : uint8_t
{
    disable /*!< disable */,
    enable = 1 /*!< enable */
};
static_assert(sizeof(DAC_DAC0CFG0_SREN) == 1);

/**
 * Converts DAC_DAC0CFG0_SREN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG0_SREN instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG0_SREN";

    switch (instance)
    {
    case DAC_DAC0CFG0_SREN::disable:
        result = "disable";
        break;
    case DAC_DAC0CFG0_SREN::enable:
        result = "enable";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG0_SREN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG0_SREN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable", 7)))
    {
        output = DAC_DAC0CFG0_SREN::disable;
    }
    else if ((result = !strncmp(data, "enable", 6)))
    {
        output = DAC_DAC0CFG0_SREN::enable;
    }

    return result;
}

}; // namespace XMC4700
