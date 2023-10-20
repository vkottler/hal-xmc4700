/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_FDR_DM : uint8_t
{
    divider_switched_off_ffd_0 /*!< The divider is switched off, fFD = 0. */,
    normal_divider_mode_selected = 1 /*!< Normal divider mode selected. */,
    fractional_divider_mode_selected =
        2 /*!< Fractional divider mode selected. */,
    divider_switched_off_ffd_0_x =
        3 /*!< The divider is switched off, fFD = 0. */
};
static_assert(sizeof(USIC0_CH0_FDR_DM) == 1);

/**
 * Converts USIC0_CH0_FDR_DM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_FDR_DM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_FDR_DM";

    switch (instance)
    {
    case USIC0_CH0_FDR_DM::divider_switched_off_ffd_0:
        result = "divider_switched_off_ffd_0";
        break;
    case USIC0_CH0_FDR_DM::normal_divider_mode_selected:
        result = "normal_divider_mode_selected";
        break;
    case USIC0_CH0_FDR_DM::fractional_divider_mode_selected:
        result = "fractional_divider_mode_selected";
        break;
    case USIC0_CH0_FDR_DM::divider_switched_off_ffd_0_x:
        result = "divider_switched_off_ffd_0_x";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_FDR_DM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_FDR_DM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "divider_switched_off_ffd_0", 26)))
    {
        output = USIC0_CH0_FDR_DM::divider_switched_off_ffd_0;
    }
    else if ((result = !strncmp(data, "normal_divider_mode_selected", 28)))
    {
        output = USIC0_CH0_FDR_DM::normal_divider_mode_selected;
    }
    else if ((result = !strncmp(data, "fractional_divider_mode_selected", 32)))
    {
        output = USIC0_CH0_FDR_DM::fractional_divider_mode_selected;
    }
    else if ((result = !strncmp(data, "divider_switched_off_ffd_0_x", 28)))
    {
        output = USIC0_CH0_FDR_DM::divider_switched_off_ffd_0_x;
    }

    return result;
}

}; // namespace XMC4700
