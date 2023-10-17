/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_SDRMCON_AWIDTH : uint8_t
{
    do_not_use /*!< do not use */,
    address80 = 1 /*!< Address(8:0) */,
    address90 = 2 /*!< Address(9:0) */,
    address100 = 3 /*!< Address(10:0) */
};
static_assert(sizeof(EBU_SDRMCON_AWIDTH) == 1);

/**
 * Converts EBU_SDRMCON_AWIDTH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMCON_AWIDTH instance)
{
    const char *result = "UNKNOWN EBU_SDRMCON_AWIDTH";

    switch (instance)
    {
    case EBU_SDRMCON_AWIDTH::do_not_use:
        result = "do_not_use";
        break;
    case EBU_SDRMCON_AWIDTH::address80:
        result = "address80";
        break;
    case EBU_SDRMCON_AWIDTH::address90:
        result = "address90";
        break;
    case EBU_SDRMCON_AWIDTH::address100:
        result = "address100";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMCON_AWIDTH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMCON_AWIDTH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "do_not_use", 10)))
    {
        output = EBU_SDRMCON_AWIDTH::do_not_use;
    }
    else if ((result = !strncmp(data, "address80", 9)))
    {
        output = EBU_SDRMCON_AWIDTH::address80;
    }
    else if ((result = !strncmp(data, "address90", 9)))
    {
        output = EBU_SDRMCON_AWIDTH::address90;
    }
    else if ((result = !strncmp(data, "address100", 10)))
    {
        output = EBU_SDRMCON_AWIDTH::address100;
    }

    return result;
}

}; // namespace XMC4700
