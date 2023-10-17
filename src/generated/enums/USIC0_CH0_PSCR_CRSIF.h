/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSCR_CRSIF : uint8_t
{
    no_action /*!< No action */,
    flag_psrrsif_cleared = 1 /*!< Flag PSR.RSIF is cleared. */
};
static_assert(sizeof(USIC0_CH0_PSCR_CRSIF) == 1);

/**
 * Converts USIC0_CH0_PSCR_CRSIF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSCR_CRSIF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSCR_CRSIF";

    switch (instance)
    {
    case USIC0_CH0_PSCR_CRSIF::no_action:
        result = "no_action";
        break;
    case USIC0_CH0_PSCR_CRSIF::flag_psrrsif_cleared:
        result = "flag_psrrsif_cleared";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSCR_CRSIF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSCR_CRSIF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = USIC0_CH0_PSCR_CRSIF::no_action;
    }
    else if ((result = !strncmp(data, "flag_psrrsif_cleared", 20)))
    {
        output = USIC0_CH0_PSCR_CRSIF::flag_psrrsif_cleared;
    }

    return result;
}

}; // namespace XMC4700
