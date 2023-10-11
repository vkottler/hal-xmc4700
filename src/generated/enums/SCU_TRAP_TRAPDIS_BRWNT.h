/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_TRAP_TRAPDIS_BRWNT : uint8_t
{
    value1 /*!< Trap request enabled */,
    value2 = 1 /*!< Trap request disabled */
};
static_assert(sizeof(SCU_TRAP_TRAPDIS_BRWNT) == 1);

static constexpr uint16_t SCU_TRAP_TRAPDIS_BRWNT_id = 2922;

/**
 * Converts SCU_TRAP_TRAPDIS_BRWNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_TRAP_TRAPDIS_BRWNT instance)
{
    const char *result = "UNKNOWN SCU_TRAP_TRAPDIS_BRWNT";

    switch (instance)
    {
    case SCU_TRAP_TRAPDIS_BRWNT::value1:
        result = "value1";
        break;
    case SCU_TRAP_TRAPDIS_BRWNT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_TRAP_TRAPDIS_BRWNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_TRAP_TRAPDIS_BRWNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_TRAP_TRAPDIS_BRWNT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_TRAP_TRAPDIS_BRWNT::value2;
    }

    return result;
}

}; // namespace XMC4700
