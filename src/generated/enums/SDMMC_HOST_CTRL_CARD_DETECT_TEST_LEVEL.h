/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL : uint8_t
{
    value1 /*!< No Card */,
    value2 = 1 /*!< Card Inserted */
};
static_assert(sizeof(SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL) == 1);

static constexpr uint16_t SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL_id = 951;

/**
 * Converts SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL instance)
{
    const char *result = "UNKNOWN SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL";

    switch (instance)
    {
    case SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL::value1:
        result = "value1";
        break;
    case SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_HOST_CTRL_CARD_DETECT_TEST_LEVEL::value2;
    }

    return result;
}

}; // namespace XMC4700
