/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "TSIN0",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "TSIN7",
 *       "value": 7
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

enum class LEDTS0_FNCTL_PADT : uint8_t
{
    value1 /*!< TSIN0 */,
    value2 = 7 /*!< TSIN7 */
};
static_assert(sizeof(LEDTS0_FNCTL_PADT) == 1);

static constexpr uint16_t LEDTS0_FNCTL_PADT_id = 881;

/**
 * Converts LEDTS0_FNCTL_PADT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_PADT instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_PADT";

    switch (instance)
    {
    case LEDTS0_FNCTL_PADT::value1:
        result = "value1";
        break;
    case LEDTS0_FNCTL_PADT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_PADT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_PADT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_FNCTL_PADT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_FNCTL_PADT::value2;
    }

    return result;
}

}; // namespace XMC4700
