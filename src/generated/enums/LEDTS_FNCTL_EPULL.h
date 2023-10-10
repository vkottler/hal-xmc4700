/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS_FNCTL_EPULL : uint8_t
{
    value1 /*!< HW over-rule to enable internal pull-up is active on TSIN[x]
              for set duration in touch-sense time slice. With this setting, it
              is not specified to assign the COLA to any pin. */
        ,
    value2 = 1 /*!< Enable external pull-up: Output 1 on pin COLA for whole
                  duration of touch-sense time slice. */
};
static_assert(sizeof(LEDTS_FNCTL_EPULL) == 1);

static constexpr uint16_t LEDTS_FNCTL_EPULL_id = 590;

/**
 * Converts LEDTS_FNCTL_EPULL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS_FNCTL_EPULL instance)
{
    const char *result = "UNKNOWN LEDTS_FNCTL_EPULL";

    switch (instance)
    {
    case LEDTS_FNCTL_EPULL::value1:
        result = "value1";
        break;
    case LEDTS_FNCTL_EPULL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS_FNCTL_EPULL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS_FNCTL_EPULL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS_FNCTL_EPULL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS_FNCTL_EPULL::value2;
    }

    return result;
}

}; // namespace XMC4700
