/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLCON0_VCOBYP : uint8_t
{
    normal_operation_vco_not_bypassed /*!< Normal operation, VCO is not
                                         bypassed */
        ,
    prescaler_mode_vco_bypassed = 1 /*!< Prescaler Mode, VCO is bypassed */
};
static_assert(sizeof(SCU_PLL_PLLCON0_VCOBYP) == 1);

/**
 * Converts SCU_PLL_PLLCON0_VCOBYP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLCON0_VCOBYP instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLCON0_VCOBYP";

    switch (instance)
    {
    case SCU_PLL_PLLCON0_VCOBYP::normal_operation_vco_not_bypassed:
        result = "normal_operation_vco_not_bypassed";
        break;
    case SCU_PLL_PLLCON0_VCOBYP::prescaler_mode_vco_bypassed:
        result = "prescaler_mode_vco_bypassed";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLCON0_VCOBYP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLCON0_VCOBYP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "normal_operation_vco_not_bypassed", 33)))
    {
        output = SCU_PLL_PLLCON0_VCOBYP::normal_operation_vco_not_bypassed;
    }
    else if ((result = !strncmp(data, "prescaler_mode_vco_bypassed", 27)))
    {
        output = SCU_PLL_PLLCON0_VCOBYP::prescaler_mode_vco_bypassed;
    }

    return result;
}

}; // namespace XMC4700
