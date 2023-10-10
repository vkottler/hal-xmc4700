/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_INTE_OME : uint8_t
{
    value1 /*!< One Match interrupt is disabled */,
    value2 = 1 /*!< One Match interrupt is enabled */
};
static_assert(sizeof(CCU8_INTE_OME) == 1);

static constexpr uint16_t CCU8_INTE_OME_id = 188;

/**
 * Converts CCU8_INTE_OME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_INTE_OME instance)
{
    const char *result = "UNKNOWN CCU8_INTE_OME";

    switch (instance)
    {
    case CCU8_INTE_OME::value1:
        result = "value1";
        break;
    case CCU8_INTE_OME::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_INTE_OME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_INTE_OME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_INTE_OME::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_INTE_OME::value2;
    }

    return result;
}

}; // namespace XMC4700