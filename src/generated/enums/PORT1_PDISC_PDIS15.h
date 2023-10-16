/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT1_PDISC_PDIS15 : uint8_t
{
    value1 /*!< Pad Pn.x is enabled. */,
    value2 = 1 /*!< Pad Pn.x is disabled. */
};
static_assert(sizeof(PORT1_PDISC_PDIS15) == 1);

/**
 * Converts PORT1_PDISC_PDIS15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT1_PDISC_PDIS15 instance)
{
    const char *result = "UNKNOWN PORT1_PDISC_PDIS15";

    switch (instance)
    {
    case PORT1_PDISC_PDIS15::value1:
        result = "value1";
        break;
    case PORT1_PDISC_PDIS15::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT1_PDISC_PDIS15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT1_PDISC_PDIS15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT1_PDISC_PDIS15::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT1_PDISC_PDIS15::value2;
    }

    return result;
}

}; // namespace XMC4700
