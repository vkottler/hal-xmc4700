/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_NR_LEDCOL : uint8_t
{
    _1_led_column /*!< 1 LED column */,
    _2_led_columns = 1 /*!< 2 LED columns */,
    _3_led_columns = 2 /*!< 3 LED columns */,
    _4_led_columns = 3 /*!< 4 LED columns */,
    _5_led_columns = 4 /*!< 5 LED columns */,
    _6_led_columns = 5 /*!< 6 LED columns */,
    _7_led_columns = 6 /*!< 7 LED columns */,
    _8_led_columns_max_led_columns_7_if_bit_ts_en_1 =
        7 /*!< 8 LED columns (max. LED columns = 7 if bit TS_EN = 1) */
};
static_assert(sizeof(LEDTS0_FNCTL_NR_LEDCOL) == 1);

/**
 * Converts LEDTS0_FNCTL_NR_LEDCOL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_NR_LEDCOL instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_NR_LEDCOL";

    switch (instance)
    {
    case LEDTS0_FNCTL_NR_LEDCOL::_1_led_column:
        result = "_1_led_column";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::_2_led_columns:
        result = "_2_led_columns";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::_3_led_columns:
        result = "_3_led_columns";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::_4_led_columns:
        result = "_4_led_columns";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::_5_led_columns:
        result = "_5_led_columns";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::_6_led_columns:
        result = "_6_led_columns";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::_7_led_columns:
        result = "_7_led_columns";
        break;
    case LEDTS0_FNCTL_NR_LEDCOL::
        _8_led_columns_max_led_columns_7_if_bit_ts_en_1:
        result = "_8_led_columns_max_led_columns_7_if_bit_ts_en_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_NR_LEDCOL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_NR_LEDCOL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1_led_column", 13)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_1_led_column;
    }
    else if ((result = !strncmp(data, "_2_led_columns", 14)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_2_led_columns;
    }
    else if ((result = !strncmp(data, "_3_led_columns", 14)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_3_led_columns;
    }
    else if ((result = !strncmp(data, "_4_led_columns", 14)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_4_led_columns;
    }
    else if ((result = !strncmp(data, "_5_led_columns", 14)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_5_led_columns;
    }
    else if ((result = !strncmp(data, "_6_led_columns", 14)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_6_led_columns;
    }
    else if ((result = !strncmp(data, "_7_led_columns", 14)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::_7_led_columns;
    }
    else if ((result = !strncmp(
                  data, "_8_led_columns_max_led_columns_7_if_bit_ts_en_1",
                  47)))
    {
        output = LEDTS0_FNCTL_NR_LEDCOL::
            _8_led_columns_max_led_columns_7_if_bit_ts_en_1;
    }

    return result;
}

}; // namespace XMC4700
