/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Define the module as a 32-bit module.",
 *       "value": 192
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

enum class CAN_ID_MOD_TYPE : uint8_t
{
    value1 = 192 /*!< Define the module as a 32-bit module. */
};
static_assert(sizeof(CAN_ID_MOD_TYPE) == 1);

static constexpr uint16_t CAN_ID_MOD_TYPE_id = 2;

/**
 * Converts CAN_ID_MOD_TYPE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_ID_MOD_TYPE instance)
{
    const char *result = "UNKNOWN CAN_ID_MOD_TYPE";

    switch (instance)
    {
    case CAN_ID_MOD_TYPE::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_ID_MOD_TYPE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_ID_MOD_TYPE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_ID_MOD_TYPE::value1;
    }

    return result;
}

}; // namespace XMC4700
