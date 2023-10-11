/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_TRANSFER_MODE_TX_DIR_SELECT : uint8_t
{
    value1 /*!< Write (Host to Card) */,
    value2 = 1 /*!< Read (Card to Host) */
};
static_assert(sizeof(SDMMC_TRANSFER_MODE_TX_DIR_SELECT) == 1);

static constexpr uint16_t SDMMC_TRANSFER_MODE_TX_DIR_SELECT_id = 2945;

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
    case SDMMC_TRANSFER_MODE_TX_DIR_SELECT::value1:
        result = "value1";
        break;
    case SDMMC_TRANSFER_MODE_TX_DIR_SELECT::value2:
        result = "value2";
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
inline bool from_string(const char *data, SDMMC_TRANSFER_MODE_TX_DIR_SELECT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_TRANSFER_MODE_TX_DIR_SELECT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_TRANSFER_MODE_TX_DIR_SELECT::value2;
    }

    return result;
}

}; // namespace XMC4700
