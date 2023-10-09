/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTCLR_HIBWK : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< De-assert reset status bit */
};
static_assert(sizeof(SCU_RESET_RSTCLR_HIBWK) == 1);

static constexpr uint16_t SCU_RESET_RSTCLR_HIBWK_id = 2027;

/**
 * Converts SCU_RESET_RSTCLR_HIBWK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTCLR_HIBWK instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTCLR_HIBWK";

    switch (instance)
    {
    case SCU_RESET_RSTCLR_HIBWK::value1:
        result = "value1";
        break;
    case SCU_RESET_RSTCLR_HIBWK::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTCLR_HIBWK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTCLR_HIBWK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_RSTCLR_HIBWK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_RSTCLR_HIBWK::value2;
    }

    return result;
}

}; // namespace XMC4700
