/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS_FNCTL_TSCTRSAT : uint8_t
{
    value1 /*!< Disable */,
    value2 = 1 /*!< Enable. TS-counter stops counting in the touch-sense time
                  slice(s) of the same (extended) frame when it reaches FFH.
                  Counter starts to count again on the first pad turn of a new
                  TSIN[x], triggered on compare match. */
};
static_assert(sizeof(LEDTS_FNCTL_TSCTRSAT) == 1);

static constexpr uint16_t LEDTS_FNCTL_TSCTRSAT_id = 585;

/**
 * Converts LEDTS_FNCTL_TSCTRSAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS_FNCTL_TSCTRSAT instance)
{
    const char *result = "UNKNOWN LEDTS_FNCTL_TSCTRSAT";

    switch (instance)
    {
    case LEDTS_FNCTL_TSCTRSAT::value1:
        result = "value1";
        break;
    case LEDTS_FNCTL_TSCTRSAT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS_FNCTL_TSCTRSAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS_FNCTL_TSCTRSAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS_FNCTL_TSCTRSAT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS_FNCTL_TSCTRSAT::value2;
    }

    return result;
}

}; // namespace XMC4700