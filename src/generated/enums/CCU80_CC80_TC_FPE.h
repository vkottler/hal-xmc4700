/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_FPE : uint8_t
{
    value1 /*!< Floating prescaler mode is disabled */,
    value2 = 1 /*!< Floating prescaler mode is enabled */
};
static_assert(sizeof(CCU80_CC80_TC_FPE) == 1);

/**
 * Converts CCU80_CC80_TC_FPE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_FPE instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_FPE";

    switch (instance)
    {
    case CCU80_CC80_TC_FPE::value1:
        result = "value1";
        break;
    case CCU80_CC80_TC_FPE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_FPE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_FPE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_TC_FPE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_TC_FPE::value2;
    }

    return result;
}

}; // namespace XMC4700