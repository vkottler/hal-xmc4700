/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_ICSR_RETTOBASE : uint8_t
{
    value1 /*!< there are preempted active exceptions to execute */,
    value2 = 1 /*!< there are no active exceptions, or the currently-executing
                  exception is the only active exception. */
};
static_assert(sizeof(PPB_ICSR_RETTOBASE) == 1);

static constexpr uint16_t PPB_ICSR_RETTOBASE_id = 775;

/**
 * Converts PPB_ICSR_RETTOBASE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_ICSR_RETTOBASE instance)
{
    const char *result = "UNKNOWN PPB_ICSR_RETTOBASE";

    switch (instance)
    {
    case PPB_ICSR_RETTOBASE::value1:
        result = "value1";
        break;
    case PPB_ICSR_RETTOBASE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_ICSR_RETTOBASE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_ICSR_RETTOBASE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_ICSR_RETTOBASE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_ICSR_RETTOBASE::value2;
    }

    return result;
}

}; // namespace XMC4700
