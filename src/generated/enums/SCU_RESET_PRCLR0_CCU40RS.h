/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_PRCLR0_CCU40RS : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< De-assert reset */
};
static_assert(sizeof(SCU_RESET_PRCLR0_CCU40RS) == 1);

static constexpr uint16_t SCU_RESET_PRCLR0_CCU40RS_id = 2855;

/**
 * Converts SCU_RESET_PRCLR0_CCU40RS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_PRCLR0_CCU40RS instance)
{
    const char *result = "UNKNOWN SCU_RESET_PRCLR0_CCU40RS";

    switch (instance)
    {
    case SCU_RESET_PRCLR0_CCU40RS::value1:
        result = "value1";
        break;
    case SCU_RESET_PRCLR0_CCU40RS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_PRCLR0_CCU40RS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_PRCLR0_CCU40RS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_PRCLR0_CCU40RS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_PRCLR0_CCU40RS::value2;
    }

    return result;
}

}; // namespace XMC4700
