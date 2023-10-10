/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU4_INS_EV0IS : uint8_t
{
    value1 /*!< CCU4x.INyA */,
    value2 = 1 /*!< CCU4x.INyB */,
    value3 = 2 /*!< CCU4x.INyC */,
    value4 = 3 /*!< CCU4x.INyD */,
    value5 = 4 /*!< CCU4x.INyE */,
    value6 = 5 /*!< CCU4x.INyF */,
    value7 = 6 /*!< CCU4x.INyG */,
    value8 = 7 /*!< CCU4x.INyH */,
    value9 = 8 /*!< CCU4x.INyI */,
    value10 = 9 /*!< CCU4x.INyJ */,
    value11 = 10 /*!< CCU4x.INyK */,
    value12 = 11 /*!< CCU4x.INyL */,
    value13 = 12 /*!< CCU4x.INyM */,
    value14 = 13 /*!< CCU4x.INyN */,
    value15 = 14 /*!< CCU4x.INyO */,
    value16 = 15 /*!< CCU4x.INyP */
};
static_assert(sizeof(CCU4_INS_EV0IS) == 1);

static constexpr uint16_t CCU4_INS_EV0IS_id = 41;

/**
 * Converts CCU4_INS_EV0IS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU4_INS_EV0IS instance)
{
    const char *result = "UNKNOWN CCU4_INS_EV0IS";

    switch (instance)
    {
    case CCU4_INS_EV0IS::value1:
        result = "value1";
        break;
    case CCU4_INS_EV0IS::value2:
        result = "value2";
        break;
    case CCU4_INS_EV0IS::value3:
        result = "value3";
        break;
    case CCU4_INS_EV0IS::value4:
        result = "value4";
        break;
    case CCU4_INS_EV0IS::value5:
        result = "value5";
        break;
    case CCU4_INS_EV0IS::value6:
        result = "value6";
        break;
    case CCU4_INS_EV0IS::value7:
        result = "value7";
        break;
    case CCU4_INS_EV0IS::value8:
        result = "value8";
        break;
    case CCU4_INS_EV0IS::value9:
        result = "value9";
        break;
    case CCU4_INS_EV0IS::value10:
        result = "value10";
        break;
    case CCU4_INS_EV0IS::value11:
        result = "value11";
        break;
    case CCU4_INS_EV0IS::value12:
        result = "value12";
        break;
    case CCU4_INS_EV0IS::value13:
        result = "value13";
        break;
    case CCU4_INS_EV0IS::value14:
        result = "value14";
        break;
    case CCU4_INS_EV0IS::value15:
        result = "value15";
        break;
    case CCU4_INS_EV0IS::value16:
        result = "value16";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU4_INS_EV0IS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU4_INS_EV0IS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU4_INS_EV0IS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU4_INS_EV0IS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU4_INS_EV0IS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU4_INS_EV0IS::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = CCU4_INS_EV0IS::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = CCU4_INS_EV0IS::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = CCU4_INS_EV0IS::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = CCU4_INS_EV0IS::value8;
    }
    else if ((result = !strncmp(data, "value9", 6)))
    {
        output = CCU4_INS_EV0IS::value9;
    }
    else if ((result = !strncmp(data, "value10", 7)))
    {
        output = CCU4_INS_EV0IS::value10;
    }
    else if ((result = !strncmp(data, "value11", 7)))
    {
        output = CCU4_INS_EV0IS::value11;
    }
    else if ((result = !strncmp(data, "value12", 7)))
    {
        output = CCU4_INS_EV0IS::value12;
    }
    else if ((result = !strncmp(data, "value13", 7)))
    {
        output = CCU4_INS_EV0IS::value13;
    }
    else if ((result = !strncmp(data, "value14", 7)))
    {
        output = CCU4_INS_EV0IS::value14;
    }
    else if ((result = !strncmp(data, "value15", 7)))
    {
        output = CCU4_INS_EV0IS::value15;
    }
    else if ((result = !strncmp(data, "value16", 7)))
    {
        output = CCU4_INS_EV0IS::value16;
    }

    return result;
}

}; // namespace XMC4700
