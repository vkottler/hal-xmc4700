/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_ID_MOD_TYPE : uint8_t
{
    define_module_32_bit_module =
        192 /*!< Define the module as a 32-bit module. */
};
static_assert(sizeof(CAN_ID_MOD_TYPE) == 1);

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
    case CAN_ID_MOD_TYPE::define_module_32_bit_module:
        result = "define_module_32_bit_module";
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

    if ((result = !strncmp(data, "define_module_32_bit_module", 27)))
    {
        output = CAN_ID_MOD_TYPE::define_module_32_bit_module;
    }

    return result;
}

}; // namespace XMC4700
