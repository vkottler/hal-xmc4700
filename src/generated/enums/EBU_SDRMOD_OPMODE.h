/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Only this value must be written (default after reset)",
 *       "value": 0
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

enum class EBU_SDRMOD_OPMODE : uint8_t
{
    value1 /*!< Only this value must be written (default after reset) */
};
static_assert(sizeof(EBU_SDRMOD_OPMODE) == 1);

static constexpr uint16_t EBU_SDRMOD_OPMODE_id = 552;

/**
 * Converts EBU_SDRMOD_OPMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMOD_OPMODE instance)
{
    const char *result = "UNKNOWN EBU_SDRMOD_OPMODE";

    switch (instance)
    {
    case EBU_SDRMOD_OPMODE::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMOD_OPMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMOD_OPMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRMOD_OPMODE::value1;
    }

    return result;
}

}; // namespace XMC4700