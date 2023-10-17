/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFL_BFA3 : uint8_t
{
    above_defined_band_or_compare_value_clear_if_below /*!< Set boundary flag
                                                          BFLy if result is
                                                          above the defined
                                                          band or compare
                                                          value, clear if below
                                                        */
        ,
    below_defined_band_or_compare_value_clear_if_above =
        1 /*!< Set boundary flag BFLy if result is below the defined band or
             compare value, clear if above */
};
static_assert(sizeof(VADC_G0_BFL_BFA3) == 1);

/**
 * Converts VADC_G0_BFL_BFA3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFL_BFA3 instance)
{
    const char *result = "UNKNOWN VADC_G0_BFL_BFA3";

    switch (instance)
    {
    case VADC_G0_BFL_BFA3::above_defined_band_or_compare_value_clear_if_below:
        result = "above_defined_band_or_compare_value_clear_if_below";
        break;
    case VADC_G0_BFL_BFA3::below_defined_band_or_compare_value_clear_if_above:
        result = "below_defined_band_or_compare_value_clear_if_above";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFL_BFA3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFL_BFA3 &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "above_defined_band_or_compare_value_clear_if_below", 50)))
    {
        output = VADC_G0_BFL_BFA3::
            above_defined_band_or_compare_value_clear_if_below;
    }
    else if ((result = !strncmp(
                  data, "below_defined_band_or_compare_value_clear_if_above",
                  50)))
    {
        output = VADC_G0_BFL_BFA3::
            below_defined_band_or_compare_value_clear_if_above;
    }

    return result;
}

}; // namespace XMC4700
