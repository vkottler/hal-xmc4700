/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL : uint8_t
{
    value1 /*!< base clock(10MHz-63MHz) */,
    value2 = 1 /*!< base clock divided by 2 */,
    value3 = 16 /*!< base clock divided by 32 */,
    value4 = 2 /*!< base clock divided by 4 */,
    value5 = 4 /*!< base clock divided by 8 */,
    value6 = 8 /*!< base clock divided by 16 */,
    value7 = 32 /*!< base clock divided by 64 */,
    value8 = 64 /*!< base clock divided by 128 */,
    value9 = 128 /*!< base clock divided by 256 */
};
static_assert(sizeof(SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL) == 1);

/**
 * Converts SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL instance)
{
    const char *result = "UNKNOWN SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL";

    switch (instance)
    {
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value1:
        result = "value1";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value2:
        result = "value2";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value3:
        result = "value3";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value4:
        result = "value4";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value5:
        result = "value5";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value6:
        result = "value6";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value7:
        result = "value7";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value8:
        result = "value8";
        break;
    case SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value9:
        result = "value9";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value8;
    }
    else if ((result = !strncmp(data, "value9", 6)))
    {
        output = SDMMC_CLOCK_CTRL_SDCLK_FREQ_SEL::value9;
    }

    return result;
}

}; // namespace XMC4700
