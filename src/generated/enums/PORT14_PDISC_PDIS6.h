/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT14_PDISC_PDIS6 : uint8_t
{
    value1 /*!< Pad is enabled, digital input selected. */,
    value2 = 1 /*!< Pad is disabled, ADC 0 analog input 6 selected. */
};
static_assert(sizeof(PORT14_PDISC_PDIS6) == 1);

static constexpr uint16_t PORT14_PDISC_PDIS6_id = 1311;

/**
 * Converts PORT14_PDISC_PDIS6 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT14_PDISC_PDIS6 instance)
{
    const char *result = "UNKNOWN PORT14_PDISC_PDIS6";

    switch (instance)
    {
    case PORT14_PDISC_PDIS6::value1:
        result = "value1";
        break;
    case PORT14_PDISC_PDIS6::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT14_PDISC_PDIS6.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT14_PDISC_PDIS6 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT14_PDISC_PDIS6::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT14_PDISC_PDIS6::value2;
    }

    return result;
}

}; // namespace XMC4700
