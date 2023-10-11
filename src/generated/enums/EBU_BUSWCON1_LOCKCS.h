/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSWCON1_LOCKCS : uint8_t
{
    value1 /*!< Chip Select cannot be locked (default after reset). */,
    value2 = 1 /*!< Chip Select will be automatically locked when written to from the processor data port. */
};
static_assert(sizeof(EBU_BUSWCON1_LOCKCS) == 1);

static constexpr uint16_t EBU_BUSWCON1_LOCKCS_id = 466;

/**
 * Converts EBU_BUSWCON1_LOCKCS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWCON1_LOCKCS instance)
{
    const char *result = "UNKNOWN EBU_BUSWCON1_LOCKCS";

    switch (instance)
    {
    case EBU_BUSWCON1_LOCKCS::value1:
        result = "value1";
        break;
    case EBU_BUSWCON1_LOCKCS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWCON1_LOCKCS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWCON1_LOCKCS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWCON1_LOCKCS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWCON1_LOCKCS::value2;
    }

    return result;
}

}; // namespace XMC4700
