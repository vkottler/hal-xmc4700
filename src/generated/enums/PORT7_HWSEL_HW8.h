/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT7_HWSEL_HW8 : uint8_t
{
    value1 /*!< Software control only. */,
    value2 = 1 /*!< HW0 control path can override the software configuration. */,
    value3 = 2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORT7_HWSEL_HW8) == 1);

static constexpr uint16_t PORT7_HWSEL_HW8_id = 2065;

/**
 * Converts PORT7_HWSEL_HW8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT7_HWSEL_HW8 instance)
{
    const char *result = "UNKNOWN PORT7_HWSEL_HW8";

    switch (instance)
    {
    case PORT7_HWSEL_HW8::value1:
        result = "value1";
        break;
    case PORT7_HWSEL_HW8::value2:
        result = "value2";
        break;
    case PORT7_HWSEL_HW8::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT7_HWSEL_HW8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT7_HWSEL_HW8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT7_HWSEL_HW8::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT7_HWSEL_HW8::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORT7_HWSEL_HW8::value3;
    }

    return result;
}

}; // namespace XMC4700
