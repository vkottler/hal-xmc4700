/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PSUS_MSUS : uint8_t
{
    value1 /*!< Suspend request ignored */,
    value2 = 1 /*!< Stop immediately. Multi-Channel pattern is not set to the reset value. */,
    value3 = 2 /*!< Stop immediately. Multi-Channel pattern is set to the reset value. */,
    value4 = 3 /*!< Suspend with the synchronization of the PWM signal. Multi-Channel pattern is set to the reset value at the same time of the synchronization. */
};
static_assert(sizeof(POSIF0_PSUS_MSUS) == 1);

/**
 * Converts POSIF0_PSUS_MSUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PSUS_MSUS instance)
{
    const char *result = "UNKNOWN POSIF0_PSUS_MSUS";

    switch (instance)
    {
    case POSIF0_PSUS_MSUS::value1:
        result = "value1";
        break;
    case POSIF0_PSUS_MSUS::value2:
        result = "value2";
        break;
    case POSIF0_PSUS_MSUS::value3:
        result = "value3";
        break;
    case POSIF0_PSUS_MSUS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PSUS_MSUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PSUS_MSUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PSUS_MSUS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PSUS_MSUS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = POSIF0_PSUS_MSUS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = POSIF0_PSUS_MSUS::value4;
    }

    return result;
}

}; // namespace XMC4700
