/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORTS_HWSEL_HW9 : uint8_t
{
    value1 /*!< Software control only. */,
    value2 =
        1 /*!< HW0 control path can override the software configuration. */,
    value3 =
        2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORTS_HWSEL_HW9) == 1);

static constexpr uint16_t PORTS_HWSEL_HW9_id = 680;

/**
 * Converts PORTS_HWSEL_HW9 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORTS_HWSEL_HW9 instance)
{
    const char *result = "UNKNOWN PORTS_HWSEL_HW9";

    switch (instance)
    {
    case PORTS_HWSEL_HW9::value1:
        result = "value1";
        break;
    case PORTS_HWSEL_HW9::value2:
        result = "value2";
        break;
    case PORTS_HWSEL_HW9::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORTS_HWSEL_HW9.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORTS_HWSEL_HW9 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORTS_HWSEL_HW9::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORTS_HWSEL_HW9::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORTS_HWSEL_HW9::value3;
    }

    return result;
}

}; // namespace XMC4700
