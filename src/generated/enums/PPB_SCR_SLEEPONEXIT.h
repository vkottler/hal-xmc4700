/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_SCR_SLEEPONEXIT : uint8_t
{
    value1 /*!< do not sleep when returning to Thread mode. */,
    value2 = 1 /*!< enter sleep, or deep sleep, on return from an ISR. */
};
static_assert(sizeof(PPB_SCR_SLEEPONEXIT) == 1);

static constexpr uint16_t PPB_SCR_SLEEPONEXIT_id = 2381;

/**
 * Converts PPB_SCR_SLEEPONEXIT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_SCR_SLEEPONEXIT instance)
{
    const char *result = "UNKNOWN PPB_SCR_SLEEPONEXIT";

    switch (instance)
    {
    case PPB_SCR_SLEEPONEXIT::value1:
        result = "value1";
        break;
    case PPB_SCR_SLEEPONEXIT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_SCR_SLEEPONEXIT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_SCR_SLEEPONEXIT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_SCR_SLEEPONEXIT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_SCR_SLEEPONEXIT::value2;
    }

    return result;
}

}; // namespace XMC4700
