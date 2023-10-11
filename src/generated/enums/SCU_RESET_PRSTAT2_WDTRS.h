/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_PRSTAT2_WDTRS : uint8_t
{
    value1 /*!< Reset de-asserted */,
    value2 = 1 /*!< Reset asserted */
};
static_assert(sizeof(SCU_RESET_PRSTAT2_WDTRS) == 1);

static constexpr uint16_t SCU_RESET_PRSTAT2_WDTRS_id = 2887;

/**
 * Converts SCU_RESET_PRSTAT2_WDTRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_PRSTAT2_WDTRS instance)
{
    const char *result = "UNKNOWN SCU_RESET_PRSTAT2_WDTRS";

    switch (instance)
    {
    case SCU_RESET_PRSTAT2_WDTRS::value1:
        result = "value1";
        break;
    case SCU_RESET_PRSTAT2_WDTRS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_PRSTAT2_WDTRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_PRSTAT2_WDTRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_PRSTAT2_WDTRS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_PRSTAT2_WDTRS::value2;
    }

    return result;
}

}; // namespace XMC4700
