/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_ECRD0_LCV : uint8_t
{
    no_capture_was_lost /*!< No capture was lost */,
    capture_was_lost = 1 /*!< A capture was lost */
};
static_assert(sizeof(CCU40_CC40_ECRD0_LCV) == 1);

/**
 * Converts CCU40_CC40_ECRD0_LCV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_ECRD0_LCV instance)
{
    const char *result = "UNKNOWN CCU40_CC40_ECRD0_LCV";

    switch (instance)
    {
    case CCU40_CC40_ECRD0_LCV::no_capture_was_lost:
        result = "no_capture_was_lost";
        break;
    case CCU40_CC40_ECRD0_LCV::capture_was_lost:
        result = "capture_was_lost";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_ECRD0_LCV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_ECRD0_LCV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_capture_was_lost", 19)))
    {
        output = CCU40_CC40_ECRD0_LCV::no_capture_was_lost;
    }
    else if ((result = !strncmp(data, "capture_was_lost", 16)))
    {
        output = CCU40_CC40_ECRD0_LCV::capture_was_lost;
    }

    return result;
}

}; // namespace XMC4700
