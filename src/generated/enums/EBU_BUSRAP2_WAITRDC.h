/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP2_WAITRDC : uint8_t
{
    value1 /*!< 1 wait state. */,
    value2 = 1 /*!< 1 wait states. */,
    value3 = 2 /*!< 2 wait state. */,
    value4 = 30 /*!< 30 wait states. */,
    value5 = 31 /*!< 31 wait states. */
};
static_assert(sizeof(EBU_BUSRAP2_WAITRDC) == 1);

static constexpr uint16_t EBU_BUSRAP2_WAITRDC_id = 499;

/**
 * Converts EBU_BUSRAP2_WAITRDC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP2_WAITRDC instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP2_WAITRDC";

    switch (instance)
    {
    case EBU_BUSRAP2_WAITRDC::value1:
        result = "value1";
        break;
    case EBU_BUSRAP2_WAITRDC::value2:
        result = "value2";
        break;
    case EBU_BUSRAP2_WAITRDC::value3:
        result = "value3";
        break;
    case EBU_BUSRAP2_WAITRDC::value4:
        result = "value4";
        break;
    case EBU_BUSRAP2_WAITRDC::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP2_WAITRDC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP2_WAITRDC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRAP2_WAITRDC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRAP2_WAITRDC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRAP2_WAITRDC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRAP2_WAITRDC::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = EBU_BUSRAP2_WAITRDC::value5;
    }

    return result;
}

}; // namespace XMC4700
