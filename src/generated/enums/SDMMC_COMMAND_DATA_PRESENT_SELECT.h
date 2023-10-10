/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_COMMAND_DATA_PRESENT_SELECT : uint8_t
{
    value1 /*!< No Data Present */,
    value2 = 1 /*!< Data Present */
};
static_assert(sizeof(SDMMC_COMMAND_DATA_PRESENT_SELECT) == 1);

static constexpr uint16_t SDMMC_COMMAND_DATA_PRESENT_SELECT_id = 935;

/**
 * Converts SDMMC_COMMAND_DATA_PRESENT_SELECT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_COMMAND_DATA_PRESENT_SELECT instance)
{
    const char *result = "UNKNOWN SDMMC_COMMAND_DATA_PRESENT_SELECT";

    switch (instance)
    {
    case SDMMC_COMMAND_DATA_PRESENT_SELECT::value1:
        result = "value1";
        break;
    case SDMMC_COMMAND_DATA_PRESENT_SELECT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_COMMAND_DATA_PRESENT_SELECT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_COMMAND_DATA_PRESENT_SELECT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_COMMAND_DATA_PRESENT_SELECT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_COMMAND_DATA_PRESENT_SELECT::value2;
    }

    return result;
}

}; // namespace XMC4700
