/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX3CR_DSEL : uint8_t
{
    value1 /*!< The data input DXnA is selected. */,
    value2 = 1 /*!< The data input DXnB is selected. */,
    value3 = 2 /*!< The data input DXnC is selected. */,
    value4 = 3 /*!< The data input DXnD is selected. */,
    value5 = 4 /*!< The data input DXnE is selected. */,
    value6 = 5 /*!< The data input DXnF is selected. */,
    value7 = 6 /*!< The data input DXnG is selected. */,
    value8 = 7 /*!< The data input is always 1. */
};
static_assert(sizeof(USIC0_CH0_DX3CR_DSEL) == 1);

static constexpr uint16_t USIC0_CH0_DX3CR_DSEL_id = 59;

/**
 * Converts USIC0_CH0_DX3CR_DSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX3CR_DSEL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX3CR_DSEL";

    switch (instance)
    {
    case USIC0_CH0_DX3CR_DSEL::value1:
        result = "value1";
        break;
    case USIC0_CH0_DX3CR_DSEL::value2:
        result = "value2";
        break;
    case USIC0_CH0_DX3CR_DSEL::value3:
        result = "value3";
        break;
    case USIC0_CH0_DX3CR_DSEL::value4:
        result = "value4";
        break;
    case USIC0_CH0_DX3CR_DSEL::value5:
        result = "value5";
        break;
    case USIC0_CH0_DX3CR_DSEL::value6:
        result = "value6";
        break;
    case USIC0_CH0_DX3CR_DSEL::value7:
        result = "value7";
        break;
    case USIC0_CH0_DX3CR_DSEL::value8:
        result = "value8";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX3CR_DSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX3CR_DSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = USIC0_CH0_DX3CR_DSEL::value8;
    }

    return result;
}

}; // namespace XMC4700
