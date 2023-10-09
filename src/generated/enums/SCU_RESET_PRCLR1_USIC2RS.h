/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_PRCLR1_USIC2RS : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< De-assert reset */
};
static_assert(sizeof(SCU_RESET_PRCLR1_USIC2RS) == 1);

static constexpr uint16_t SCU_RESET_PRCLR1_USIC2RS_id = 2079;

/**
 * Converts SCU_RESET_PRCLR1_USIC2RS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_PRCLR1_USIC2RS instance)
{
    const char *result = "UNKNOWN SCU_RESET_PRCLR1_USIC2RS";

    switch (instance)
    {
    case SCU_RESET_PRCLR1_USIC2RS::value1:
        result = "value1";
        break;
    case SCU_RESET_PRCLR1_USIC2RS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_PRCLR1_USIC2RS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_PRCLR1_USIC2RS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_PRCLR1_USIC2RS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_PRCLR1_USIC2RS::value2;
    }

    return result;
}

}; // namespace XMC4700
