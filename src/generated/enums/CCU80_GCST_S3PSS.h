/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GCST_S3PSS : uint8_t
{
    not_been_requested /*!< Prescaler shadow transfer has not been requested */
        ,
    been_requested = 1 /*!< Prescaler shadow transfer has been requested */
};
static_assert(sizeof(CCU80_GCST_S3PSS) == 1);

/**
 * Converts CCU80_GCST_S3PSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCST_S3PSS instance)
{
    const char *result = "UNKNOWN CCU80_GCST_S3PSS";

    switch (instance)
    {
    case CCU80_GCST_S3PSS::not_been_requested:
        result = "not_been_requested";
        break;
    case CCU80_GCST_S3PSS::been_requested:
        result = "been_requested";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCST_S3PSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCST_S3PSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_been_requested", 18)))
    {
        output = CCU80_GCST_S3PSS::not_been_requested;
    }
    else if ((result = !strncmp(data, "been_requested", 14)))
    {
        output = CCU80_GCST_S3PSS::been_requested;
    }

    return result;
}

}; // namespace XMC4700
