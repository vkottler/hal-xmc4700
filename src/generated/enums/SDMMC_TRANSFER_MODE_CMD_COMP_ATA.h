/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_TRANSFER_MODE_CMD_COMP_ATA : uint8_t
{
    send_command_completion_signal =
        1 /*!< Device will send command completion Signal */,
    not_send_command_completion_signal /*!< Device will not send command
                                          completion Signal */
};
static_assert(sizeof(SDMMC_TRANSFER_MODE_CMD_COMP_ATA) == 1);

/**
 * Converts SDMMC_TRANSFER_MODE_CMD_COMP_ATA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_TRANSFER_MODE_CMD_COMP_ATA instance)
{
    const char *result = "UNKNOWN SDMMC_TRANSFER_MODE_CMD_COMP_ATA";

    switch (instance)
    {
    case SDMMC_TRANSFER_MODE_CMD_COMP_ATA::send_command_completion_signal:
        result = "send_command_completion_signal";
        break;
    case SDMMC_TRANSFER_MODE_CMD_COMP_ATA::not_send_command_completion_signal:
        result = "not_send_command_completion_signal";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_TRANSFER_MODE_CMD_COMP_ATA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_TRANSFER_MODE_CMD_COMP_ATA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "send_command_completion_signal", 30)))
    {
        output =
            SDMMC_TRANSFER_MODE_CMD_COMP_ATA::send_command_completion_signal;
    }
    else if ((result =
                  !strncmp(data, "not_send_command_completion_signal", 34)))
    {
        output = SDMMC_TRANSFER_MODE_CMD_COMP_ATA::
            not_send_command_completion_signal;
    }

    return result;
}

}; // namespace XMC4700
