/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_TRAP_TRAPCLR_BWERR1T : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Clear trap request */
};
static_assert(sizeof(SCU_TRAP_TRAPCLR_BWERR1T) == 1);

static constexpr uint16_t SCU_TRAP_TRAPCLR_BWERR1T_id = 2486;

/**
 * Converts SCU_TRAP_TRAPCLR_BWERR1T to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_TRAP_TRAPCLR_BWERR1T instance)
{
    const char *result = "UNKNOWN SCU_TRAP_TRAPCLR_BWERR1T";

    switch (instance)
    {
    case SCU_TRAP_TRAPCLR_BWERR1T::value1:
        result = "value1";
        break;
    case SCU_TRAP_TRAPCLR_BWERR1T::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_TRAP_TRAPCLR_BWERR1T.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_TRAP_TRAPCLR_BWERR1T &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_TRAP_TRAPCLR_BWERR1T::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_TRAP_TRAPCLR_BWERR1T::value2;
    }

    return result;
}

}; // namespace XMC4700
