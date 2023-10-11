/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_DTC_DTCC : uint8_t
{
    value1 /*!< ftclk */,
    value2 = 1 /*!< ftclk/2 */,
    value3 = 2 /*!< ftclk/4 */,
    value4 = 3 /*!< ftclk/8 */
};
static_assert(sizeof(CCU80_CC80_DTC_DTCC) == 1);

static constexpr uint16_t CCU80_CC80_DTC_DTCC_id = 243;

/**
 * Converts CCU80_CC80_DTC_DTCC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_DTC_DTCC instance)
{
    const char *result = "UNKNOWN CCU80_CC80_DTC_DTCC";

    switch (instance)
    {
    case CCU80_CC80_DTC_DTCC::value1:
        result = "value1";
        break;
    case CCU80_CC80_DTC_DTCC::value2:
        result = "value2";
        break;
    case CCU80_CC80_DTC_DTCC::value3:
        result = "value3";
        break;
    case CCU80_CC80_DTC_DTCC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_DTC_DTCC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_DTC_DTCC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_DTC_DTCC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_DTC_DTCC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU80_CC80_DTC_DTCC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU80_CC80_DTC_DTCC::value4;
    }

    return result;
}

}; // namespace XMC4700
