/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_ECRD1_LCV : uint8_t
{
    value1 /*!< No capture was lost */,
    value2 = 1 /*!< A capture was lost */
};
static_assert(sizeof(CCU40_CC40_ECRD1_LCV) == 1);

/**
 * Converts CCU40_CC40_ECRD1_LCV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_ECRD1_LCV instance)
{
    const char *result = "UNKNOWN CCU40_CC40_ECRD1_LCV";

    switch (instance)
    {
    case CCU40_CC40_ECRD1_LCV::value1:
        result = "value1";
        break;
    case CCU40_CC40_ECRD1_LCV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_ECRD1_LCV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_ECRD1_LCV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_ECRD1_LCV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_ECRD1_LCV::value2;
    }

    return result;
}

}; // namespace XMC4700
