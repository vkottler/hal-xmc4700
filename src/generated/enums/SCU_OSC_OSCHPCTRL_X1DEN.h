/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_OSC_OSCHPCTRL_X1DEN : uint8_t
{
    value1 /*!< Bit X1D is not updated */,
    value2 = 1 /*!< Bit X1D can be updated */
};
static_assert(sizeof(SCU_OSC_OSCHPCTRL_X1DEN) == 1);

/**
 * Converts SCU_OSC_OSCHPCTRL_X1DEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_OSC_OSCHPCTRL_X1DEN instance)
{
    const char *result = "UNKNOWN SCU_OSC_OSCHPCTRL_X1DEN";

    switch (instance)
    {
    case SCU_OSC_OSCHPCTRL_X1DEN::value1:
        result = "value1";
        break;
    case SCU_OSC_OSCHPCTRL_X1DEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_OSC_OSCHPCTRL_X1DEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_OSC_OSCHPCTRL_X1DEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_OSC_OSCHPCTRL_X1DEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_OSC_OSCHPCTRL_X1DEN::value2;
    }

    return result;
}

}; // namespace XMC4700
