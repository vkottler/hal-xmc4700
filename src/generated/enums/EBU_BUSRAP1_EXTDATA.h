/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP1_EXTDATA : uint8_t
{
    value1 /*!< external memory outputs data every BFCLK cycle */,
    value2 = 1 /*!< external memory outputs data every two BFCLK cycles */,
    value3 = 2 /*!< external memory outputs data every four BFCLK cycles */,
    value4 = 3 /*!< external memory outputs data every eight BFCLK cycles */
};
static_assert(sizeof(EBU_BUSRAP1_EXTDATA) == 1);

static constexpr uint16_t EBU_BUSRAP1_EXTDATA_id = 345;

/**
 * Converts EBU_BUSRAP1_EXTDATA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP1_EXTDATA instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP1_EXTDATA";

    switch (instance)
    {
    case EBU_BUSRAP1_EXTDATA::value1:
        result = "value1";
        break;
    case EBU_BUSRAP1_EXTDATA::value2:
        result = "value2";
        break;
    case EBU_BUSRAP1_EXTDATA::value3:
        result = "value3";
        break;
    case EBU_BUSRAP1_EXTDATA::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP1_EXTDATA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP1_EXTDATA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRAP1_EXTDATA::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRAP1_EXTDATA::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRAP1_EXTDATA::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRAP1_EXTDATA::value4;
    }

    return result;
}

}; // namespace XMC4700
