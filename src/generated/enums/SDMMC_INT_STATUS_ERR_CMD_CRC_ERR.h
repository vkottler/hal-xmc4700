/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_ERR_CMD_CRC_ERR : uint8_t
{
    no_error /*!< No Error */,
    crc_error_generated = 1 /*!< CRC Error Generated */
};
static_assert(sizeof(SDMMC_INT_STATUS_ERR_CMD_CRC_ERR) == 1);

/**
 * Converts SDMMC_INT_STATUS_ERR_CMD_CRC_ERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_ERR_CMD_CRC_ERR instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_ERR_CMD_CRC_ERR";

    switch (instance)
    {
    case SDMMC_INT_STATUS_ERR_CMD_CRC_ERR::no_error:
        result = "no_error";
        break;
    case SDMMC_INT_STATUS_ERR_CMD_CRC_ERR::crc_error_generated:
        result = "crc_error_generated";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_ERR_CMD_CRC_ERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_INT_STATUS_ERR_CMD_CRC_ERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_error", 8)))
    {
        output = SDMMC_INT_STATUS_ERR_CMD_CRC_ERR::no_error;
    }
    else if ((result = !strncmp(data, "crc_error_generated", 19)))
    {
        output = SDMMC_INT_STATUS_ERR_CMD_CRC_ERR::crc_error_generated;
    }

    return result;
}

}; // namespace XMC4700
