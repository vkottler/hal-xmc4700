/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_ECRD1_FFL : uint8_t
{
    value1 /*!< No new value was captured into this register */,
    value2 = 1 /*!< A new value has been captured into this register */
};
static_assert(sizeof(CCU80_CC80_ECRD1_FFL) == 1);

/**
 * Converts CCU80_CC80_ECRD1_FFL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_ECRD1_FFL instance)
{
    const char *result = "UNKNOWN CCU80_CC80_ECRD1_FFL";

    switch (instance)
    {
    case CCU80_CC80_ECRD1_FFL::value1:
        result = "value1";
        break;
    case CCU80_CC80_ECRD1_FFL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_ECRD1_FFL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_ECRD1_FFL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_ECRD1_FFL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_ECRD1_FFL::value2;
    }

    return result;
}

}; // namespace XMC4700
