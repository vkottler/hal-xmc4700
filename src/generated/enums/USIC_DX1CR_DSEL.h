/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_DX1CR_DSEL : uint8_t
{
    value1 /*!< The data input DX1A is selected. */,
    value2 = 1 /*!< The data input DX1B is selected. */,
    value3 = 2 /*!< The data input DX1C is selected. */,
    value4 = 3 /*!< The data input DX1D is selected. */,
    value5 = 4 /*!< The data input DX1E is selected. */,
    value6 = 5 /*!< The data input DX1F is selected. */,
    value7 = 6 /*!< The data input DX1G is selected. */,
    value8 = 7 /*!< The data input is always 1. */
};
static_assert(sizeof(USIC_DX1CR_DSEL) == 1);

static constexpr uint16_t USIC_DX1CR_DSEL_id = 1123;

/**
 * Converts USIC_DX1CR_DSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_DX1CR_DSEL instance)
{
    const char *result = "UNKNOWN USIC_DX1CR_DSEL";

    switch (instance)
    {
    case USIC_DX1CR_DSEL::value1:
        result = "value1";
        break;
    case USIC_DX1CR_DSEL::value2:
        result = "value2";
        break;
    case USIC_DX1CR_DSEL::value3:
        result = "value3";
        break;
    case USIC_DX1CR_DSEL::value4:
        result = "value4";
        break;
    case USIC_DX1CR_DSEL::value5:
        result = "value5";
        break;
    case USIC_DX1CR_DSEL::value6:
        result = "value6";
        break;
    case USIC_DX1CR_DSEL::value7:
        result = "value7";
        break;
    case USIC_DX1CR_DSEL::value8:
        result = "value8";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_DX1CR_DSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_DX1CR_DSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_DX1CR_DSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_DX1CR_DSEL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC_DX1CR_DSEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC_DX1CR_DSEL::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = USIC_DX1CR_DSEL::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = USIC_DX1CR_DSEL::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = USIC_DX1CR_DSEL::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = USIC_DX1CR_DSEL::value8;
    }

    return result;
}

}; // namespace XMC4700