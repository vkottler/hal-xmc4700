/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT5_HWSEL_HW15 : uint8_t
{
    software_control_only /*!< Software control only. */,
    hw0_control_path_can_override_software_config_cont =
        1 /*!< HW0 control path can override the software configuration. */,
    hw1_control_path_can_override_software_config_cont =
        2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORT5_HWSEL_HW15) == 1);

/**
 * Converts PORT5_HWSEL_HW15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT5_HWSEL_HW15 instance)
{
    const char *result = "UNKNOWN PORT5_HWSEL_HW15";

    switch (instance)
    {
    case PORT5_HWSEL_HW15::software_control_only:
        result = "software_control_only";
        break;
    case PORT5_HWSEL_HW15::hw0_control_path_can_override_software_config_cont:
        result = "hw0_control_path_can_override_software_config_cont";
        break;
    case PORT5_HWSEL_HW15::hw1_control_path_can_override_software_config_cont:
        result = "hw1_control_path_can_override_software_config_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT5_HWSEL_HW15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT5_HWSEL_HW15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "software_control_only", 21)))
    {
        output = PORT5_HWSEL_HW15::software_control_only;
    }
    else if ((result = !strncmp(
                  data, "hw0_control_path_can_override_software_config_cont",
                  50)))
    {
        output = PORT5_HWSEL_HW15::
            hw0_control_path_can_override_software_config_cont;
    }
    else if ((result = !strncmp(
                  data, "hw1_control_path_can_override_software_config_cont",
                  50)))
    {
        output = PORT5_HWSEL_HW15::
            hw1_control_path_can_override_software_config_cont;
    }

    return result;
}

}; // namespace XMC4700
