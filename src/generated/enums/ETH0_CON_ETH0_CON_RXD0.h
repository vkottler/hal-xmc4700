/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ETH0_CON_ETH0_CON_RXD0 : uint8_t
{
    value1 /*!< Data input RXD0A is selected */,
    value2 = 1 /*!< Data input RXD0B is selected */,
    value3 = 2 /*!< Data input RXD0C is selected */,
    value4 = 3 /*!< Data input RXD0D is selected */
};
static_assert(sizeof(ETH0_CON_ETH0_CON_RXD0) == 1);

/**
 * Converts ETH0_CON_ETH0_CON_RXD0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ETH0_CON_ETH0_CON_RXD0 instance)
{
    const char *result = "UNKNOWN ETH0_CON_ETH0_CON_RXD0";

    switch (instance)
    {
    case ETH0_CON_ETH0_CON_RXD0::value1:
        result = "value1";
        break;
    case ETH0_CON_ETH0_CON_RXD0::value2:
        result = "value2";
        break;
    case ETH0_CON_ETH0_CON_RXD0::value3:
        result = "value3";
        break;
    case ETH0_CON_ETH0_CON_RXD0::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ETH0_CON_ETH0_CON_RXD0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ETH0_CON_ETH0_CON_RXD0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD0::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD0::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD0::value4;
    }

    return result;
}

}; // namespace XMC4700
