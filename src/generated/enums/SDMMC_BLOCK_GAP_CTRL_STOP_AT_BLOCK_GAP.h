/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP : uint8_t
{
    transfer /*!< Transfer */,
    stop = 1 /*!< Stop */
};
static_assert(sizeof(SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP) == 1);

/**
 * Converts SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP instance)
{
    const char *result = "UNKNOWN SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP";

    switch (instance)
    {
    case SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::transfer:
        result = "transfer";
        break;
    case SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::stop:
        result = "stop";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "transfer", 8)))
    {
        output = SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::transfer;
    }
    else if ((result = !strncmp(data, "stop", 4)))
    {
        output = SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::stop;
    }

    return result;
}

}; // namespace XMC4700
