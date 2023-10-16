/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CPACR_CP11 : uint8_t
{
    value1 /*!< Access denied. Any attempted access generates a NOCP UsageFault. */,
    value2 = 1 /*!< Privileged access only. An unprivileged access generates a NOCP fault. */,
    value4 = 3 /*!< Full access. */
};
static_assert(sizeof(PPB_CPACR_CP11) == 1);

/**
 * Converts PPB_CPACR_CP11 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CPACR_CP11 instance)
{
    const char *result = "UNKNOWN PPB_CPACR_CP11";

    switch (instance)
    {
    case PPB_CPACR_CP11::value1:
        result = "value1";
        break;
    case PPB_CPACR_CP11::value2:
        result = "value2";
        break;
    case PPB_CPACR_CP11::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CPACR_CP11.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CPACR_CP11 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CPACR_CP11::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CPACR_CP11::value2;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = PPB_CPACR_CP11::value4;
    }

    return result;
}

}; // namespace XMC4700
