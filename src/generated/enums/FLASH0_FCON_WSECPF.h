/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No additional wait state for error correction",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "One additional wait state for error correction during read access to Program Flash. If enabled, this wait state is only used for the first transfer of a burst transfer.",
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

enum class FLASH0_FCON_WSECPF : uint8_t
{
    value1 /*!< No additional wait state for error correction */,
    value2 = 1 /*!< One additional wait state for error correction during read access to Program Flash. If enabled, this wait state is only used for the first transfer of a burst transfer. */
};
static_assert(sizeof(FLASH0_FCON_WSECPF) == 1);

static constexpr uint16_t FLASH0_FCON_WSECPF_id = 1952;

/**
 * Converts FLASH0_FCON_WSECPF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_WSECPF instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_WSECPF";

    switch (instance)
    {
    case FLASH0_FCON_WSECPF::value1:
        result = "value1";
        break;
    case FLASH0_FCON_WSECPF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_WSECPF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_WSECPF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FCON_WSECPF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FCON_WSECPF::value2;
    }

    return result;
}

}; // namespace XMC4700