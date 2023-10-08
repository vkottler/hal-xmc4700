/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Kernel generates its own clock for LEDTS-counter based on SFR setting",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "LEDTS-counter takes its clock from another master kernel",
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

enum class LEDTS0_GLOBCTL_CMTR : uint8_t
{
    value1 /*!< Kernel generates its own clock for LEDTS-counter based on SFR setting */,
    value2 = 1 /*!< LEDTS-counter takes its clock from another master kernel */
};
static_assert(sizeof(LEDTS0_GLOBCTL_CMTR) == 1);

static constexpr uint16_t LEDTS0_GLOBCTL_CMTR_id = 870;

/**
 * Converts LEDTS0_GLOBCTL_CMTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_CMTR instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_CMTR";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_CMTR::value1:
        result = "value1";
        break;
    case LEDTS0_GLOBCTL_CMTR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_CMTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_CMTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_GLOBCTL_CMTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_GLOBCTL_CMTR::value2;
    }

    return result;
}

}; // namespace XMC4700