/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT0_PDISC_PDIS1 : uint8_t
{
    value1 /*!< Pad Pn.x is enabled. */,
    value2 = 1 /*!< Pad Pn.x is disabled. */
};
static_assert(sizeof(PORT0_PDISC_PDIS1) == 1);

static constexpr uint16_t PORT0_PDISC_PDIS1_id = 1110;

/**
 * Converts PORT0_PDISC_PDIS1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_PDISC_PDIS1 instance)
{
    const char *result = "UNKNOWN PORT0_PDISC_PDIS1";

    switch (instance)
    {
    case PORT0_PDISC_PDIS1::value1:
        result = "value1";
        break;
    case PORT0_PDISC_PDIS1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_PDISC_PDIS1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_PDISC_PDIS1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT0_PDISC_PDIS1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT0_PDISC_PDIS1::value2;
    }

    return result;
}

}; // namespace XMC4700
