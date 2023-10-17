/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_SW_RESET_SW_RST_CMD_LINE : uint8_t
{
    work /*!< Work */,
    reset = 1 /*!< Reset */
};
static_assert(sizeof(SDMMC_SW_RESET_SW_RST_CMD_LINE) == 1);

/**
 * Converts SDMMC_SW_RESET_SW_RST_CMD_LINE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_SW_RESET_SW_RST_CMD_LINE instance)
{
    const char *result = "UNKNOWN SDMMC_SW_RESET_SW_RST_CMD_LINE";

    switch (instance)
    {
    case SDMMC_SW_RESET_SW_RST_CMD_LINE::work:
        result = "work";
        break;
    case SDMMC_SW_RESET_SW_RST_CMD_LINE::reset:
        result = "reset";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_SW_RESET_SW_RST_CMD_LINE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_SW_RESET_SW_RST_CMD_LINE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "work", 4)))
    {
        output = SDMMC_SW_RESET_SW_RST_CMD_LINE::work;
    }
    else if ((result = !strncmp(data, "reset", 5)))
    {
        output = SDMMC_SW_RESET_SW_RST_CMD_LINE::reset;
    }

    return result;
}

}; // namespace XMC4700
