/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA1_LSTSRCREG_CH3 : uint8_t
{
    not_last_transaction_current_block /*!< Not last transaction in current
                                          block */
        ,
    last_transaction_current_block =
        1 /*!< Last transaction in current block */
};
static_assert(sizeof(GPDMA1_LSTSRCREG_CH3) == 1);

/**
 * Converts GPDMA1_LSTSRCREG_CH3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_LSTSRCREG_CH3 instance)
{
    const char *result = "UNKNOWN GPDMA1_LSTSRCREG_CH3";

    switch (instance)
    {
    case GPDMA1_LSTSRCREG_CH3::not_last_transaction_current_block:
        result = "not_last_transaction_current_block";
        break;
    case GPDMA1_LSTSRCREG_CH3::last_transaction_current_block:
        result = "last_transaction_current_block";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_LSTSRCREG_CH3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_LSTSRCREG_CH3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_last_transaction_current_block", 34)))
    {
        output = GPDMA1_LSTSRCREG_CH3::not_last_transaction_current_block;
    }
    else if ((result = !strncmp(data, "last_transaction_current_block", 30)))
    {
        output = GPDMA1_LSTSRCREG_CH3::last_transaction_current_block;
    }

    return result;
}

}; // namespace XMC4700
