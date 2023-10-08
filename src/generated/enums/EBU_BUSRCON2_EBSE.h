/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "ADV is delayed.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "ADV is not delayed.",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON2_EBSE : uint8_t
{
    value1 /*!< ADV is delayed. */,
    value2 = 1 /*!< ADV is not delayed. */
};
static_assert(sizeof(EBU_BUSRCON2_EBSE) == 1);

static constexpr uint16_t EBU_BUSRCON2_EBSE_id = 475;

/**
 * Converts EBU_BUSRCON2_EBSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON2_EBSE instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON2_EBSE";

    switch (instance)
    {
    case EBU_BUSRCON2_EBSE::value1:
        result = "value1";
        break;
    case EBU_BUSRCON2_EBSE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON2_EBSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON2_EBSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON2_EBSE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON2_EBSE::value2;
    }

    return result;
}

}; // namespace XMC4700
