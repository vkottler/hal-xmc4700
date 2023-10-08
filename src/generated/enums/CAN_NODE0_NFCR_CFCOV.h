/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No overflow has occurred since last flag reset.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "An overflow has occurred since last flag reset.",
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

enum class CAN_NODE0_NFCR_CFCOV : uint8_t
{
    value1 /*!< No overflow has occurred since last flag reset. */,
    value2 = 1 /*!< An overflow has occurred since last flag reset. */
};
static_assert(sizeof(CAN_NODE0_NFCR_CFCOV) == 1);

static constexpr uint16_t CAN_NODE0_NFCR_CFCOV_id = 860;

/**
 * Converts CAN_NODE0_NFCR_CFCOV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NFCR_CFCOV instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NFCR_CFCOV";

    switch (instance)
    {
    case CAN_NODE0_NFCR_CFCOV::value1:
        result = "value1";
        break;
    case CAN_NODE0_NFCR_CFCOV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NFCR_CFCOV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NFCR_CFCOV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_NODE0_NFCR_CFCOV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_NODE0_NFCR_CFCOV::value2;
    }

    return result;
}

}; // namespace XMC4700
