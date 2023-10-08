/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "MII",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "RMII",
 *       "value": 1
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

enum class ETH0_CON_ETH0_CON_INFSEL : uint8_t
{
    value1 /*!< MII */,
    value2 = 1 /*!< RMII */
};
static_assert(sizeof(ETH0_CON_ETH0_CON_INFSEL) == 1);

static constexpr uint16_t ETH0_CON_ETH0_CON_INFSEL_id = 1347;

/**
 * Converts ETH0_CON_ETH0_CON_INFSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ETH0_CON_ETH0_CON_INFSEL instance)
{
    const char *result = "UNKNOWN ETH0_CON_ETH0_CON_INFSEL";

    switch (instance)
    {
    case ETH0_CON_ETH0_CON_INFSEL::value1:
        result = "value1";
        break;
    case ETH0_CON_ETH0_CON_INFSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ETH0_CON_ETH0_CON_INFSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ETH0_CON_ETH0_CON_INFSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ETH0_CON_ETH0_CON_INFSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ETH0_CON_ETH0_CON_INFSEL::value2;
    }

    return result;
}

}; // namespace XMC4700