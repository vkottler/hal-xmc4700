/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP3_RDDTACS : uint8_t
{
    value1 /*!< No Recovery Phase clock cycles available. */,
    value2 = 1 /*!< 1 clock cycle selected. */,
    value3 = 14 /*!< 14 clock cycles selected. */,
    value4 = 15 /*!< 15 clock cycles selected. */
};
static_assert(sizeof(EBU_BUSRAP3_RDDTACS) == 1);

static constexpr uint16_t EBU_BUSRAP3_RDDTACS_id = 525;

/**
 * Converts EBU_BUSRAP3_RDDTACS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP3_RDDTACS instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP3_RDDTACS";

    switch (instance)
    {
    case EBU_BUSRAP3_RDDTACS::value1:
        result = "value1";
        break;
    case EBU_BUSRAP3_RDDTACS::value2:
        result = "value2";
        break;
    case EBU_BUSRAP3_RDDTACS::value3:
        result = "value3";
        break;
    case EBU_BUSRAP3_RDDTACS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP3_RDDTACS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP3_RDDTACS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRAP3_RDDTACS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRAP3_RDDTACS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRAP3_RDDTACS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRAP3_RDDTACS::value4;
    }

    return result;
}

}; // namespace XMC4700
