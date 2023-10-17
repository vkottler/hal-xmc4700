/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_MCMF_MSS : uint8_t
{
    set /*!< Update of the Multi-Channel pattern is set */,
    not_set = 1 /*!< Update of the Multi-Channel pattern is not set */
};
static_assert(sizeof(POSIF0_MCMF_MSS) == 1);

/**
 * Converts POSIF0_MCMF_MSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_MCMF_MSS instance)
{
    const char *result = "UNKNOWN POSIF0_MCMF_MSS";

    switch (instance)
    {
    case POSIF0_MCMF_MSS::set:
        result = "set";
        break;
    case POSIF0_MCMF_MSS::not_set:
        result = "not_set";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_MCMF_MSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_MCMF_MSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "set", 3)))
    {
        output = POSIF0_MCMF_MSS::set;
    }
    else if ((result = !strncmp(data, "not_set", 7)))
    {
        output = POSIF0_MCMF_MSS::not_set;
    }

    return result;
}

}; // namespace XMC4700
