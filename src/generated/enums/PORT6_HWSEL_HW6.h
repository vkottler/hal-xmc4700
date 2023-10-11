/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT6_HWSEL_HW6 : uint8_t
{
    value1 /*!< Software control only. */,
    value2 = 1 /*!< HW0 control path can override the software configuration. */,
    value3 = 2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORT6_HWSEL_HW6) == 1);

static constexpr uint16_t PORT6_HWSEL_HW6_id = 1959;

/**
 * Converts PORT6_HWSEL_HW6 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT6_HWSEL_HW6 instance)
{
    const char *result = "UNKNOWN PORT6_HWSEL_HW6";

    switch (instance)
    {
    case PORT6_HWSEL_HW6::value1:
        result = "value1";
        break;
    case PORT6_HWSEL_HW6::value2:
        result = "value2";
        break;
    case PORT6_HWSEL_HW6::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT6_HWSEL_HW6.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT6_HWSEL_HW6 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT6_HWSEL_HW6::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT6_HWSEL_HW6::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORT6_HWSEL_HW6::value3;
    }

    return result;
}

}; // namespace XMC4700
