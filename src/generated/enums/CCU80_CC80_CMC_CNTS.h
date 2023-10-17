/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_CMC_CNTS : uint8_t
{
    deactivated /*!< External Count Function deactivated */,
    triggered_by_event_0 =
        1 /*!< External Count Function triggered by Event 0 */,
    triggered_by_event_1 =
        2 /*!< External Count Function triggered by Event 1 */,
    triggered_by_event_2 =
        3 /*!< External Count Function triggered by Event 2 */
};
static_assert(sizeof(CCU80_CC80_CMC_CNTS) == 1);

/**
 * Converts CCU80_CC80_CMC_CNTS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_CMC_CNTS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_CMC_CNTS";

    switch (instance)
    {
    case CCU80_CC80_CMC_CNTS::deactivated:
        result = "deactivated";
        break;
    case CCU80_CC80_CMC_CNTS::triggered_by_event_0:
        result = "triggered_by_event_0";
        break;
    case CCU80_CC80_CMC_CNTS::triggered_by_event_1:
        result = "triggered_by_event_1";
        break;
    case CCU80_CC80_CMC_CNTS::triggered_by_event_2:
        result = "triggered_by_event_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_CMC_CNTS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_CMC_CNTS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "deactivated", 11)))
    {
        output = CCU80_CC80_CMC_CNTS::deactivated;
    }
    else if ((result = !strncmp(data, "triggered_by_event_0", 20)))
    {
        output = CCU80_CC80_CMC_CNTS::triggered_by_event_0;
    }
    else if ((result = !strncmp(data, "triggered_by_event_1", 20)))
    {
        output = CCU80_CC80_CMC_CNTS::triggered_by_event_1;
    }
    else if ((result = !strncmp(data, "triggered_by_event_2", 20)))
    {
        output = CCU80_CC80_CMC_CNTS::triggered_by_event_2;
    }

    return result;
}

}; // namespace XMC4700
