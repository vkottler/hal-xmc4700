/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_INS_EV2IS : uint8_t
{
    value1 /*!< CCU8x.INyA */,
    value2 = 1 /*!< CCU8x.INyB */,
    value3 = 2 /*!< CCU8x.INyC */,
    value4 = 3 /*!< CCU8x.INyD */,
    value5 = 4 /*!< CCU8x.INyE */,
    value6 = 5 /*!< CCU8x.INyF */,
    value7 = 6 /*!< CCU8x.INyG */,
    value8 = 7 /*!< CCU8x.INyH */,
    value9 = 8 /*!< CCU8x.INyI */,
    value10 = 9 /*!< CCU8x.INyJ */,
    value11 = 10 /*!< CCU8x.INyK */,
    value12 = 11 /*!< CCU8x.INyL */,
    value13 = 12 /*!< CCU8x.INyM */,
    value14 = 13 /*!< CCU8x.INyN */,
    value15 = 14 /*!< CCU8x.INyO */,
    value16 = 15 /*!< CCU8x.INyP */
};
static_assert(sizeof(CCU80_CC80_INS_EV2IS) == 1);

static constexpr uint16_t CCU80_CC80_INS_EV2IS_id = 195;

/**
 * Converts CCU80_CC80_INS_EV2IS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_INS_EV2IS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_INS_EV2IS";

    switch (instance)
    {
    case CCU80_CC80_INS_EV2IS::value1:
        result = "value1";
        break;
    case CCU80_CC80_INS_EV2IS::value2:
        result = "value2";
        break;
    case CCU80_CC80_INS_EV2IS::value3:
        result = "value3";
        break;
    case CCU80_CC80_INS_EV2IS::value4:
        result = "value4";
        break;
    case CCU80_CC80_INS_EV2IS::value5:
        result = "value5";
        break;
    case CCU80_CC80_INS_EV2IS::value6:
        result = "value6";
        break;
    case CCU80_CC80_INS_EV2IS::value7:
        result = "value7";
        break;
    case CCU80_CC80_INS_EV2IS::value8:
        result = "value8";
        break;
    case CCU80_CC80_INS_EV2IS::value9:
        result = "value9";
        break;
    case CCU80_CC80_INS_EV2IS::value10:
        result = "value10";
        break;
    case CCU80_CC80_INS_EV2IS::value11:
        result = "value11";
        break;
    case CCU80_CC80_INS_EV2IS::value12:
        result = "value12";
        break;
    case CCU80_CC80_INS_EV2IS::value13:
        result = "value13";
        break;
    case CCU80_CC80_INS_EV2IS::value14:
        result = "value14";
        break;
    case CCU80_CC80_INS_EV2IS::value15:
        result = "value15";
        break;
    case CCU80_CC80_INS_EV2IS::value16:
        result = "value16";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_INS_EV2IS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_INS_EV2IS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value8;
    }
    else if ((result = !strncmp(data, "value9", 6)))
    {
        output = CCU80_CC80_INS_EV2IS::value9;
    }
    else if ((result = !strncmp(data, "value10", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value10;
    }
    else if ((result = !strncmp(data, "value11", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value11;
    }
    else if ((result = !strncmp(data, "value12", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value12;
    }
    else if ((result = !strncmp(data, "value13", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value13;
    }
    else if ((result = !strncmp(data, "value14", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value14;
    }
    else if ((result = !strncmp(data, "value15", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value15;
    }
    else if ((result = !strncmp(data, "value16", 7)))
    {
        output = CCU80_CC80_INS_EV2IS::value16;
    }

    return result;
}

}; // namespace XMC4700
