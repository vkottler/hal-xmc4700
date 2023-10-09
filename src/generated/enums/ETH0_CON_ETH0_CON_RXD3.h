/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ETH0_CON_ETH0_CON_RXD3 : uint8_t
{
    value1 /*!< Data input RXD3A is selected */,
    value2 = 1 /*!< Data input RXD3B is selected */,
    value3 = 2 /*!< Data input RXD3C is selected */,
    value4 = 3 /*!< Data input RXD3D is selected */
};
static_assert(sizeof(ETH0_CON_ETH0_CON_RXD3) == 1);

static constexpr uint16_t ETH0_CON_ETH0_CON_RXD3_id = 1355;

/**
 * Converts ETH0_CON_ETH0_CON_RXD3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ETH0_CON_ETH0_CON_RXD3 instance)
{
    const char *result = "UNKNOWN ETH0_CON_ETH0_CON_RXD3";

    switch (instance)
    {
    case ETH0_CON_ETH0_CON_RXD3::value1:
        result = "value1";
        break;
    case ETH0_CON_ETH0_CON_RXD3::value2:
        result = "value2";
        break;
    case ETH0_CON_ETH0_CON_RXD3::value3:
        result = "value3";
        break;
    case ETH0_CON_ETH0_CON_RXD3::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ETH0_CON_ETH0_CON_RXD3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ETH0_CON_ETH0_CON_RXD3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD3::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD3::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXD3::value4;
    }

    return result;
}

}; // namespace XMC4700
