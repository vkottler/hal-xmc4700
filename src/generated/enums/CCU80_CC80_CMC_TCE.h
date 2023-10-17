/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_CMC_TCE : uint8_t
{
    disabled /*!< Timer concatenation is disabled */,
    enabled = 1 /*!< Timer concatenation is enabled */
};
static_assert(sizeof(CCU80_CC80_CMC_TCE) == 1);

/**
 * Converts CCU80_CC80_CMC_TCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_CMC_TCE instance)
{
    const char *result = "UNKNOWN CCU80_CC80_CMC_TCE";

    switch (instance)
    {
    case CCU80_CC80_CMC_TCE::disabled:
        result = "disabled";
        break;
    case CCU80_CC80_CMC_TCE::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_CMC_TCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_CMC_TCE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = CCU80_CC80_CMC_TCE::disabled;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = CCU80_CC80_CMC_TCE::enabled;
    }

    return result;
}

}; // namespace XMC4700
