/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSWAP2_WRRECOVC : uint8_t
{
    value1 /*!< No Recovery Phase clock cycles available. */,
    value2 = 1 /*!< 1 clock cycle selected. */,
    value3 = 6 /*!< 6 clock cycles selected. */,
    value4 = 7 /*!< 7 clock cycles selected. */
};
static_assert(sizeof(EBU_BUSWAP2_WRRECOVC) == 1);

static constexpr uint16_t EBU_BUSWAP2_WRRECOVC_id = 505;

/**
 * Converts EBU_BUSWAP2_WRRECOVC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWAP2_WRRECOVC instance)
{
    const char *result = "UNKNOWN EBU_BUSWAP2_WRRECOVC";

    switch (instance)
    {
    case EBU_BUSWAP2_WRRECOVC::value1:
        result = "value1";
        break;
    case EBU_BUSWAP2_WRRECOVC::value2:
        result = "value2";
        break;
    case EBU_BUSWAP2_WRRECOVC::value3:
        result = "value3";
        break;
    case EBU_BUSWAP2_WRRECOVC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWAP2_WRRECOVC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWAP2_WRRECOVC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWAP2_WRRECOVC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWAP2_WRRECOVC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSWAP2_WRRECOVC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSWAP2_WRRECOVC::value4;
    }

    return result;
}

}; // namespace XMC4700
