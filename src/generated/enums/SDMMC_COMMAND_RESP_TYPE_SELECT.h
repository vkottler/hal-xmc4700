/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_COMMAND_RESP_TYPE_SELECT : uint8_t
{
    value1 /*!< No Response */,
    value2 = 1 /*!< Response length 136 */,
    value3 = 2 /*!< Response length 48 */,
    value4 = 3 /*!< Response length 48 check Busy after response */
};
static_assert(sizeof(SDMMC_COMMAND_RESP_TYPE_SELECT) == 1);

static constexpr uint16_t SDMMC_COMMAND_RESP_TYPE_SELECT_id = 2948;

/**
 * Converts SDMMC_COMMAND_RESP_TYPE_SELECT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_COMMAND_RESP_TYPE_SELECT instance)
{
    const char *result = "UNKNOWN SDMMC_COMMAND_RESP_TYPE_SELECT";

    switch (instance)
    {
    case SDMMC_COMMAND_RESP_TYPE_SELECT::value1:
        result = "value1";
        break;
    case SDMMC_COMMAND_RESP_TYPE_SELECT::value2:
        result = "value2";
        break;
    case SDMMC_COMMAND_RESP_TYPE_SELECT::value3:
        result = "value3";
        break;
    case SDMMC_COMMAND_RESP_TYPE_SELECT::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_COMMAND_RESP_TYPE_SELECT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_COMMAND_RESP_TYPE_SELECT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_COMMAND_RESP_TYPE_SELECT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_COMMAND_RESP_TYPE_SELECT::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = SDMMC_COMMAND_RESP_TYPE_SELECT::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = SDMMC_COMMAND_RESP_TYPE_SELECT::value4;
    }

    return result;
}

}; // namespace XMC4700
