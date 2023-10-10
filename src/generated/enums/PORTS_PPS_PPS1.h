/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORTS_PPS_PPS1 : uint8_t
{
    value1 /*!< Pin Power Save of Pn.x is disabled. */,
    value2 = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORTS_PPS_PPS1) == 1);

static constexpr uint16_t PORTS_PPS_PPS1_id = 672;

/**
 * Converts PORTS_PPS_PPS1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORTS_PPS_PPS1 instance)
{
    const char *result = "UNKNOWN PORTS_PPS_PPS1";

    switch (instance)
    {
    case PORTS_PPS_PPS1::value1:
        result = "value1";
        break;
    case PORTS_PPS_PPS1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORTS_PPS_PPS1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORTS_PPS_PPS1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORTS_PPS_PPS1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORTS_PPS_PPS1::value2;
    }

    return result;
}

}; // namespace XMC4700
