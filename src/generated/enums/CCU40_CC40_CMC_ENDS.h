/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_CMC_ENDS : uint8_t
{
    value1 /*!< External Stop Function deactivated */,
    value2 = 1 /*!< External Stop Function triggered by Event 0 */,
    value3 = 2 /*!< External Stop Function triggered by Event 1 */,
    value4 = 3 /*!< External Stop Function triggered by Event 2 */
};
static_assert(sizeof(CCU40_CC40_CMC_ENDS) == 1);

static constexpr uint16_t CCU40_CC40_CMC_ENDS_id = 1380;

/**
 * Converts CCU40_CC40_CMC_ENDS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_CMC_ENDS instance)
{
    const char *result = "UNKNOWN CCU40_CC40_CMC_ENDS";

    switch (instance)
    {
    case CCU40_CC40_CMC_ENDS::value1:
        result = "value1";
        break;
    case CCU40_CC40_CMC_ENDS::value2:
        result = "value2";
        break;
    case CCU40_CC40_CMC_ENDS::value3:
        result = "value3";
        break;
    case CCU40_CC40_CMC_ENDS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_CMC_ENDS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_CMC_ENDS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_CMC_ENDS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_CMC_ENDS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_CMC_ENDS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_CMC_ENDS::value4;
    }

    return result;
}

}; // namespace XMC4700
