/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_EWIL : uint8_t
{
    high /*!< POSIFx.EWHE[D...A] signal is active HIGH */,
    low = 1 /*!< POSIFx.EWHE[D...A] signal is active LOW */
};
static_assert(sizeof(POSIF0_PCONF_EWIL) == 1);

/**
 * Converts POSIF0_PCONF_EWIL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_EWIL instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_EWIL";

    switch (instance)
    {
    case POSIF0_PCONF_EWIL::high:
        result = "high";
        break;
    case POSIF0_PCONF_EWIL::low:
        result = "low";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_EWIL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_EWIL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "high", 4)))
    {
        output = POSIF0_PCONF_EWIL::high;
    }
    else if ((result = !strncmp(data, "low", 3)))
    {
        output = POSIF0_PCONF_EWIL::low;
    }

    return result;
}

}; // namespace XMC4700
