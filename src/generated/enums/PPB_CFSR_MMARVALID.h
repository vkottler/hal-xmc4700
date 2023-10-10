/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_MMARVALID : uint8_t
{
    value1 /*!< value in MMAR is not a valid fault address */,
    value2 = 1 /*!< MMAR holds a valid fault address. */
};
static_assert(sizeof(PPB_CFSR_MMARVALID) == 1);

static constexpr uint16_t PPB_CFSR_MMARVALID_id = 801;

/**
 * Converts PPB_CFSR_MMARVALID to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_MMARVALID instance)
{
    const char *result = "UNKNOWN PPB_CFSR_MMARVALID";

    switch (instance)
    {
    case PPB_CFSR_MMARVALID::value1:
        result = "value1";
        break;
    case PPB_CFSR_MMARVALID::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_MMARVALID.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_MMARVALID &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_MMARVALID::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_MMARVALID::value2;
    }

    return result;
}

}; // namespace XMC4700
