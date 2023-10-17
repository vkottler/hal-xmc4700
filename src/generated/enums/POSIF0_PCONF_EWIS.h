/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_EWIS : uint8_t
{
    a /*!< POSIFx.EWHEA */,
    b = 1 /*!< POSIFx.EWHEB */,
    c = 2 /*!< POSIFx.EWHEC */,
    d = 3 /*!< POSIFx.EWHED */
};
static_assert(sizeof(POSIF0_PCONF_EWIS) == 1);

/**
 * Converts POSIF0_PCONF_EWIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_EWIS instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_EWIS";

    switch (instance)
    {
    case POSIF0_PCONF_EWIS::a:
        result = "a";
        break;
    case POSIF0_PCONF_EWIS::b:
        result = "b";
        break;
    case POSIF0_PCONF_EWIS::c:
        result = "c";
        break;
    case POSIF0_PCONF_EWIS::d:
        result = "d";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_EWIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_EWIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "a", 1)))
    {
        output = POSIF0_PCONF_EWIS::a;
    }
    else if ((result = !strncmp(data, "b", 1)))
    {
        output = POSIF0_PCONF_EWIS::b;
    }
    else if ((result = !strncmp(data, "c", 1)))
    {
        output = POSIF0_PCONF_EWIS::c;
    }
    else if ((result = !strncmp(data, "d", 1)))
    {
        output = POSIF0_PCONF_EWIS::d;
    }

    return result;
}

}; // namespace XMC4700
