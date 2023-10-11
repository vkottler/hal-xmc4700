/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON3_BFCMSEL : uint8_t
{
    value1 /*!< Burst Flash Clock runs continuously with values selected by this register */,
    value2 = 1 /*!< Burst Flash Clock is disabled between accesses */
};
static_assert(sizeof(EBU_BUSRCON3_BFCMSEL) == 1);

static constexpr uint16_t EBU_BUSRCON3_BFCMSEL_id = 525;

/**
 * Converts EBU_BUSRCON3_BFCMSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON3_BFCMSEL instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON3_BFCMSEL";

    switch (instance)
    {
    case EBU_BUSRCON3_BFCMSEL::value1:
        result = "value1";
        break;
    case EBU_BUSRCON3_BFCMSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON3_BFCMSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON3_BFCMSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON3_BFCMSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON3_BFCMSEL::value2;
    }

    return result;
}

}; // namespace XMC4700
