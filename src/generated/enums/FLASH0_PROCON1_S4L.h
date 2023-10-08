/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No write protection is configured for sector n.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Write protection is configured for sector n.",
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

enum class FLASH0_PROCON1_S4L : uint8_t
{
    value1 /*!< No write protection is configured for sector n. */,
    value2 = 1 /*!< Write protection is configured for sector n. */
};
static_assert(sizeof(FLASH0_PROCON1_S4L) == 1);

static constexpr uint16_t FLASH0_PROCON1_S4L_id = 1979;

/**
 * Converts FLASH0_PROCON1_S4L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON1_S4L instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON1_S4L";

    switch (instance)
    {
    case FLASH0_PROCON1_S4L::value1:
        result = "value1";
        break;
    case FLASH0_PROCON1_S4L::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON1_S4L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON1_S4L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_PROCON1_S4L::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_PROCON1_S4L::value2;
    }

    return result;
}

}; // namespace XMC4700
