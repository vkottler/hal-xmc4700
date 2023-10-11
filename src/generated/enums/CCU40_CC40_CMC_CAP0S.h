/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_CMC_CAP0S : uint8_t
{
    value1 /*!< External Capture 0 Function deactivated */,
    value2 = 1 /*!< External Capture 0 Function triggered by Event 0 */,
    value3 = 2 /*!< External Capture 0 Function triggered by Event 1 */,
    value4 = 3 /*!< External Capture 0 Function triggered by Event 2 */
};
static_assert(sizeof(CCU40_CC40_CMC_CAP0S) == 1);

static constexpr uint16_t CCU40_CC40_CMC_CAP0S_id = 101;

/**
 * Converts CCU40_CC40_CMC_CAP0S to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_CMC_CAP0S instance)
{
    const char *result = "UNKNOWN CCU40_CC40_CMC_CAP0S";

    switch (instance)
    {
    case CCU40_CC40_CMC_CAP0S::value1:
        result = "value1";
        break;
    case CCU40_CC40_CMC_CAP0S::value2:
        result = "value2";
        break;
    case CCU40_CC40_CMC_CAP0S::value3:
        result = "value3";
        break;
    case CCU40_CC40_CMC_CAP0S::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_CMC_CAP0S.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_CMC_CAP0S &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_CMC_CAP0S::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_CMC_CAP0S::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_CMC_CAP0S::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_CMC_CAP0S::value4;
    }

    return result;
}

}; // namespace XMC4700
