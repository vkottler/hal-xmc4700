/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Two clocks (default after reset)",
 *       "value": 2
 *     },
 *     "value2": {
 *       "description": "Three clocks",
 *       "value": 3
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

enum class EBU_SDRMOD_CASLAT : uint8_t
{
    value1 = 2 /*!< Two clocks (default after reset) */,
    value2 = 3 /*!< Three clocks */
};
static_assert(sizeof(EBU_SDRMOD_CASLAT) == 1);

static constexpr uint16_t EBU_SDRMOD_CASLAT_id = 551;

/**
 * Converts EBU_SDRMOD_CASLAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMOD_CASLAT instance)
{
    const char *result = "UNKNOWN EBU_SDRMOD_CASLAT";

    switch (instance)
    {
    case EBU_SDRMOD_CASLAT::value1:
        result = "value1";
        break;
    case EBU_SDRMOD_CASLAT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMOD_CASLAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMOD_CASLAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRMOD_CASLAT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_SDRMOD_CASLAT::value2;
    }

    return result;
}

}; // namespace XMC4700
