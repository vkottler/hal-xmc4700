/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_CCS : uint8_t
{
    value1 /*!< The capture into a specific capture register is done with the rules linked with the full flags, described at . */,
    value2 = 1 /*!< The capture into the capture registers is always done regardless of the full flag status (even if the register has not been read back). */
};
static_assert(sizeof(CCU80_CC80_TC_CCS) == 1);

/**
 * Converts CCU80_CC80_TC_CCS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_CCS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_CCS";

    switch (instance)
    {
    case CCU80_CC80_TC_CCS::value1:
        result = "value1";
        break;
    case CCU80_CC80_TC_CCS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_CCS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_CCS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_TC_CCS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_TC_CCS::value2;
    }

    return result;
}

}; // namespace XMC4700
