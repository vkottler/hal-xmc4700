/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CCR_STKALIGN : uint8_t
{
    value1 /*!< 4-byte aligned */,
    value2 = 1 /*!< 8-byte aligned. */
};
static_assert(sizeof(PPB_CCR_STKALIGN) == 1);

static constexpr uint16_t PPB_CCR_STKALIGN_id = 782;

/**
 * Converts PPB_CCR_STKALIGN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CCR_STKALIGN instance)
{
    const char *result = "UNKNOWN PPB_CCR_STKALIGN";

    switch (instance)
    {
    case PPB_CCR_STKALIGN::value1:
        result = "value1";
        break;
    case PPB_CCR_STKALIGN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CCR_STKALIGN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CCR_STKALIGN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CCR_STKALIGN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CCR_STKALIGN::value2;
    }

    return result;
}

}; // namespace XMC4700
