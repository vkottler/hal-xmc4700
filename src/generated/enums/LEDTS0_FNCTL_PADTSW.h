/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The hardware automatically enables the touch-sense inputs in sequence round-robin, starting from TSIN0.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Disable hardware control for software control only. The touch-sense input is configured in bit PADT.",
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

enum class LEDTS0_FNCTL_PADTSW : uint8_t
{
    value1 /*!< The hardware automatically enables the touch-sense inputs in sequence round-robin, starting from TSIN0. */,
    value2 = 1 /*!< Disable hardware control for software control only. The touch-sense input is configured in bit PADT. */
};
static_assert(sizeof(LEDTS0_FNCTL_PADTSW) == 1);

static constexpr uint16_t LEDTS0_FNCTL_PADTSW_id = 880;

/**
 * Converts LEDTS0_FNCTL_PADTSW to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_PADTSW instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_PADTSW";

    switch (instance)
    {
    case LEDTS0_FNCTL_PADTSW::value1:
        result = "value1";
        break;
    case LEDTS0_FNCTL_PADTSW::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_PADTSW.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_PADTSW &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_FNCTL_PADTSW::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_FNCTL_PADTSW::value2;
    }

    return result;
}

}; // namespace XMC4700