/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBICLASS_CME : uint8_t
{
    _12_bit_conversion /*!< 12-bit conversion */,
    _10_bit_conversion = 1 /*!< 10-bit conversion */,
    _8_bit_conversion = 2 /*!< 8-bit conversion */,
    _10_bit_fast_compare_mode = 5 /*!< 10-bit fast compare mode */
};
static_assert(sizeof(VADC_GLOBICLASS_CME) == 1);

/**
 * Converts VADC_GLOBICLASS_CME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBICLASS_CME instance)
{
    const char *result = "UNKNOWN VADC_GLOBICLASS_CME";

    switch (instance)
    {
    case VADC_GLOBICLASS_CME::_12_bit_conversion:
        result = "_12_bit_conversion";
        break;
    case VADC_GLOBICLASS_CME::_10_bit_conversion:
        result = "_10_bit_conversion";
        break;
    case VADC_GLOBICLASS_CME::_8_bit_conversion:
        result = "_8_bit_conversion";
        break;
    case VADC_GLOBICLASS_CME::_10_bit_fast_compare_mode:
        result = "_10_bit_fast_compare_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBICLASS_CME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBICLASS_CME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_12_bit_conversion", 18)))
    {
        output = VADC_GLOBICLASS_CME::_12_bit_conversion;
    }
    else if ((result = !strncmp(data, "_10_bit_conversion", 18)))
    {
        output = VADC_GLOBICLASS_CME::_10_bit_conversion;
    }
    else if ((result = !strncmp(data, "_8_bit_conversion", 17)))
    {
        output = VADC_GLOBICLASS_CME::_8_bit_conversion;
    }
    else if ((result = !strncmp(data, "_10_bit_fast_compare_mode", 25)))
    {
        output = VADC_GLOBICLASS_CME::_10_bit_fast_compare_mode;
    }

    return result;
}

}; // namespace XMC4700
