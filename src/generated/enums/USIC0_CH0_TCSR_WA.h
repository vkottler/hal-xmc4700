/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_WA : uint8_t
{
    falling_edge_wa_has_been_detected_referring_psrwa /*!< The data word in
                                                         TBUF will be
                                                         transmitted after a
                                                         falling edge of WA has
                                                         been detected
                                                         (referring to PSR.WA).
                                                       */
        ,
    rising_edge_wa_has_been_detected_referring_psrwa =
        1 /*!< The data word in TBUF will be transmitted after a rising edge of
             WA has been detected (referring to PSR.WA). */
};
static_assert(sizeof(USIC0_CH0_TCSR_WA) == 1);

/**
 * Converts USIC0_CH0_TCSR_WA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_WA instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_WA";

    switch (instance)
    {
    case USIC0_CH0_TCSR_WA::falling_edge_wa_has_been_detected_referring_psrwa:
        result = "falling_edge_wa_has_been_detected_referring_psrwa";
        break;
    case USIC0_CH0_TCSR_WA::rising_edge_wa_has_been_detected_referring_psrwa:
        result = "rising_edge_wa_has_been_detected_referring_psrwa";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_WA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_WA &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "falling_edge_wa_has_been_detected_referring_psrwa", 49)))
    {
        output = USIC0_CH0_TCSR_WA::
            falling_edge_wa_has_been_detected_referring_psrwa;
    }
    else if ((result = !strncmp(
                  data, "rising_edge_wa_has_been_detected_referring_psrwa",
                  48)))
    {
        output = USIC0_CH0_TCSR_WA::
            rising_edge_wa_has_been_detected_referring_psrwa;
    }

    return result;
}

}; // namespace XMC4700
