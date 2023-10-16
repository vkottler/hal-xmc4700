/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_NORM_TX_COMPLETE : uint8_t
{
    value1 /*!< No Data Transfer Complete */,
    value2 = 1 /*!< Data Transfer Complete */
};
static_assert(sizeof(SDMMC_INT_STATUS_NORM_TX_COMPLETE) == 1);

/**
 * Converts SDMMC_INT_STATUS_NORM_TX_COMPLETE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_NORM_TX_COMPLETE instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_NORM_TX_COMPLETE";

    switch (instance)
    {
    case SDMMC_INT_STATUS_NORM_TX_COMPLETE::value1:
        result = "value1";
        break;
    case SDMMC_INT_STATUS_NORM_TX_COMPLETE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_NORM_TX_COMPLETE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_INT_STATUS_NORM_TX_COMPLETE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_INT_STATUS_NORM_TX_COMPLETE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_INT_STATUS_NORM_TX_COMPLETE::value2;
    }

    return result;
}

}; // namespace XMC4700
