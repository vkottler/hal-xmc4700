/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Data input RXERA is selected",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Data input RXERB is selected",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Data input RXERC is selected",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Data input RXERD is selected",
 *       "value": 3
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ETH0_CON_ETH0_CON_RXER : uint8_t
{
    value1 /*!< Data input RXERA is selected */,
    value2 = 1 /*!< Data input RXERB is selected */,
    value3 = 2 /*!< Data input RXERC is selected */,
    value4 = 3 /*!< Data input RXERD is selected */
};
static_assert(sizeof(ETH0_CON_ETH0_CON_RXER) == 1);

static constexpr uint16_t ETH0_CON_ETH0_CON_RXER_id = 1351;

/**
 * Converts ETH0_CON_ETH0_CON_RXER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ETH0_CON_ETH0_CON_RXER instance)
{
    const char *result = "UNKNOWN ETH0_CON_ETH0_CON_RXER";

    switch (instance)
    {
    case ETH0_CON_ETH0_CON_RXER::value1:
        result = "value1";
        break;
    case ETH0_CON_ETH0_CON_RXER::value2:
        result = "value2";
        break;
    case ETH0_CON_ETH0_CON_RXER::value3:
        result = "value3";
        break;
    case ETH0_CON_ETH0_CON_RXER::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ETH0_CON_ETH0_CON_RXER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ETH0_CON_ETH0_CON_RXER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXER::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXER::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXER::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ETH0_CON_ETH0_CON_RXER::value4;
    }

    return result;
}

}; // namespace XMC4700
