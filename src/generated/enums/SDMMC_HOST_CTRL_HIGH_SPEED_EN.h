/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_HIGH_SPEED_EN : uint8_t
{
    normal_speed_mode /*!< Normal Speed Mode */,
    high_speed_mode = 1 /*!< High Speed Mode */
};
static_assert(sizeof(SDMMC_HOST_CTRL_HIGH_SPEED_EN) == 1);

/**
 * Converts SDMMC_HOST_CTRL_HIGH_SPEED_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_HOST_CTRL_HIGH_SPEED_EN instance)
{
    const char *result = "UNKNOWN SDMMC_HOST_CTRL_HIGH_SPEED_EN";

    switch (instance)
    {
    case SDMMC_HOST_CTRL_HIGH_SPEED_EN::normal_speed_mode:
        result = "normal_speed_mode";
        break;
    case SDMMC_HOST_CTRL_HIGH_SPEED_EN::high_speed_mode:
        result = "high_speed_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_HOST_CTRL_HIGH_SPEED_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_HOST_CTRL_HIGH_SPEED_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "normal_speed_mode", 17)))
    {
        output = SDMMC_HOST_CTRL_HIGH_SPEED_EN::normal_speed_mode;
    }
    else if ((result = !strncmp(data, "high_speed_mode", 15)))
    {
        output = SDMMC_HOST_CTRL_HIGH_SPEED_EN::high_speed_mode;
    }

    return result;
}

}; // namespace XMC4700
