/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_MSGLST : uint8_t
{
    value1 /*!< No CAN message is lost. */,
    value2 = 1 /*!< A CAN message is lost because NEWDAT has become set again
                  when it has already been set. */
};
static_assert(sizeof(CAN_MO_MOSTAT_MSGLST) == 1);

static constexpr uint16_t CAN_MO_MOSTAT_MSGLST_id = 2130;

/**
 * Converts CAN_MO_MOSTAT_MSGLST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_MSGLST instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_MSGLST";

    switch (instance)
    {
    case CAN_MO_MOSTAT_MSGLST::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_MSGLST::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_MSGLST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_MSGLST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_MSGLST::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_MSGLST::value2;
    }

    return result;
}

}; // namespace XMC4700
