/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_POWER_EVRSTAT_OV13 : uint8_t
{
    value1 /*!< No overvoltage condition */,
    value2 = 1 /*!< Regulator is in overvoltage */
};
static_assert(sizeof(SCU_POWER_EVRSTAT_OV13) == 1);

static constexpr uint16_t SCU_POWER_EVRSTAT_OV13_id = 2813;

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
    case SCU_POWER_EVRSTAT_OV13::value1:
        result = "value1";
        break;
    case SCU_POWER_EVRSTAT_OV13::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_POWER_EVRSTAT_OV13::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_POWER_EVRSTAT_OV13::value2;
    }

    return result;
}

}; // namespace XMC4700
