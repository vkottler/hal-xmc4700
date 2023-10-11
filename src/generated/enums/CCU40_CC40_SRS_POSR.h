/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_SRS_POSR : uint8_t
{
    value1 /*!< Forward to CC4ySR0 */,
    value2 = 1 /*!< Forward to CC4ySR1 */,
    value3 = 2 /*!< Forward to CC4ySR2 */,
    value4 = 3 /*!< Forward to CC4ySR3 */
};
static_assert(sizeof(CCU40_CC40_SRS_POSR) == 1);

static constexpr uint16_t CCU40_CC40_SRS_POSR_id = 147;

/**
 * Converts CCU40_CC40_SRS_POSR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_SRS_POSR instance)
{
    const char *result = "UNKNOWN CCU40_CC40_SRS_POSR";

    switch (instance)
    {
    case CCU40_CC40_SRS_POSR::value1:
        result = "value1";
        break;
    case CCU40_CC40_SRS_POSR::value2:
        result = "value2";
        break;
    case CCU40_CC40_SRS_POSR::value3:
        result = "value3";
        break;
    case CCU40_CC40_SRS_POSR::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_SRS_POSR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_SRS_POSR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_SRS_POSR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_SRS_POSR::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_SRS_POSR::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_SRS_POSR::value4;
    }

    return result;
}

}; // namespace XMC4700
