/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_OCS_SUS : uint8_t
{
    value1 /*!< Will not suspend */,
    value2 = 1 /*!< Hard suspend: Clock is switched off immediately. */,
    value3 = 2 /*!< Soft suspend channel 0 */,
    value4 = 3 /*!< Soft suspend channel 1 */,
    value5 = 5 /*!< Soft suspend channel 3 */
};
static_assert(sizeof(DSD_OCS_SUS) == 1);

static constexpr uint16_t DSD_OCS_SUS_id = 329;

/**
 * Converts DSD_OCS_SUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_OCS_SUS instance)
{
    const char *result = "UNKNOWN DSD_OCS_SUS";

    switch (instance)
    {
    case DSD_OCS_SUS::value1:
        result = "value1";
        break;
    case DSD_OCS_SUS::value2:
        result = "value2";
        break;
    case DSD_OCS_SUS::value3:
        result = "value3";
        break;
    case DSD_OCS_SUS::value4:
        result = "value4";
        break;
    case DSD_OCS_SUS::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_OCS_SUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_OCS_SUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_OCS_SUS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_OCS_SUS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_OCS_SUS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_OCS_SUS::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = DSD_OCS_SUS::value5;
    }

    return result;
}

}; // namespace XMC4700
