/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFLS_BFC3 : uint8_t
{
    no_action /*!< No action */,
    clear_bit_bfly = 1 /*!< Clear bit BFLy */
};
static_assert(sizeof(VADC_G0_BFLS_BFC3) == 1);

/**
 * Converts VADC_G0_BFLS_BFC3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFLS_BFC3 instance)
{
    const char *result = "UNKNOWN VADC_G0_BFLS_BFC3";

    switch (instance)
    {
    case VADC_G0_BFLS_BFC3::no_action:
        result = "no_action";
        break;
    case VADC_G0_BFLS_BFC3::clear_bit_bfly:
        result = "clear_bit_bfly";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFLS_BFC3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFLS_BFC3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_BFLS_BFC3::no_action;
    }
    else if ((result = !strncmp(data, "clear_bit_bfly", 14)))
    {
        output = VADC_G0_BFLS_BFC3::clear_bit_bfly;
    }

    return result;
}

}; // namespace XMC4700
