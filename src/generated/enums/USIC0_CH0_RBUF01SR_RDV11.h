/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBUF01SR_RDV11 : uint8_t
{
    does_not_contain_data_has_not_been_read_out /*!< Register RBUF1 does not
                                                   contain data that has not
                                                   yet been read out. */
        ,
    contains_data_has_not_been_read_out =
        1 /*!< Register RBUF1 contains data that has not yet been read out. */
};
static_assert(sizeof(USIC0_CH0_RBUF01SR_RDV11) == 1);

/**
 * Converts USIC0_CH0_RBUF01SR_RDV11 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBUF01SR_RDV11 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBUF01SR_RDV11";

    switch (instance)
    {
    case USIC0_CH0_RBUF01SR_RDV11::does_not_contain_data_has_not_been_read_out:
        result = "does_not_contain_data_has_not_been_read_out";
        break;
    case USIC0_CH0_RBUF01SR_RDV11::contains_data_has_not_been_read_out:
        result = "contains_data_has_not_been_read_out";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBUF01SR_RDV11.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBUF01SR_RDV11 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "does_not_contain_data_has_not_been_read_out",
                           43)))
    {
        output = USIC0_CH0_RBUF01SR_RDV11::
            does_not_contain_data_has_not_been_read_out;
    }
    else if ((result =
                  !strncmp(data, "contains_data_has_not_been_read_out", 35)))
    {
        output = USIC0_CH0_RBUF01SR_RDV11::contains_data_has_not_been_read_out;
    }

    return result;
}

}; // namespace XMC4700
