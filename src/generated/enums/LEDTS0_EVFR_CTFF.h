/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_EVFR_CTFF : uint8_t
{
    no_action /*!< No action. */,
    bit_tff_cleared = 1 /*!< Bit TFF is cleared. */
};
static_assert(sizeof(LEDTS0_EVFR_CTFF) == 1);

/**
 * Converts LEDTS0_EVFR_CTFF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_EVFR_CTFF instance)
{
    const char *result = "UNKNOWN LEDTS0_EVFR_CTFF";

    switch (instance)
    {
    case LEDTS0_EVFR_CTFF::no_action:
        result = "no_action";
        break;
    case LEDTS0_EVFR_CTFF::bit_tff_cleared:
        result = "bit_tff_cleared";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_EVFR_CTFF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_EVFR_CTFF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = LEDTS0_EVFR_CTFF::no_action;
    }
    else if ((result = !strncmp(data, "bit_tff_cleared", 15)))
    {
        output = LEDTS0_EVFR_CTFF::bit_tff_cleared;
    }

    return result;
}

}; // namespace XMC4700
