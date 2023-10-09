/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_HIGH_SPEED_EN : uint8_t
{
    value1 /*!< Normal Speed Mode */,
    value2 = 1 /*!< High Speed Mode */
};
static_assert(sizeof(SDMMC_HOST_CTRL_HIGH_SPEED_EN) == 1);

static constexpr uint16_t SDMMC_HOST_CTRL_HIGH_SPEED_EN_id = 1456;

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
    case SDMMC_HOST_CTRL_HIGH_SPEED_EN::value1:
        result = "value1";
        break;
    case SDMMC_HOST_CTRL_HIGH_SPEED_EN::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_HOST_CTRL_HIGH_SPEED_EN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_HOST_CTRL_HIGH_SPEED_EN::value2;
    }

    return result;
}

}; // namespace XMC4700
