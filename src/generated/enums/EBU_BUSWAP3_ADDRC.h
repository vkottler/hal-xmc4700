/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSWAP3_ADDRC : uint8_t
{
    value1 /*!< 1 clock cycle selected */,
    value2 = 1 /*!< 1 clock cycle selected */,
    value3 = 14 /*!< 14 clock cycles selected */,
    value4 = 15 /*!< 15 clock cycles selected */
};
static_assert(sizeof(EBU_BUSWAP3_ADDRC) == 1);

/**
 * Converts EBU_BUSWAP3_ADDRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWAP3_ADDRC instance)
{
    const char *result = "UNKNOWN EBU_BUSWAP3_ADDRC";

    switch (instance)
    {
    case EBU_BUSWAP3_ADDRC::value1:
        result = "value1";
        break;
    case EBU_BUSWAP3_ADDRC::value2:
        result = "value2";
        break;
    case EBU_BUSWAP3_ADDRC::value3:
        result = "value3";
        break;
    case EBU_BUSWAP3_ADDRC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWAP3_ADDRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWAP3_ADDRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWAP3_ADDRC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWAP3_ADDRC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSWAP3_ADDRC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSWAP3_ADDRC::value4;
    }

    return result;
}

}; // namespace XMC4700
