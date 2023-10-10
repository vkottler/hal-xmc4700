/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC1CFG0_MODE : uint8_t
{
    value1 /*!< disable/switch-off DAC */,
    value2 = 1 /*!< Single Value Mode */,
    value3 = 2 /*!< Data Mode */,
    value4 = 3 /*!< Patgen Mode */,
    value5 = 4 /*!< Noise Mode */,
    value6 = 5 /*!< Ramp Mode */,
    value7 = 6 /*!< na */,
    value8 = 7 /*!< na */
};
static_assert(sizeof(DAC_DAC1CFG0_MODE) == 1);

static constexpr uint16_t DAC_DAC1CFG0_MODE_id = 226;

/**
 * Converts DAC_DAC1CFG0_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC1CFG0_MODE instance)
{
    const char *result = "UNKNOWN DAC_DAC1CFG0_MODE";

    switch (instance)
    {
    case DAC_DAC1CFG0_MODE::value1:
        result = "value1";
        break;
    case DAC_DAC1CFG0_MODE::value2:
        result = "value2";
        break;
    case DAC_DAC1CFG0_MODE::value3:
        result = "value3";
        break;
    case DAC_DAC1CFG0_MODE::value4:
        result = "value4";
        break;
    case DAC_DAC1CFG0_MODE::value5:
        result = "value5";
        break;
    case DAC_DAC1CFG0_MODE::value6:
        result = "value6";
        break;
    case DAC_DAC1CFG0_MODE::value7:
        result = "value7";
        break;
    case DAC_DAC1CFG0_MODE::value8:
        result = "value8";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC1CFG0_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC1CFG0_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = DAC_DAC1CFG0_MODE::value8;
    }

    return result;
}

}; // namespace XMC4700
