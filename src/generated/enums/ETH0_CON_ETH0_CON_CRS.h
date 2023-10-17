/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ETH0_CON_ETH0_CON_CRS : uint8_t
{
    a /*!< Data input CRSA */,
    b = 1 /*!< Data input CRSB */,
    c = 2 /*!< Data input CRSC */,
    d = 3 /*!< Data input CRSD */
};
static_assert(sizeof(ETH0_CON_ETH0_CON_CRS) == 1);

/**
 * Converts ETH0_CON_ETH0_CON_CRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ETH0_CON_ETH0_CON_CRS instance)
{
    const char *result = "UNKNOWN ETH0_CON_ETH0_CON_CRS";

    switch (instance)
    {
    case ETH0_CON_ETH0_CON_CRS::a:
        result = "a";
        break;
    case ETH0_CON_ETH0_CON_CRS::b:
        result = "b";
        break;
    case ETH0_CON_ETH0_CON_CRS::c:
        result = "c";
        break;
    case ETH0_CON_ETH0_CON_CRS::d:
        result = "d";
        break;
    }

    return result;
}

/**
 * Converts a C string to ETH0_CON_ETH0_CON_CRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ETH0_CON_ETH0_CON_CRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "a", 1)))
    {
        output = ETH0_CON_ETH0_CON_CRS::a;
    }
    else if ((result = !strncmp(data, "b", 1)))
    {
        output = ETH0_CON_ETH0_CON_CRS::b;
    }
    else if ((result = !strncmp(data, "c", 1)))
    {
        output = ETH0_CON_ETH0_CON_CRS::c;
    }
    else if ((result = !strncmp(data, "d", 1)))
    {
        output = ETH0_CON_ETH0_CON_CRS::d;
    }

    return result;
}

}; // namespace XMC4700
