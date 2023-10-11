/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_SD_8BIT_MODE : uint8_t
{
    value1 /*!< Bus Width is selected by Data Transfer Width */,
    value2 = 1 /*!< 8-bit Bus Width */
};
static_assert(sizeof(SDMMC_HOST_CTRL_SD_8BIT_MODE) == 1);

static constexpr uint16_t SDMMC_HOST_CTRL_SD_8BIT_MODE_id = 2966;

/**
 * Converts SDMMC_HOST_CTRL_SD_8BIT_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_HOST_CTRL_SD_8BIT_MODE instance)
{
    const char *result = "UNKNOWN SDMMC_HOST_CTRL_SD_8BIT_MODE";

    switch (instance)
    {
    case SDMMC_HOST_CTRL_SD_8BIT_MODE::value1:
        result = "value1";
        break;
    case SDMMC_HOST_CTRL_SD_8BIT_MODE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_HOST_CTRL_SD_8BIT_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_HOST_CTRL_SD_8BIT_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_HOST_CTRL_SD_8BIT_MODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_HOST_CTRL_SD_8BIT_MODE::value2;
    }

    return result;
}

}; // namespace XMC4700
