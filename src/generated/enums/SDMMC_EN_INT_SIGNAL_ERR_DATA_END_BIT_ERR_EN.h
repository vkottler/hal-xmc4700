/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN : uint8_t
{
    value1 /*!< Masked */,
    value2 = 1 /*!< Enabled */
};
static_assert(sizeof(SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN) == 1);

static constexpr uint16_t SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN_id =
    1020;

/**
 * Converts SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN instance)
{
    const char *result = "UNKNOWN SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN";

    switch (instance)
    {
    case SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN::value1:
        result = "value1";
        break;
    case SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_EN_INT_SIGNAL_ERR_DATA_END_BIT_ERR_EN::value2;
    }

    return result;
}

}; // namespace XMC4700
