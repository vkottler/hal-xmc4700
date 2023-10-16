/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT15_PDISC_PDIS8 : uint8_t
{
    value1 /*!< Pad is enabled, digital input selected. */,
    value2 = 1 /*!< Pad is disabled, ADC 3 analog input 0. */
};
static_assert(sizeof(PORT15_PDISC_PDIS8) == 1);

/**
 * Converts PORT15_PDISC_PDIS8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT15_PDISC_PDIS8 instance)
{
    const char *result = "UNKNOWN PORT15_PDISC_PDIS8";

    switch (instance)
    {
    case PORT15_PDISC_PDIS8::value1:
        result = "value1";
        break;
    case PORT15_PDISC_PDIS8::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT15_PDISC_PDIS8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT15_PDISC_PDIS8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT15_PDISC_PDIS8::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT15_PDISC_PDIS8::value2;
    }

    return result;
}

}; // namespace XMC4700
