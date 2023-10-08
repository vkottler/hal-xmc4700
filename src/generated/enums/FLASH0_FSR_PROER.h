/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No protection error",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Protection error.",
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

enum class FLASH0_FSR_PROER : uint8_t
{
    value1 /*!< No protection error */,
    value2 = 1 /*!< Protection error. */
};
static_assert(sizeof(FLASH0_FSR_PROER) == 1);

static constexpr uint16_t FLASH0_FSR_PROER_id = 1933;

/**
 * Converts FLASH0_FSR_PROER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FSR_PROER instance)
{
    const char *result = "UNKNOWN FLASH0_FSR_PROER";

    switch (instance)
    {
    case FLASH0_FSR_PROER::value1:
        result = "value1";
        break;
    case FLASH0_FSR_PROER::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FSR_PROER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FSR_PROER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FSR_PROER::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FSR_PROER::value2;
    }

    return result;
}

}; // namespace XMC4700