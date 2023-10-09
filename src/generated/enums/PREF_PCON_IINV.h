/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PREF_PCON_IINV : uint8_t
{
    value1 /*!< No effect. */,
    value2 = 1 /*!< Initiate invalidation of entire instruction cache. */
};
static_assert(sizeof(PREF_PCON_IINV) == 1);

static constexpr uint16_t PREF_PCON_IINV_id = 1316;

/**
 * Converts PREF_PCON_IINV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PREF_PCON_IINV instance)
{
    const char *result = "UNKNOWN PREF_PCON_IINV";

    switch (instance)
    {
    case PREF_PCON_IINV::value1:
        result = "value1";
        break;
    case PREF_PCON_IINV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PREF_PCON_IINV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PREF_PCON_IINV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PREF_PCON_IINV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PREF_PCON_IINV::value2;
    }

    return result;
}

}; // namespace XMC4700
