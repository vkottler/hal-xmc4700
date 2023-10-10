/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_DICFG_TSTRMODE : uint8_t
{
    value1 /*!< No timestamp trigger */,
    value2 = 1 /*!< Trigger event upon a falling edge */,
    value3 = 2 /*!< Trigger event upon a rising edge */,
    value4 = 3 /*!< Trigger event upon each edge */
};
static_assert(sizeof(DSD_DICFG_TSTRMODE) == 1);

static constexpr uint16_t DSD_DICFG_TSTRMODE_id = 249;

/**
 * Converts DSD_DICFG_TSTRMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_DICFG_TSTRMODE instance)
{
    const char *result = "UNKNOWN DSD_DICFG_TSTRMODE";

    switch (instance)
    {
    case DSD_DICFG_TSTRMODE::value1:
        result = "value1";
        break;
    case DSD_DICFG_TSTRMODE::value2:
        result = "value2";
        break;
    case DSD_DICFG_TSTRMODE::value3:
        result = "value3";
        break;
    case DSD_DICFG_TSTRMODE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_DICFG_TSTRMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_DICFG_TSTRMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_DICFG_TSTRMODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_DICFG_TSTRMODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_DICFG_TSTRMODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_DICFG_TSTRMODE::value4;
    }

    return result;
}

}; // namespace XMC4700
