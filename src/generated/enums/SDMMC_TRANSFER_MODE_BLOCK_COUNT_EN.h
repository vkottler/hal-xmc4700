/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN : uint8_t
{
    value1 /*!< Disable */,
    value2 = 1 /*!< Enable */
};
static_assert(sizeof(SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN) == 1);

static constexpr uint16_t SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN_id = 927;

/**
 * Converts SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN instance)
{
    const char *result = "UNKNOWN SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN";

    switch (instance)
    {
    case SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN::value1:
        result = "value1";
        break;
    case SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_TRANSFER_MODE_BLOCK_COUNT_EN::value2;
    }

    return result;
}

}; // namespace XMC4700
