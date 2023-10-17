/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_RES_CRS : uint8_t
{
    _0 /*!< Request source 0 */,
    _1 = 1 /*!< Request source 1 */,
    _2 = 2 /*!< Request source 2 */
};
static_assert(sizeof(VADC_G0_RES_CRS) == 1);

/**
 * Converts VADC_G0_RES_CRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_RES_CRS instance)
{
    const char *result = "UNKNOWN VADC_G0_RES_CRS";

    switch (instance)
    {
    case VADC_G0_RES_CRS::_0:
        result = "_0";
        break;
    case VADC_G0_RES_CRS::_1:
        result = "_1";
        break;
    case VADC_G0_RES_CRS::_2:
        result = "_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_RES_CRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_RES_CRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = VADC_G0_RES_CRS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = VADC_G0_RES_CRS::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = VADC_G0_RES_CRS::_2;
    }

    return result;
}

}; // namespace XMC4700
