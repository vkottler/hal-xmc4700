/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_TRANSFER_MODE_CMD_COMP_ATA : uint8_t
{
    value1 = 1 /*!< Device will send command completion Signal */,
    value2 /*!< Device will not send command completion Signal */
};
static_assert(sizeof(SDMMC_TRANSFER_MODE_CMD_COMP_ATA) == 1);

static constexpr uint16_t SDMMC_TRANSFER_MODE_CMD_COMP_ATA_id = 2947;

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
    case SDMMC_TRANSFER_MODE_CMD_COMP_ATA::value1:
        result = "value1";
        break;
    case SDMMC_TRANSFER_MODE_CMD_COMP_ATA::value2:
        result = "value2";
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
inline bool from_string(const char *data, SDMMC_TRANSFER_MODE_CMD_COMP_ATA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_TRANSFER_MODE_CMD_COMP_ATA::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_TRANSFER_MODE_CMD_COMP_ATA::value2;
    }

    return result;
}

}; // namespace XMC4700
