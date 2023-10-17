/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_GLOBCTL_MASKVAL : uint8_t
{
    lsb_bit /*!< Mask LSB bit */,
    _2_lsb_bits = 1 /*!< Mask 2 LSB bits */,
    _8_lsb_bits = 7 /*!< Mask 8 LSB bits */
};
static_assert(sizeof(LEDTS0_GLOBCTL_MASKVAL) == 1);

/**
 * Converts LEDTS0_GLOBCTL_MASKVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_MASKVAL instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_MASKVAL";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_MASKVAL::lsb_bit:
        result = "lsb_bit";
        break;
    case LEDTS0_GLOBCTL_MASKVAL::_2_lsb_bits:
        result = "_2_lsb_bits";
        break;
    case LEDTS0_GLOBCTL_MASKVAL::_8_lsb_bits:
        result = "_8_lsb_bits";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_MASKVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_MASKVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "lsb_bit", 7)))
    {
        output = LEDTS0_GLOBCTL_MASKVAL::lsb_bit;
    }
    else if ((result = !strncmp(data, "_2_lsb_bits", 11)))
    {
        output = LEDTS0_GLOBCTL_MASKVAL::_2_lsb_bits;
    }
    else if ((result = !strncmp(data, "_8_lsb_bits", 11)))
    {
        output = LEDTS0_GLOBCTL_MASKVAL::_8_lsb_bits;
    }

    return result;
}

}; // namespace XMC4700
