/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_INTERRUPT_SRSTAT_RMX : uint8_t
{
    not_updated /*!< Not updated */,
    update_completed = 1 /*!< Update completed */
};
static_assert(sizeof(SCU_INTERRUPT_SRSTAT_RMX) == 1);

/**
 * Converts SCU_INTERRUPT_SRSTAT_RMX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_INTERRUPT_SRSTAT_RMX instance)
{
    const char *result = "UNKNOWN SCU_INTERRUPT_SRSTAT_RMX";

    switch (instance)
    {
    case SCU_INTERRUPT_SRSTAT_RMX::not_updated:
        result = "not_updated";
        break;
    case SCU_INTERRUPT_SRSTAT_RMX::update_completed:
        result = "update_completed";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_INTERRUPT_SRSTAT_RMX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_INTERRUPT_SRSTAT_RMX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_updated", 11)))
    {
        output = SCU_INTERRUPT_SRSTAT_RMX::not_updated;
    }
    else if ((result = !strncmp(data, "update_completed", 16)))
    {
        output = SCU_INTERRUPT_SRSTAT_RMX::update_completed;
    }

    return result;
}

}; // namespace XMC4700
