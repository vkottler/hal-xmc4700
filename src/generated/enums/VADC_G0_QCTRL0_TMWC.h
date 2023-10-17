/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QCTRL0_TMWC : uint8_t
{
    no_write_access_timer_mode /*!< No write access to timer mode */,
    bitfield_tmen_can_be_written = 1 /*!< Bitfield TMEN can be written */
};
static_assert(sizeof(VADC_G0_QCTRL0_TMWC) == 1);

/**
 * Converts VADC_G0_QCTRL0_TMWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QCTRL0_TMWC instance)
{
    const char *result = "UNKNOWN VADC_G0_QCTRL0_TMWC";

    switch (instance)
    {
    case VADC_G0_QCTRL0_TMWC::no_write_access_timer_mode:
        result = "no_write_access_timer_mode";
        break;
    case VADC_G0_QCTRL0_TMWC::bitfield_tmen_can_be_written:
        result = "bitfield_tmen_can_be_written";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QCTRL0_TMWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QCTRL0_TMWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_access_timer_mode", 26)))
    {
        output = VADC_G0_QCTRL0_TMWC::no_write_access_timer_mode;
    }
    else if ((result = !strncmp(data, "bitfield_tmen_can_be_written", 28)))
    {
        output = VADC_G0_QCTRL0_TMWC::bitfield_tmen_can_be_written;
    }

    return result;
}

}; // namespace XMC4700
