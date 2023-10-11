/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT5_PDISC_PDIS8 : uint8_t
{
    value1 /*!< Pad Pn.x is enabled. */,
    value2 = 1 /*!< Pad Pn.x is disabled. */
};
static_assert(sizeof(PORT5_PDISC_PDIS8) == 1);

static constexpr uint16_t PORT5_PDISC_PDIS8_id = 1829;

/**
 * Converts PORT5_PDISC_PDIS8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT5_PDISC_PDIS8 instance)
{
    const char *result = "UNKNOWN PORT5_PDISC_PDIS8";

    switch (instance)
    {
    case PORT5_PDISC_PDIS8::value1:
        result = "value1";
        break;
    case PORT5_PDISC_PDIS8::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT5_PDISC_PDIS8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT5_PDISC_PDIS8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT5_PDISC_PDIS8::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT5_PDISC_PDIS8::value2;
    }

    return result;
}

}; // namespace XMC4700
