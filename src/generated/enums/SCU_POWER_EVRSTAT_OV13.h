/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_POWER_EVRSTAT_OV13 : uint8_t
{
    no_overvoltage_condition /*!< No overvoltage condition */,
    regulator_overvoltage = 1 /*!< Regulator is in overvoltage */
};
static_assert(sizeof(SCU_POWER_EVRSTAT_OV13) == 1);

/**
 * Converts SCU_POWER_EVRSTAT_OV13 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_POWER_EVRSTAT_OV13 instance)
{
    const char *result = "UNKNOWN SCU_POWER_EVRSTAT_OV13";

    switch (instance)
    {
    case SCU_POWER_EVRSTAT_OV13::no_overvoltage_condition:
        result = "no_overvoltage_condition";
        break;
    case SCU_POWER_EVRSTAT_OV13::regulator_overvoltage:
        result = "regulator_overvoltage";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_POWER_EVRSTAT_OV13.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_POWER_EVRSTAT_OV13 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_overvoltage_condition", 24)))
    {
        output = SCU_POWER_EVRSTAT_OV13::no_overvoltage_condition;
    }
    else if ((result = !strncmp(data, "regulator_overvoltage", 21)))
    {
        output = SCU_POWER_EVRSTAT_OV13::regulator_overvoltage;
    }

    return result;
}

}; // namespace XMC4700
