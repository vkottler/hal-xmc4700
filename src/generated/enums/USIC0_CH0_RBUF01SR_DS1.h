/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBUF01SR_DS1 : uint8_t
{
    _0_same_associated_status_information /*!< The register RBUF contains the
                                             data of RBUF0 (same for associated
                                             status information). */
        ,
    _1_same_associated_status_information =
        1 /*!< The register RBUF contains the data of RBUF1 (same for
             associated status information). */
};
static_assert(sizeof(USIC0_CH0_RBUF01SR_DS1) == 1);

/**
 * Converts USIC0_CH0_RBUF01SR_DS1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBUF01SR_DS1 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBUF01SR_DS1";

    switch (instance)
    {
    case USIC0_CH0_RBUF01SR_DS1::_0_same_associated_status_information:
        result = "_0_same_associated_status_information";
        break;
    case USIC0_CH0_RBUF01SR_DS1::_1_same_associated_status_information:
        result = "_1_same_associated_status_information";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBUF01SR_DS1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBUF01SR_DS1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_same_associated_status_information", 37)))
    {
        output = USIC0_CH0_RBUF01SR_DS1::_0_same_associated_status_information;
    }
    else if ((result =
                  !strncmp(data, "_1_same_associated_status_information", 37)))
    {
        output = USIC0_CH0_RBUF01SR_DS1::_1_same_associated_status_information;
    }

    return result;
}

}; // namespace XMC4700
