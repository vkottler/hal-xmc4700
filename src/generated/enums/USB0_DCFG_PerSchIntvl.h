/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCFG_PerSchIntvl : uint8_t
{
    value1 /*!< 25% of frame. */,
    value2 = 1 /*!< 50% of frame. */,
    value3 = 2 /*!< 75% of frame. */
};
static_assert(sizeof(USB0_DCFG_PerSchIntvl) == 1);

/**
 * Converts USB0_DCFG_PerSchIntvl to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCFG_PerSchIntvl instance)
{
    const char *result = "UNKNOWN USB0_DCFG_PerSchIntvl";

    switch (instance)
    {
    case USB0_DCFG_PerSchIntvl::value1:
        result = "value1";
        break;
    case USB0_DCFG_PerSchIntvl::value2:
        result = "value2";
        break;
    case USB0_DCFG_PerSchIntvl::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCFG_PerSchIntvl.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCFG_PerSchIntvl &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_DCFG_PerSchIntvl::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_DCFG_PerSchIntvl::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_DCFG_PerSchIntvl::value3;
    }

    return result;
}

}; // namespace XMC4700
