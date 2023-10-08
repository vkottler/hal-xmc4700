/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Quadrature Phase error Event interrupt forward to POSIFx.SR0",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Quadrature Phase error Event interrupt forward to POSIFx.SR1",
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

enum class POSIF0_PFLGE_ERRSEL : uint8_t
{
    value1 /*!< Quadrature Phase error Event interrupt forward to POSIFx.SR0 */,
    value2 = 1 /*!< Quadrature Phase error Event interrupt forward to POSIFx.SR1 */
};
static_assert(sizeof(POSIF0_PFLGE_ERRSEL) == 1);

static constexpr uint16_t POSIF0_PFLGE_ERRSEL_id = 1784;

/**
 * Converts POSIF0_PFLGE_ERRSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PFLGE_ERRSEL instance)
{
    const char *result = "UNKNOWN POSIF0_PFLGE_ERRSEL";

    switch (instance)
    {
    case POSIF0_PFLGE_ERRSEL::value1:
        result = "value1";
        break;
    case POSIF0_PFLGE_ERRSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PFLGE_ERRSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PFLGE_ERRSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PFLGE_ERRSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PFLGE_ERRSEL::value2;
    }

    return result;
}

}; // namespace XMC4700