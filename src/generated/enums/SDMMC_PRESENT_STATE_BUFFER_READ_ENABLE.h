/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE : uint8_t
{
    value1 /*!< Read Disable */,
    value2 = 1 /*!< Read Enable. */
};
static_assert(sizeof(SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE) == 1);

/**
 * Converts SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE instance)
{
    const char *result = "UNKNOWN SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE";

    switch (instance)
    {
    case SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE::value1:
        result = "value1";
        break;
    case SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_PRESENT_STATE_BUFFER_READ_ENABLE::value2;
    }

    return result;
}

}; // namespace XMC4700
