/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE : uint8_t
{
    no_valid_data /*!< No valid data */,
    transferring_data = 1 /*!< Transferring data */
};
static_assert(sizeof(SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE) == 1);

/**
 * Converts SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE instance)
{
    const char *result = "UNKNOWN SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE";

    switch (instance)
    {
    case SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE::no_valid_data:
        result = "no_valid_data";
        break;
    case SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE::transferring_data:
        result = "transferring_data";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_valid_data", 13)))
    {
        output = SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE::no_valid_data;
    }
    else if ((result = !strncmp(data, "transferring_data", 17)))
    {
        output = SDMMC_PRESENT_STATE_WRITE_TRANSFER_ACTIVE::transferring_data;
    }

    return result;
}

}; // namespace XMC4700
