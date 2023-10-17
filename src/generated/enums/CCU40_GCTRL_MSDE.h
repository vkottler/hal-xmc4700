/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GCTRL_MSDE : uint8_t
{
    only_shadow_transfer_period_compare_values_re_cont /*!< Only the shadow
                                                          transfer for period
                                                          and compare values is
                                                          requested */
        ,
    shadow_transfer_compare_period_prescaler_comp_cont =
        1 /*!< Shadow transfer for the compare, period and prescaler compare
             values is requested */
        ,
    shadow_transfer_compare_period_prescaler_dith_cont =
        3 /*!< Shadow transfer for the compare, period, prescaler and dither
             compare values is requested */
};
static_assert(sizeof(CCU40_GCTRL_MSDE) == 1);

/**
 * Converts CCU40_GCTRL_MSDE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCTRL_MSDE instance)
{
    const char *result = "UNKNOWN CCU40_GCTRL_MSDE";

    switch (instance)
    {
    case CCU40_GCTRL_MSDE::only_shadow_transfer_period_compare_values_re_cont:
        result = "only_shadow_transfer_period_compare_values_re_cont";
        break;
    case CCU40_GCTRL_MSDE::shadow_transfer_compare_period_prescaler_comp_cont:
        result = "shadow_transfer_compare_period_prescaler_comp_cont";
        break;
    case CCU40_GCTRL_MSDE::shadow_transfer_compare_period_prescaler_dith_cont:
        result = "shadow_transfer_compare_period_prescaler_dith_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCTRL_MSDE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCTRL_MSDE &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "only_shadow_transfer_period_compare_values_re_cont", 50)))
    {
        output = CCU40_GCTRL_MSDE::
            only_shadow_transfer_period_compare_values_re_cont;
    }
    else if ((result = !strncmp(
                  data, "shadow_transfer_compare_period_prescaler_comp_cont",
                  50)))
    {
        output = CCU40_GCTRL_MSDE::
            shadow_transfer_compare_period_prescaler_comp_cont;
    }
    else if ((result = !strncmp(
                  data, "shadow_transfer_compare_period_prescaler_dith_cont",
                  50)))
    {
        output = CCU40_GCTRL_MSDE::
            shadow_transfer_compare_period_prescaler_dith_cont;
    }

    return result;
}

}; // namespace XMC4700
