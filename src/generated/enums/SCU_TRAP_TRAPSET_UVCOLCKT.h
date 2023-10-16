/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_TRAP_TRAPSET_UVCOLCKT : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Set trap request */
};
static_assert(sizeof(SCU_TRAP_TRAPSET_UVCOLCKT) == 1);

/**
 * Converts SCU_TRAP_TRAPSET_UVCOLCKT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_TRAP_TRAPSET_UVCOLCKT instance)
{
    const char *result = "UNKNOWN SCU_TRAP_TRAPSET_UVCOLCKT";

    switch (instance)
    {
    case SCU_TRAP_TRAPSET_UVCOLCKT::value1:
        result = "value1";
        break;
    case SCU_TRAP_TRAPSET_UVCOLCKT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_TRAP_TRAPSET_UVCOLCKT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_TRAP_TRAPSET_UVCOLCKT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_TRAP_TRAPSET_UVCOLCKT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_TRAP_TRAPSET_UVCOLCKT::value2;
    }

    return result;
}

}; // namespace XMC4700
