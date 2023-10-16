/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_USBPLLSTAT_PWDSTAT : uint8_t
{
    value1 /*!< PLL Power-saving Mode was not entered */,
    value2 = 1 /*!< PLL Power-saving Mode was entered */
};
static_assert(sizeof(SCU_PLL_USBPLLSTAT_PWDSTAT) == 1);

/**
 * Converts SCU_PLL_USBPLLSTAT_PWDSTAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_USBPLLSTAT_PWDSTAT instance)
{
    const char *result = "UNKNOWN SCU_PLL_USBPLLSTAT_PWDSTAT";

    switch (instance)
    {
    case SCU_PLL_USBPLLSTAT_PWDSTAT::value1:
        result = "value1";
        break;
    case SCU_PLL_USBPLLSTAT_PWDSTAT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_USBPLLSTAT_PWDSTAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_USBPLLSTAT_PWDSTAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_USBPLLSTAT_PWDSTAT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_USBPLLSTAT_PWDSTAT::value2;
    }

    return result;
}

}; // namespace XMC4700
