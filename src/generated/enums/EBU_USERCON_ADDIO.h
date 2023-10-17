/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_USERCON_ADDIO : uint16_t
{
    required_addressing_memory /*!< Address Bit is required for addressing
                                  memory */
        ,
    available_gpio_function =
        1 /*!< Address Bit is available for GPIO function */
};
static_assert(sizeof(EBU_USERCON_ADDIO) == 2);

/**
 * Converts EBU_USERCON_ADDIO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_USERCON_ADDIO instance)
{
    const char *result = "UNKNOWN EBU_USERCON_ADDIO";

    switch (instance)
    {
    case EBU_USERCON_ADDIO::required_addressing_memory:
        result = "required_addressing_memory";
        break;
    case EBU_USERCON_ADDIO::available_gpio_function:
        result = "available_gpio_function";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_USERCON_ADDIO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_USERCON_ADDIO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "required_addressing_memory", 26)))
    {
        output = EBU_USERCON_ADDIO::required_addressing_memory;
    }
    else if ((result = !strncmp(data, "available_gpio_function", 23)))
    {
        output = EBU_USERCON_ADDIO::available_gpio_function;
    }

    return result;
}

}; // namespace XMC4700
