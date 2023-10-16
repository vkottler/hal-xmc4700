/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_FCFGC_CFMC : uint8_t
{
    value1 /*!< CIC1 */,
    value2 = 1 /*!< CIC2 */,
    value3 = 2 /*!< CIC3 */,
    value4 = 3 /*!< CICF */
};
static_assert(sizeof(DSD_CH0_FCFGC_CFMC) == 1);

/**
 * Converts DSD_CH0_FCFGC_CFMC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_FCFGC_CFMC instance)
{
    const char *result = "UNKNOWN DSD_CH0_FCFGC_CFMC";

    switch (instance)
    {
    case DSD_CH0_FCFGC_CFMC::value1:
        result = "value1";
        break;
    case DSD_CH0_FCFGC_CFMC::value2:
        result = "value2";
        break;
    case DSD_CH0_FCFGC_CFMC::value3:
        result = "value3";
        break;
    case DSD_CH0_FCFGC_CFMC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_FCFGC_CFMC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_FCFGC_CFMC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CH0_FCFGC_CFMC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_FCFGC_CFMC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CH0_FCFGC_CFMC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CH0_FCFGC_CFMC::value4;
    }

    return result;
}

}; // namespace XMC4700
