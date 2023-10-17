/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_GLOBCTL_SUSCFG : uint8_t
{
    ignore_suspend_request /*!< Ignore suspend request */,
    enable_suspend_according_request =
        1 /*!< Enable suspend according to request */
};
static_assert(sizeof(LEDTS0_GLOBCTL_SUSCFG) == 1);

/**
 * Converts LEDTS0_GLOBCTL_SUSCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_SUSCFG instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_SUSCFG";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_SUSCFG::ignore_suspend_request:
        result = "ignore_suspend_request";
        break;
    case LEDTS0_GLOBCTL_SUSCFG::enable_suspend_according_request:
        result = "enable_suspend_according_request";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_SUSCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_SUSCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ignore_suspend_request", 22)))
    {
        output = LEDTS0_GLOBCTL_SUSCFG::ignore_suspend_request;
    }
    else if ((result = !strncmp(data, "enable_suspend_according_request", 32)))
    {
        output = LEDTS0_GLOBCTL_SUSCFG::enable_suspend_according_request;
    }

    return result;
}

}; // namespace XMC4700
