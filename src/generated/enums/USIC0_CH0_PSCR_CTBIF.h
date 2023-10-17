/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSCR_CTBIF : uint8_t
{
    no_action /*!< No action */,
    flag_psrtbif_cleared = 1 /*!< Flag PSR.TBIF is cleared. */
};
static_assert(sizeof(USIC0_CH0_PSCR_CTBIF) == 1);

/**
 * Converts USIC0_CH0_PSCR_CTBIF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSCR_CTBIF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSCR_CTBIF";

    switch (instance)
    {
    case USIC0_CH0_PSCR_CTBIF::no_action:
        result = "no_action";
        break;
    case USIC0_CH0_PSCR_CTBIF::flag_psrtbif_cleared:
        result = "flag_psrtbif_cleared";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSCR_CTBIF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSCR_CTBIF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = USIC0_CH0_PSCR_CTBIF::no_action;
    }
    else if ((result = !strncmp(data, "flag_psrtbif_cleared", 20)))
    {
        output = USIC0_CH0_PSCR_CTBIF::flag_psrtbif_cleared;
    }

    return result;
}

}; // namespace XMC4700
