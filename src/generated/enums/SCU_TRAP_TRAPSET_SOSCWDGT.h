/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_TRAP_TRAPSET_SOSCWDGT : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Set trap request */
};
static_assert(sizeof(SCU_TRAP_TRAPSET_SOSCWDGT) == 1);

static constexpr uint16_t SCU_TRAP_TRAPSET_SOSCWDGT_id = 2942;

/**
 * Converts SCU_TRAP_TRAPSET_SOSCWDGT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_TRAP_TRAPSET_SOSCWDGT instance)
{
    const char *result = "UNKNOWN SCU_TRAP_TRAPSET_SOSCWDGT";

    switch (instance)
    {
    case SCU_TRAP_TRAPSET_SOSCWDGT::value1:
        result = "value1";
        break;
    case SCU_TRAP_TRAPSET_SOSCWDGT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_TRAP_TRAPSET_SOSCWDGT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_TRAP_TRAPSET_SOSCWDGT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_TRAP_TRAPSET_SOSCWDGT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_TRAP_TRAPSET_SOSCWDGT::value2;
    }

    return result;
}

}; // namespace XMC4700
