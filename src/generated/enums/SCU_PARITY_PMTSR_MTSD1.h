/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PARITY_PMTSR_MTSD1 : uint8_t
{
    standard_operation /*!< Standard operation */,
    parity_bits_under_test = 1 /*!< Parity bits under test */
};
static_assert(sizeof(SCU_PARITY_PMTSR_MTSD1) == 1);

/**
 * Converts SCU_PARITY_PMTSR_MTSD1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_PMTSR_MTSD1 instance)
{
    const char *result = "UNKNOWN SCU_PARITY_PMTSR_MTSD1";

    switch (instance)
    {
    case SCU_PARITY_PMTSR_MTSD1::standard_operation:
        result = "standard_operation";
        break;
    case SCU_PARITY_PMTSR_MTSD1::parity_bits_under_test:
        result = "parity_bits_under_test";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_PMTSR_MTSD1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_PMTSR_MTSD1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "standard_operation", 18)))
    {
        output = SCU_PARITY_PMTSR_MTSD1::standard_operation;
    }
    else if ((result = !strncmp(data, "parity_bits_under_test", 22)))
    {
        output = SCU_PARITY_PMTSR_MTSD1::parity_bits_under_test;
    }

    return result;
}

}; // namespace XMC4700
