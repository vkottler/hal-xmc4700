/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Normal",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Suspend",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Resume",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Abort",
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

enum class SDMMC_COMMAND_CMD_TYPE : uint8_t
{
    value1 /*!< Normal */,
    value2 = 1 /*!< Suspend */,
    value3 = 2 /*!< Resume */,
    value4 = 3 /*!< Abort */
};
static_assert(sizeof(SDMMC_COMMAND_CMD_TYPE) == 1);

static constexpr uint16_t SDMMC_COMMAND_CMD_TYPE_id = 1443;

/**
 * Converts SDMMC_COMMAND_CMD_TYPE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_COMMAND_CMD_TYPE instance)
{
    const char *result = "UNKNOWN SDMMC_COMMAND_CMD_TYPE";

    switch (instance)
    {
    case SDMMC_COMMAND_CMD_TYPE::value1:
        result = "value1";
        break;
    case SDMMC_COMMAND_CMD_TYPE::value2:
        result = "value2";
        break;
    case SDMMC_COMMAND_CMD_TYPE::value3:
        result = "value3";
        break;
    case SDMMC_COMMAND_CMD_TYPE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_COMMAND_CMD_TYPE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_COMMAND_CMD_TYPE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_COMMAND_CMD_TYPE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_COMMAND_CMD_TYPE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = SDMMC_COMMAND_CMD_TYPE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = SDMMC_COMMAND_CMD_TYPE::value4;
    }

    return result;
}

}; // namespace XMC4700
