/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_MSES : uint8_t
{
    value1 /*!< The signal used to enable a pattern update is active on the rising edge */,
    value2 = 1 /*!< The signal used to enable a pattern update is active on the falling edge */
};
static_assert(sizeof(POSIF0_PCONF_MSES) == 1);

/**
 * Converts POSIF0_PCONF_MSES to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_MSES instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_MSES";

    switch (instance)
    {
    case POSIF0_PCONF_MSES::value1:
        result = "value1";
        break;
    case POSIF0_PCONF_MSES::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_MSES.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_MSES &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PCONF_MSES::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PCONF_MSES::value2;
    }

    return result;
}

}; // namespace XMC4700
