/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT8_HWSEL_HW11 : uint8_t
{
    value1 /*!< Software control only. */,
    value2 = 1 /*!< HW0 control path can override the software configuration. */,
    value3 = 2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORT8_HWSEL_HW11) == 1);

static constexpr uint16_t PORT8_HWSEL_HW11_id = 2170;

/**
 * Converts PORT8_HWSEL_HW11 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT8_HWSEL_HW11 instance)
{
    const char *result = "UNKNOWN PORT8_HWSEL_HW11";

    switch (instance)
    {
    case PORT8_HWSEL_HW11::value1:
        result = "value1";
        break;
    case PORT8_HWSEL_HW11::value2:
        result = "value2";
        break;
    case PORT8_HWSEL_HW11::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT8_HWSEL_HW11.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT8_HWSEL_HW11 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT8_HWSEL_HW11::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT8_HWSEL_HW11::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORT8_HWSEL_HW11::value3;
    }

    return result;
}

}; // namespace XMC4700
