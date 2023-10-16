/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_DICFG_STROBE : uint8_t
{
    value1 /*!< No data strobe */,
    value2 = 1 /*!< Direct clock, a sample trigger is generated at each rising clock edge */,
    value3 = 2 /*!< Direct clock, a sample trigger is generated at each falling clock edge */,
    value4 = 3 /*!< Double data, a sample trigger is generated at each rising and falling clock edge */,
    value6 = 5 /*!< Double clock, a sample trigger is generated at every 2nd rising clock edge */,
    value7 = 6 /*!< Double clock, a sample trigger is generated at every 2nd falling clock edge */
};
static_assert(sizeof(DSD_CH0_DICFG_STROBE) == 1);

/**
 * Converts DSD_CH0_DICFG_STROBE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_DICFG_STROBE instance)
{
    const char *result = "UNKNOWN DSD_CH0_DICFG_STROBE";

    switch (instance)
    {
    case DSD_CH0_DICFG_STROBE::value1:
        result = "value1";
        break;
    case DSD_CH0_DICFG_STROBE::value2:
        result = "value2";
        break;
    case DSD_CH0_DICFG_STROBE::value3:
        result = "value3";
        break;
    case DSD_CH0_DICFG_STROBE::value4:
        result = "value4";
        break;
    case DSD_CH0_DICFG_STROBE::value6:
        result = "value6";
        break;
    case DSD_CH0_DICFG_STROBE::value7:
        result = "value7";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_DICFG_STROBE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_DICFG_STROBE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CH0_DICFG_STROBE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_DICFG_STROBE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CH0_DICFG_STROBE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CH0_DICFG_STROBE::value4;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = DSD_CH0_DICFG_STROBE::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = DSD_CH0_DICFG_STROBE::value7;
    }

    return result;
}

}; // namespace XMC4700
