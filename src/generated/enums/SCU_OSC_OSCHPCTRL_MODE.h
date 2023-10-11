/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_OSC_OSCHPCTRL_MODE : uint8_t
{
    value1 /*!< External Crystal Mode and External Input Clock Mode. The oscillator Power-Saving Mode is not entered. */,
    value2 = 1 /*!< OSC is disabled. The oscillator Power-Saving Mode is not entered. */,
    value3 = 2 /*!< External Input Clock Mode and the oscillator Power-Saving Mode is entered */,
    value4 = 3 /*!< OSC is disabled. The oscillator Power-Saving Mode is entered. */
};
static_assert(sizeof(SCU_OSC_OSCHPCTRL_MODE) == 1);

static constexpr uint16_t SCU_OSC_OSCHPCTRL_MODE_id = 2699;

/**
 * Converts SCU_OSC_OSCHPCTRL_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_OSC_OSCHPCTRL_MODE instance)
{
    const char *result = "UNKNOWN SCU_OSC_OSCHPCTRL_MODE";

    switch (instance)
    {
    case SCU_OSC_OSCHPCTRL_MODE::value1:
        result = "value1";
        break;
    case SCU_OSC_OSCHPCTRL_MODE::value2:
        result = "value2";
        break;
    case SCU_OSC_OSCHPCTRL_MODE::value3:
        result = "value3";
        break;
    case SCU_OSC_OSCHPCTRL_MODE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_OSC_OSCHPCTRL_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_OSC_OSCHPCTRL_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::value4;
    }

    return result;
}

}; // namespace XMC4700
