/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_DICFG_CSRC : uint8_t
{
    value2 = 1 /*!< External, from input A */,
    value3 = 2 /*!< External, from input B */,
    value4 = 3 /*!< External, from input C */,
    value5 = 4 /*!< External, from input D */,
    value6 = 15 /*!< Internal clock */
};
static_assert(sizeof(DSD_CH0_DICFG_CSRC) == 1);

/**
 * Converts DSD_CH0_DICFG_CSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_DICFG_CSRC instance)
{
    const char *result = "UNKNOWN DSD_CH0_DICFG_CSRC";

    switch (instance)
    {
    case DSD_CH0_DICFG_CSRC::value2:
        result = "value2";
        break;
    case DSD_CH0_DICFG_CSRC::value3:
        result = "value3";
        break;
    case DSD_CH0_DICFG_CSRC::value4:
        result = "value4";
        break;
    case DSD_CH0_DICFG_CSRC::value5:
        result = "value5";
        break;
    case DSD_CH0_DICFG_CSRC::value6:
        result = "value6";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_DICFG_CSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_DICFG_CSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_DICFG_CSRC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CH0_DICFG_CSRC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CH0_DICFG_CSRC::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = DSD_CH0_DICFG_CSRC::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = DSD_CH0_DICFG_CSRC::value6;
    }

    return result;
}

}; // namespace XMC4700
