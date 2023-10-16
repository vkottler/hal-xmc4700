/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ETH0_CON_ETH0_CON_MDIO : uint8_t
{
    value1 /*!< Data input MDIA is selected */,
    value2 = 1 /*!< Data input MDIB is selected */,
    value3 = 2 /*!< Data input MDIC is selected */,
    value4 = 3 /*!< Data input MDID is selected */
};
static_assert(sizeof(ETH0_CON_ETH0_CON_MDIO) == 1);

/**
 * Converts ETH0_CON_ETH0_CON_MDIO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ETH0_CON_ETH0_CON_MDIO instance)
{
    const char *result = "UNKNOWN ETH0_CON_ETH0_CON_MDIO";

    switch (instance)
    {
    case ETH0_CON_ETH0_CON_MDIO::value1:
        result = "value1";
        break;
    case ETH0_CON_ETH0_CON_MDIO::value2:
        result = "value2";
        break;
    case ETH0_CON_ETH0_CON_MDIO::value3:
        result = "value3";
        break;
    case ETH0_CON_ETH0_CON_MDIO::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ETH0_CON_ETH0_CON_MDIO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ETH0_CON_ETH0_CON_MDIO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ETH0_CON_ETH0_CON_MDIO::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ETH0_CON_ETH0_CON_MDIO::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ETH0_CON_ETH0_CON_MDIO::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ETH0_CON_ETH0_CON_MDIO::value4;
    }

    return result;
}

}; // namespace XMC4700
