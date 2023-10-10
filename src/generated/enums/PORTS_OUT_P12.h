/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORTS_OUT_P12 : uint8_t
{
    value1 /*!< The output level of Pn.x is 0. */,
    value2 = 1 /*!< The output level of Pn.x is 1. */
};
static_assert(sizeof(PORTS_OUT_P12) == 1);

static constexpr uint16_t PORTS_OUT_P12_id = 601;

/**
 * Converts PORTS_OUT_P12 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORTS_OUT_P12 instance)
{
    const char *result = "UNKNOWN PORTS_OUT_P12";

    switch (instance)
    {
    case PORTS_OUT_P12::value1:
        result = "value1";
        break;
    case PORTS_OUT_P12::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORTS_OUT_P12.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORTS_OUT_P12 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORTS_OUT_P12::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORTS_OUT_P12::value2;
    }

    return result;
}

}; // namespace XMC4700
