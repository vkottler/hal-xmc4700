/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP3_AHOLDC : uint8_t
{
    value1 /*!< 0 clock cycle selected */,
    value2 = 1 /*!< 1 clock cycle selected */,
    value3 = 14 /*!< 14 clock cycles selected */,
    value4 = 15 /*!< 15 clock cycles selected */
};
static_assert(sizeof(EBU_BUSRAP3_AHOLDC) == 1);

static constexpr uint16_t EBU_BUSRAP3_AHOLDC_id = 415;

/**
 * Converts EBU_BUSRAP3_AHOLDC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP3_AHOLDC instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP3_AHOLDC";

    switch (instance)
    {
    case EBU_BUSRAP3_AHOLDC::value1:
        result = "value1";
        break;
    case EBU_BUSRAP3_AHOLDC::value2:
        result = "value2";
        break;
    case EBU_BUSRAP3_AHOLDC::value3:
        result = "value3";
        break;
    case EBU_BUSRAP3_AHOLDC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP3_AHOLDC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP3_AHOLDC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRAP3_AHOLDC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRAP3_AHOLDC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRAP3_AHOLDC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRAP3_AHOLDC::value4;
    }

    return result;
}

}; // namespace XMC4700
