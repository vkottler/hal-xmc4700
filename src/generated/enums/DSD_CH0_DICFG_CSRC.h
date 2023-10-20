/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_DICFG_CSRC : uint8_t
{
    external_input = 1 /*!< External, from input A */,
    external_input_b = 2 /*!< External, from input B */,
    external_input_c = 3 /*!< External, from input C */,
    external_input_d = 4 /*!< External, from input D */,
    internal_clock = 15 /*!< Internal clock */
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
    case DSD_CH0_DICFG_CSRC::external_input:
        result = "external_input";
        break;
    case DSD_CH0_DICFG_CSRC::external_input_b:
        result = "external_input_b";
        break;
    case DSD_CH0_DICFG_CSRC::external_input_c:
        result = "external_input_c";
        break;
    case DSD_CH0_DICFG_CSRC::external_input_d:
        result = "external_input_d";
        break;
    case DSD_CH0_DICFG_CSRC::internal_clock:
        result = "internal_clock";
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

    if ((result = !strncmp(data, "external_input", 14)))
    {
        output = DSD_CH0_DICFG_CSRC::external_input;
    }
    else if ((result = !strncmp(data, "external_input_b", 16)))
    {
        output = DSD_CH0_DICFG_CSRC::external_input_b;
    }
    else if ((result = !strncmp(data, "external_input_c", 16)))
    {
        output = DSD_CH0_DICFG_CSRC::external_input_c;
    }
    else if ((result = !strncmp(data, "external_input_d", 16)))
    {
        output = DSD_CH0_DICFG_CSRC::external_input_d;
    }
    else if ((result = !strncmp(data, "internal_clock", 14)))
    {
        output = DSD_CH0_DICFG_CSRC::internal_clock;
    }

    return result;
}

}; // namespace XMC4700
