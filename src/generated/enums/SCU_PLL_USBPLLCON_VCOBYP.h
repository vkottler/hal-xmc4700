/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_USBPLLCON_VCOBYP : uint8_t
{
    value1 /*!< Normal operation, VCO is not bypassed */,
    value2 = 1 /*!< Prescaler Mode, VCO is bypassed */
};
static_assert(sizeof(SCU_PLL_USBPLLCON_VCOBYP) == 1);

static constexpr uint16_t SCU_PLL_USBPLLCON_VCOBYP_id = 2799;

/**
 * Converts SCU_PLL_USBPLLCON_VCOBYP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_USBPLLCON_VCOBYP instance)
{
    const char *result = "UNKNOWN SCU_PLL_USBPLLCON_VCOBYP";

    switch (instance)
    {
    case SCU_PLL_USBPLLCON_VCOBYP::value1:
        result = "value1";
        break;
    case SCU_PLL_USBPLLCON_VCOBYP::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_USBPLLCON_VCOBYP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_USBPLLCON_VCOBYP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_USBPLLCON_VCOBYP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_USBPLLCON_VCOBYP::value2;
    }

    return result;
}

}; // namespace XMC4700
