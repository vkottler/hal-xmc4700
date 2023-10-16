/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP : uint8_t
{
    value1 /*!< Transfer */,
    value2 = 1 /*!< Stop */
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
    case SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::value1:
        result = "value1";
        break;
    case SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::value2:
        result = "value2";
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
inline bool from_string(const char *data, SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_BLOCK_GAP_CTRL_STOP_AT_BLOCK_GAP::value2;
    }

    return result;
}

}; // namespace XMC4700
