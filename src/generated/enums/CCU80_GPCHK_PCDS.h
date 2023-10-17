/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GPCHK_PCDS : uint8_t
{
    a /*!< CCU8x.IGBTA */,
    b = 1 /*!< CCU8x.IGBTB */,
    c = 2 /*!< CCU8x.IGBTC */,
    d = 3 /*!< CCU8x.IGBTD */
};
static_assert(sizeof(CCU80_GPCHK_PCDS) == 1);

/**
 * Converts CCU80_GPCHK_PCDS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GPCHK_PCDS instance)
{
    const char *result = "UNKNOWN CCU80_GPCHK_PCDS";

    switch (instance)
    {
    case CCU80_GPCHK_PCDS::a:
        result = "a";
        break;
    case CCU80_GPCHK_PCDS::b:
        result = "b";
        break;
    case CCU80_GPCHK_PCDS::c:
        result = "c";
        break;
    case CCU80_GPCHK_PCDS::d:
        result = "d";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GPCHK_PCDS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GPCHK_PCDS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "a", 1)))
    {
        output = CCU80_GPCHK_PCDS::a;
    }
    else if ((result = !strncmp(data, "b", 1)))
    {
        output = CCU80_GPCHK_PCDS::b;
    }
    else if ((result = !strncmp(data, "c", 1)))
    {
        output = CCU80_GPCHK_PCDS::c;
    }
    else if ((result = !strncmp(data, "d", 1)))
    {
        output = CCU80_GPCHK_PCDS::d;
    }

    return result;
}

}; // namespace XMC4700
