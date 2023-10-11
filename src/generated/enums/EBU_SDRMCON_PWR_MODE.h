/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_SDRMCON_PWR_MODE : uint8_t
{
    value1 /*!< precharge before clock stop (default after reset) */,
    value2 = 1 /*!< auto-precharge before clock stop */,
    value3 = 2 /*!< active power down (stop clock without precharge) */,
    value4 = 3 /*!< clock stop power down */
};
static_assert(sizeof(EBU_SDRMCON_PWR_MODE) == 1);

static constexpr uint16_t EBU_SDRMCON_PWR_MODE_id = 559;

/**
 * Converts EBU_SDRMCON_PWR_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMCON_PWR_MODE instance)
{
    const char *result = "UNKNOWN EBU_SDRMCON_PWR_MODE";

    switch (instance)
    {
    case EBU_SDRMCON_PWR_MODE::value1:
        result = "value1";
        break;
    case EBU_SDRMCON_PWR_MODE::value2:
        result = "value2";
        break;
    case EBU_SDRMCON_PWR_MODE::value3:
        result = "value3";
        break;
    case EBU_SDRMCON_PWR_MODE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMCON_PWR_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMCON_PWR_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRMCON_PWR_MODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_SDRMCON_PWR_MODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_SDRMCON_PWR_MODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_SDRMCON_PWR_MODE::value4;
    }

    return result;
}

}; // namespace XMC4700
