/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Ready",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Busy",
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

enum class SCU_GENERAL_MIRRSTS_HDSET : uint8_t
{
    value1 /*!< Ready */,
    value2 = 1 /*!< Busy */
};
static_assert(sizeof(SCU_GENERAL_MIRRSTS_HDSET) == 1);

static constexpr uint16_t SCU_GENERAL_MIRRSTS_HDSET_id = 1280;

/**
 * Converts SCU_GENERAL_MIRRSTS_HDSET to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_GENERAL_MIRRSTS_HDSET instance)
{
    const char *result = "UNKNOWN SCU_GENERAL_MIRRSTS_HDSET";

    switch (instance)
    {
    case SCU_GENERAL_MIRRSTS_HDSET::value1:
        result = "value1";
        break;
    case SCU_GENERAL_MIRRSTS_HDSET::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_GENERAL_MIRRSTS_HDSET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_GENERAL_MIRRSTS_HDSET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_GENERAL_MIRRSTS_HDSET::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_GENERAL_MIRRSTS_HDSET::value2;
    }

    return result;
}

}; // namespace XMC4700