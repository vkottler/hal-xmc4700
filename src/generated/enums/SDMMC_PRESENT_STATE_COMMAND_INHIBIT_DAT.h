/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Can issue command which uses the DAT line",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Cannot issue command which uses the DAT line",
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

enum class SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT : uint8_t
{
    value1 /*!< Can issue command which uses the DAT line */,
    value2 = 1 /*!< Cannot issue command which uses the DAT line */
};
static_assert(sizeof(SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT) == 1);

static constexpr uint16_t SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT_id = 1444;

/**
 * Converts SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT instance)
{
    const char *result = "UNKNOWN SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT";

    switch (instance)
    {
    case SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::value1:
        result = "value1";
        break;
    case SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::value2;
    }

    return result;
}

}; // namespace XMC4700
