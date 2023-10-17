/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN : uint8_t
{
    stop /*!< Stop */,
    oscillate = 1 /*!< Oscillate */
};
static_assert(sizeof(SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN) == 1);

/**
 * Converts SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN instance)
{
    const char *result = "UNKNOWN SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN";

    switch (instance)
    {
    case SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN::stop:
        result = "stop";
        break;
    case SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN::oscillate:
        result = "oscillate";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "stop", 4)))
    {
        output = SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN::stop;
    }
    else if ((result = !strncmp(data, "oscillate", 9)))
    {
        output = SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_EN::oscillate;
    }

    return result;
}

}; // namespace XMC4700
