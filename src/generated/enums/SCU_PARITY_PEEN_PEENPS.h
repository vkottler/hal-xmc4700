/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PARITY_PEEN_PEENPS : uint8_t
{
    value1 /*!< Disabled */,
    value2 = 1 /*!< Enabled */
};
static_assert(sizeof(SCU_PARITY_PEEN_PEENPS) == 1);

static constexpr uint16_t SCU_PARITY_PEEN_PEENPS_id = 2715;

/**
 * Converts SCU_PARITY_PEEN_PEENPS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_PEEN_PEENPS instance)
{
    const char *result = "UNKNOWN SCU_PARITY_PEEN_PEENPS";

    switch (instance)
    {
    case SCU_PARITY_PEEN_PEENPS::value1:
        result = "value1";
        break;
    case SCU_PARITY_PEEN_PEENPS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_PEEN_PEENPS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_PEEN_PEENPS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PARITY_PEEN_PEENPS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PARITY_PEEN_PEENPS::value2;
    }

    return result;
}

}; // namespace XMC4700
