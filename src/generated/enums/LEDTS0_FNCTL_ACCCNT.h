/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "1 time",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "2 times",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "16 times",
 *       "value": 15
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

enum class LEDTS0_FNCTL_ACCCNT : uint8_t
{
    value1 /*!< 1 time */,
    value2 = 1 /*!< 2 times */,
    value3 = 15 /*!< 16 times */
};
static_assert(sizeof(LEDTS0_FNCTL_ACCCNT) == 1);

static constexpr uint16_t LEDTS0_FNCTL_ACCCNT_id = 878;

/**
 * Converts LEDTS0_FNCTL_ACCCNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_ACCCNT instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_ACCCNT";

    switch (instance)
    {
    case LEDTS0_FNCTL_ACCCNT::value1:
        result = "value1";
        break;
    case LEDTS0_FNCTL_ACCCNT::value2:
        result = "value2";
        break;
    case LEDTS0_FNCTL_ACCCNT::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_ACCCNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_ACCCNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_FNCTL_ACCCNT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_FNCTL_ACCCNT::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = LEDTS0_FNCTL_ACCCNT::value3;
    }

    return result;
}

}; // namespace XMC4700
