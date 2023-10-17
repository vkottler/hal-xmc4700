/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_TRANSFER_MODE_TX_DIR_SELECT : uint8_t
{
    write_host_card /*!< Write (Host to Card) */,
    read_card_host = 1 /*!< Read (Card to Host) */
};
static_assert(sizeof(SDMMC_TRANSFER_MODE_TX_DIR_SELECT) == 1);

/**
 * Converts SDMMC_TRANSFER_MODE_TX_DIR_SELECT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_TRANSFER_MODE_TX_DIR_SELECT instance)
{
    const char *result = "UNKNOWN SDMMC_TRANSFER_MODE_TX_DIR_SELECT";

    switch (instance)
    {
    case SDMMC_TRANSFER_MODE_TX_DIR_SELECT::write_host_card:
        result = "write_host_card";
        break;
    case SDMMC_TRANSFER_MODE_TX_DIR_SELECT::read_card_host:
        result = "read_card_host";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_TRANSFER_MODE_TX_DIR_SELECT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_TRANSFER_MODE_TX_DIR_SELECT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "write_host_card", 15)))
    {
        output = SDMMC_TRANSFER_MODE_TX_DIR_SELECT::write_host_card;
    }
    else if ((result = !strncmp(data, "read_card_host", 14)))
    {
        output = SDMMC_TRANSFER_MODE_TX_DIR_SELECT::read_card_host;
    }

    return result;
}

}; // namespace XMC4700
