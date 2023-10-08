/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No action.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Bit TSF is cleared.",
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

enum class LEDTS0_EVFR_CTSF : uint8_t
{
    value1 /*!< No action. */,
    value2 = 1 /*!< Bit TSF is cleared. */
};
static_assert(sizeof(LEDTS0_EVFR_CTSF) == 1);

static constexpr uint16_t LEDTS0_EVFR_CTSF_id = 884;

/**
 * Converts LEDTS0_EVFR_CTSF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_EVFR_CTSF instance)
{
    const char *result = "UNKNOWN LEDTS0_EVFR_CTSF";

    switch (instance)
    {
    case LEDTS0_EVFR_CTSF::value1:
        result = "value1";
        break;
    case LEDTS0_EVFR_CTSF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_EVFR_CTSF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_EVFR_CTSF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_EVFR_CTSF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_EVFR_CTSF::value2;
    }

    return result;
}

}; // namespace XMC4700