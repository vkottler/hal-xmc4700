/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Two stages of synchronization used. (maximum margin)",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "One stage of synchronization used. (minimum latency)",
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

enum class EBU_BUSRCON3_BFSSS : uint8_t
{
    value1 /*!< Two stages of synchronization used. (maximum margin) */,
    value2 = 1 /*!< One stage of synchronization used. (minimum latency) */
};
static_assert(sizeof(EBU_BUSRCON3_BFSSS) == 1);

static constexpr uint16_t EBU_BUSRCON3_BFSSS_id = 515;

/**
 * Converts EBU_BUSRCON3_BFSSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON3_BFSSS instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON3_BFSSS";

    switch (instance)
    {
    case EBU_BUSRCON3_BFSSS::value1:
        result = "value1";
        break;
    case EBU_BUSRCON3_BFSSS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON3_BFSSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON3_BFSSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON3_BFSSS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON3_BFSSS::value2;
    }

    return result;
}

}; // namespace XMC4700