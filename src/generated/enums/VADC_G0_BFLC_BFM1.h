/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFLC_BFM1 : uint8_t
{
    value1 /*!< Disable boundary flag, BFLy is not changed */,
    value2 = 1 /*!< Always enable boundary flag (follow compare results) */,
    value3 = 2 /*!< Enable boundary flag while gate of source 0 is active, clear BFLy while gate is inactive */,
    value4 = 3 /*!< Enable boundary flag while gate of source 1 is active, clear BFLy while gate is inactive */
};
static_assert(sizeof(VADC_G0_BFLC_BFM1) == 1);

/**
 * Converts VADC_G0_BFLC_BFM1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFLC_BFM1 instance)
{
    const char *result = "UNKNOWN VADC_G0_BFLC_BFM1";

    switch (instance)
    {
    case VADC_G0_BFLC_BFM1::value1:
        result = "value1";
        break;
    case VADC_G0_BFLC_BFM1::value2:
        result = "value2";
        break;
    case VADC_G0_BFLC_BFM1::value3:
        result = "value3";
        break;
    case VADC_G0_BFLC_BFM1::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFLC_BFM1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFLC_BFM1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_BFLC_BFM1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_BFLC_BFM1::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_BFLC_BFM1::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_G0_BFLC_BFM1::value4;
    }

    return result;
}

}; // namespace XMC4700
