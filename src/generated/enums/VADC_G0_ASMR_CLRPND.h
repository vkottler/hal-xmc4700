/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ASMR_CLRPND : uint8_t
{
    no_action /*!< No action */,
    bits_register_gxaspndx_cleared =
        1 /*!< The bits in register GxASPNDx are cleared */
};
static_assert(sizeof(VADC_G0_ASMR_CLRPND) == 1);

/**
 * Converts VADC_G0_ASMR_CLRPND to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ASMR_CLRPND instance)
{
    const char *result = "UNKNOWN VADC_G0_ASMR_CLRPND";

    switch (instance)
    {
    case VADC_G0_ASMR_CLRPND::no_action:
        result = "no_action";
        break;
    case VADC_G0_ASMR_CLRPND::bits_register_gxaspndx_cleared:
        result = "bits_register_gxaspndx_cleared";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ASMR_CLRPND.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ASMR_CLRPND &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_ASMR_CLRPND::no_action;
    }
    else if ((result = !strncmp(data, "bits_register_gxaspndx_cleared", 30)))
    {
        output = VADC_G0_ASMR_CLRPND::bits_register_gxaspndx_cleared;
    }

    return result;
}

}; // namespace XMC4700
