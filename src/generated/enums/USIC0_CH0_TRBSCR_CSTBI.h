/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSCR_CSTBI : uint8_t
{
    no_effect /*!< No effect. */,
    clear_trbsrstbi = 1 /*!< Clear TRBSR.STBI. */
};
static_assert(sizeof(USIC0_CH0_TRBSCR_CSTBI) == 1);

/**
 * Converts USIC0_CH0_TRBSCR_CSTBI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSCR_CSTBI instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSCR_CSTBI";

    switch (instance)
    {
    case USIC0_CH0_TRBSCR_CSTBI::no_effect:
        result = "no_effect";
        break;
    case USIC0_CH0_TRBSCR_CSTBI::clear_trbsrstbi:
        result = "clear_trbsrstbi";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSCR_CSTBI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSCR_CSTBI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = USIC0_CH0_TRBSCR_CSTBI::no_effect;
    }
    else if ((result = !strncmp(data, "clear_trbsrstbi", 15)))
    {
        output = USIC0_CH0_TRBSCR_CSTBI::clear_trbsrstbi;
    }

    return result;
}

}; // namespace XMC4700
