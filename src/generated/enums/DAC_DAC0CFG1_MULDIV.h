/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG1_MULDIV : uint8_t
{
    downscale_division_shift_scale_positions_right /*!< downscale = division
                                                      (shift SCALE positions to
                                                      the right) */
        ,
    upscale_multiplication_shift_scale_positions_left =
        1 /*!< upscale = multiplication (shift SCALE positions to the left) */
};
static_assert(sizeof(DAC_DAC0CFG1_MULDIV) == 1);

/**
 * Converts DAC_DAC0CFG1_MULDIV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG1_MULDIV instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG1_MULDIV";

    switch (instance)
    {
    case DAC_DAC0CFG1_MULDIV::downscale_division_shift_scale_positions_right:
        result = "downscale_division_shift_scale_positions_right";
        break;
    case DAC_DAC0CFG1_MULDIV::
        upscale_multiplication_shift_scale_positions_left:
        result = "upscale_multiplication_shift_scale_positions_left";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG1_MULDIV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG1_MULDIV &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "downscale_division_shift_scale_positions_right", 46)))
    {
        output = DAC_DAC0CFG1_MULDIV::
            downscale_division_shift_scale_positions_right;
    }
    else if ((result = !strncmp(
                  data, "upscale_multiplication_shift_scale_positions_left",
                  49)))
    {
        output = DAC_DAC0CFG1_MULDIV::
            upscale_multiplication_shift_scale_positions_left;
    }

    return result;
}

}; // namespace XMC4700
