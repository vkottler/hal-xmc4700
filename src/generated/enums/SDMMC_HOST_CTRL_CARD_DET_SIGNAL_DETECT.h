/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT : uint8_t
{
    value1 /*!< SDCD is selected (for normal use) */,
    value2 = 1 /*!< The card detect test level is selected */
};
static_assert(sizeof(SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT) == 1);

static constexpr uint16_t SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT_id = 2968;

/**
 * Converts SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT instance)
{
    const char *result = "UNKNOWN SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT";

    switch (instance)
    {
    case SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT::value1:
        result = "value1";
        break;
    case SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_HOST_CTRL_CARD_DET_SIGNAL_DETECT::value2;
    }

    return result;
}

}; // namespace XMC4700
