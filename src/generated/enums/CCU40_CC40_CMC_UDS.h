/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_CMC_UDS : uint8_t
{
    value1 /*!< External Up/Down Function deactivated */,
    value2 = 1 /*!< External Up/Down Function triggered by Event 0 */,
    value3 = 2 /*!< External Up/Down Function triggered by Event 1 */,
    value4 = 3 /*!< External Up/Down Function triggered by Event 2 */
};
static_assert(sizeof(CCU40_CC40_CMC_UDS) == 1);

/**
 * Converts CCU40_CC40_CMC_UDS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_CMC_UDS instance)
{
    const char *result = "UNKNOWN CCU40_CC40_CMC_UDS";

    switch (instance)
    {
    case CCU40_CC40_CMC_UDS::value1:
        result = "value1";
        break;
    case CCU40_CC40_CMC_UDS::value2:
        result = "value2";
        break;
    case CCU40_CC40_CMC_UDS::value3:
        result = "value3";
        break;
    case CCU40_CC40_CMC_UDS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_CMC_UDS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_CMC_UDS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_CMC_UDS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_CMC_UDS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_CMC_UDS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_CMC_UDS::value4;
    }

    return result;
}

}; // namespace XMC4700
