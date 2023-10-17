/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_CLC_DISR : uint8_t
{
    not_requested /*!< EBU disable is not requested */,
    requested = 1 /*!< EBU disable is requested */
};
static_assert(sizeof(EBU_CLC_DISR) == 1);

/**
 * Converts EBU_CLC_DISR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_DISR instance)
{
    const char *result = "UNKNOWN EBU_CLC_DISR";

    switch (instance)
    {
    case EBU_CLC_DISR::not_requested:
        result = "not_requested";
        break;
    case EBU_CLC_DISR::requested:
        result = "requested";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_DISR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_DISR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_requested", 13)))
    {
        output = EBU_CLC_DISR::not_requested;
    }
    else if ((result = !strncmp(data, "requested", 9)))
    {
        output = EBU_CLC_DISR::requested;
    }

    return result;
}

}; // namespace XMC4700
