/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBCTR_ARBINP : uint8_t
{
    value1 /*!< Output SR0 becomes activated. */,
    value2 = 1 /*!< Output SR1 becomes activated. */,
    value3 = 2 /*!< Output SR2 becomes activated. */,
    value4 = 3 /*!< Output SR3 becomes activated. */,
    value5 = 4 /*!< Output SR4 becomes activated. */,
    value6 = 5 /*!< Output SR5 becomes activated. */
};
static_assert(sizeof(USIC0_CH0_RBCTR_ARBINP) == 1);

/**
 * Converts USIC0_CH0_RBCTR_ARBINP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBCTR_ARBINP instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBCTR_ARBINP";

    switch (instance)
    {
    case USIC0_CH0_RBCTR_ARBINP::value1:
        result = "value1";
        break;
    case USIC0_CH0_RBCTR_ARBINP::value2:
        result = "value2";
        break;
    case USIC0_CH0_RBCTR_ARBINP::value3:
        result = "value3";
        break;
    case USIC0_CH0_RBCTR_ARBINP::value4:
        result = "value4";
        break;
    case USIC0_CH0_RBCTR_ARBINP::value5:
        result = "value5";
        break;
    case USIC0_CH0_RBCTR_ARBINP::value6:
        result = "value6";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBCTR_ARBINP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBCTR_ARBINP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_RBCTR_ARBINP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_RBCTR_ARBINP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_RBCTR_ARBINP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_RBCTR_ARBINP::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = USIC0_CH0_RBCTR_ARBINP::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = USIC0_CH0_RBCTR_ARBINP::value6;
    }

    return result;
}

}; // namespace XMC4700
