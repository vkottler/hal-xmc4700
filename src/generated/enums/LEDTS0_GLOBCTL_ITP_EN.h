/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_GLOBCTL_ITP_EN : uint8_t
{
    disable /*!< Disable */,
    enable_valid_only_case_hardware_enabled_pad_t_cont =
        1 /*!< Enable (valid only for case of hardware-enabled pad turn
             control) */
};
static_assert(sizeof(LEDTS0_GLOBCTL_ITP_EN) == 1);

/**
 * Converts LEDTS0_GLOBCTL_ITP_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_ITP_EN instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_ITP_EN";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_ITP_EN::disable:
        result = "disable";
        break;
    case LEDTS0_GLOBCTL_ITP_EN::
        enable_valid_only_case_hardware_enabled_pad_t_cont:
        result = "enable_valid_only_case_hardware_enabled_pad_t_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_ITP_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_ITP_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable", 7)))
    {
        output = LEDTS0_GLOBCTL_ITP_EN::disable;
    }
    else if ((result = !strncmp(
                  data, "enable_valid_only_case_hardware_enabled_pad_t_cont",
                  50)))
    {
        output = LEDTS0_GLOBCTL_ITP_EN::
            enable_valid_only_case_hardware_enabled_pad_t_cont;
    }

    return result;
}

}; // namespace XMC4700
