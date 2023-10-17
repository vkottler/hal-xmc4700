/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBRCR_WFR : uint8_t
{
    overwrite_mode /*!< Overwrite mode */,
    wait_for_read_mode_enabled_this_register =
        1 /*!< Wait-for-read mode enabled for this register */
};
static_assert(sizeof(VADC_GLOBRCR_WFR) == 1);

/**
 * Converts VADC_GLOBRCR_WFR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBRCR_WFR instance)
{
    const char *result = "UNKNOWN VADC_GLOBRCR_WFR";

    switch (instance)
    {
    case VADC_GLOBRCR_WFR::overwrite_mode:
        result = "overwrite_mode";
        break;
    case VADC_GLOBRCR_WFR::wait_for_read_mode_enabled_this_register:
        result = "wait_for_read_mode_enabled_this_register";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBRCR_WFR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBRCR_WFR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "overwrite_mode", 14)))
    {
        output = VADC_GLOBRCR_WFR::overwrite_mode;
    }
    else if ((result = !strncmp(
                  data, "wait_for_read_mode_enabled_this_register", 40)))
    {
        output = VADC_GLOBRCR_WFR::wait_for_read_mode_enabled_this_register;
    }

    return result;
}

}; // namespace XMC4700
