/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL : uint8_t
{
    disable_read_wait_control /*!< Disable Read Wait Control */,
    enable_read_wait_control = 1 /*!< Enable Read Wait Control */
};
static_assert(sizeof(SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL) == 1);

/**
 * Converts SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL instance)
{
    const char *result = "UNKNOWN SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL";

    switch (instance)
    {
    case SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL::disable_read_wait_control:
        result = "disable_read_wait_control";
        break;
    case SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL::enable_read_wait_control:
        result = "enable_read_wait_control";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable_read_wait_control", 25)))
    {
        output =
            SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL::disable_read_wait_control;
    }
    else if ((result = !strncmp(data, "enable_read_wait_control", 24)))
    {
        output = SDMMC_BLOCK_GAP_CTRL_READ_WAIT_CTRL::enable_read_wait_control;
    }

    return result;
}

}; // namespace XMC4700
