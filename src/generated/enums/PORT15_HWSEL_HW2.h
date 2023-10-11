/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT15_HWSEL_HW2 : uint8_t
{
    value1 /*!< Software control only. */,
    value2 = 1 /*!< HW0 control path can override the software configuration. */,
    value3 = 2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORT15_HWSEL_HW2) == 1);

static constexpr uint16_t PORT15_HWSEL_HW2_id = 1439;

/**
 * Converts PORT15_HWSEL_HW2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT15_HWSEL_HW2 instance)
{
    const char *result = "UNKNOWN PORT15_HWSEL_HW2";

    switch (instance)
    {
    case PORT15_HWSEL_HW2::value1:
        result = "value1";
        break;
    case PORT15_HWSEL_HW2::value2:
        result = "value2";
        break;
    case PORT15_HWSEL_HW2::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT15_HWSEL_HW2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT15_HWSEL_HW2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT15_HWSEL_HW2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT15_HWSEL_HW2::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORT15_HWSEL_HW2::value3;
    }

    return result;
}

}; // namespace XMC4700
