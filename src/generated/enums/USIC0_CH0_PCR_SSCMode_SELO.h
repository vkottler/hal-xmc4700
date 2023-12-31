/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_SSCMode_SELO : uint8_t
{
    not_be_activated /*!< The corresponding SELOx line cannot be activated. */,
    _be_activated_according_mode_selected_by_selctr =
        1 /*!< The corresponding SELOx line can be activated (according to the
             mode selected by SELCTR). */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_SELO) == 1);

/**
 * Converts USIC0_CH0_PCR_SSCMode_SELO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_SELO instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_SELO";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_SELO::not_be_activated:
        result = "not_be_activated";
        break;
    case USIC0_CH0_PCR_SSCMode_SELO::
        _be_activated_according_mode_selected_by_selctr:
        result = "_be_activated_according_mode_selected_by_selctr";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_SELO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_SSCMode_SELO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_be_activated", 16)))
    {
        output = USIC0_CH0_PCR_SSCMode_SELO::not_be_activated;
    }
    else if ((result = !strncmp(
                  data, "_be_activated_according_mode_selected_by_selctr",
                  47)))
    {
        output = USIC0_CH0_PCR_SSCMode_SELO::
            _be_activated_according_mode_selected_by_selctr;
    }

    return result;
}

}; // namespace XMC4700
