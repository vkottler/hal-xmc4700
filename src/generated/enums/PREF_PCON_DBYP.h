/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PREF_PCON_DBYP : uint8_t
{
    not_bypassed /*!< Prefetch Data buffer not bypassed. */,
    bypassed = 1 /*!< Prefetch Data buffer bypassed. */
};
static_assert(sizeof(PREF_PCON_DBYP) == 1);

/**
 * Converts PREF_PCON_DBYP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PREF_PCON_DBYP instance)
{
    const char *result = "UNKNOWN PREF_PCON_DBYP";

    switch (instance)
    {
    case PREF_PCON_DBYP::not_bypassed:
        result = "not_bypassed";
        break;
    case PREF_PCON_DBYP::bypassed:
        result = "bypassed";
        break;
    }

    return result;
}

/**
 * Converts a C string to PREF_PCON_DBYP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PREF_PCON_DBYP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_bypassed", 12)))
    {
        output = PREF_PCON_DBYP::not_bypassed;
    }
    else if ((result = !strncmp(data, "bypassed", 8)))
    {
        output = PREF_PCON_DBYP::bypassed;
    }

    return result;
}

}; // namespace XMC4700
