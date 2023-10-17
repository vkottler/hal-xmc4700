/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QMR0_CEV : uint8_t
{
    no_action /*!< No action */,
    clear_bit_ev = 1 /*!< Clear bit EV */
};
static_assert(sizeof(VADC_G0_QMR0_CEV) == 1);

/**
 * Converts VADC_G0_QMR0_CEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QMR0_CEV instance)
{
    const char *result = "UNKNOWN VADC_G0_QMR0_CEV";

    switch (instance)
    {
    case VADC_G0_QMR0_CEV::no_action:
        result = "no_action";
        break;
    case VADC_G0_QMR0_CEV::clear_bit_ev:
        result = "clear_bit_ev";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QMR0_CEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QMR0_CEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_QMR0_CEV::no_action;
    }
    else if ((result = !strncmp(data, "clear_bit_ev", 12)))
    {
        output = VADC_G0_QMR0_CEV::clear_bit_ev;
    }

    return result;
}

}; // namespace XMC4700
