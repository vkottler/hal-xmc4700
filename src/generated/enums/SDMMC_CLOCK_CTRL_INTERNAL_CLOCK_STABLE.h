/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE : uint8_t
{
    not_ready /*!< Not Ready */,
    ready = 1 /*!< Ready */
};
static_assert(sizeof(SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE) == 1);

/**
 * Converts SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE instance)
{
    const char *result = "UNKNOWN SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE";

    switch (instance)
    {
    case SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::not_ready:
        result = "not_ready";
        break;
    case SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::ready:
        result = "ready";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_ready", 9)))
    {
        output = SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::not_ready;
    }
    else if ((result = !strncmp(data, "ready", 5)))
    {
        output = SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::ready;
    }

    return result;
}

}; // namespace XMC4700
