/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSCR_CSRBI : uint8_t
{
    no_effect /*!< No effect. */,
    clear_trbsrsrbi = 1 /*!< Clear TRBSR.SRBI. */
};
static_assert(sizeof(USIC0_CH0_TRBSCR_CSRBI) == 1);

/**
 * Converts USIC0_CH0_TRBSCR_CSRBI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSCR_CSRBI instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSCR_CSRBI";

    switch (instance)
    {
    case USIC0_CH0_TRBSCR_CSRBI::no_effect:
        result = "no_effect";
        break;
    case USIC0_CH0_TRBSCR_CSRBI::clear_trbsrsrbi:
        result = "clear_trbsrsrbi";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSCR_CSRBI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSCR_CSRBI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = USIC0_CH0_TRBSCR_CSRBI::no_effect;
    }
    else if ((result = !strncmp(data, "clear_trbsrsrbi", 15)))
    {
        output = USIC0_CH0_TRBSCR_CSRBI::clear_trbsrsrbi;
    }

    return result;
}

}; // namespace XMC4700
