/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PFLGE_EPCLK : uint8_t
{
    value1 /*!< Quadrature Period CLK event interrupt disabled */,
    value2 = 1 /*!< Quadrature Period CLK event interrupt enabled */
};
static_assert(sizeof(POSIF0_PFLGE_EPCLK) == 1);

/**
 * Converts POSIF0_PFLGE_EPCLK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PFLGE_EPCLK instance)
{
    const char *result = "UNKNOWN POSIF0_PFLGE_EPCLK";

    switch (instance)
    {
    case POSIF0_PFLGE_EPCLK::value1:
        result = "value1";
        break;
    case POSIF0_PFLGE_EPCLK::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PFLGE_EPCLK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PFLGE_EPCLK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PFLGE_EPCLK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PFLGE_EPCLK::value2;
    }

    return result;
}

}; // namespace XMC4700
