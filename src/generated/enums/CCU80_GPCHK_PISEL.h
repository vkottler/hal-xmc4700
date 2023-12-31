/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GPCHK_PISEL : uint8_t
{
    _01_driver_output_connected_event_1_slice_0 /*!< CC8x.GP01 - driver output
                                                   is connected to event 1 of
                                                   slice 0 */
        ,
    _11_drive_output_connected_event_1_slice_1 =
        1 /*!< CC8x.GP11 - drive output is connected to event 1 of slice 1 */,
    _21_driver_output_connected_event_1_slice_2 =
        2 /*!< CC8x.GP21 - driver output is connected to event 1 of slice 2 */,
    _31_driver_output_connected_event_1_slice_3 =
        3 /*!< CC8x.GP31 - driver output is connected to event 1 of slice 3 */
};
static_assert(sizeof(CCU80_GPCHK_PISEL) == 1);

/**
 * Converts CCU80_GPCHK_PISEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GPCHK_PISEL instance)
{
    const char *result = "UNKNOWN CCU80_GPCHK_PISEL";

    switch (instance)
    {
    case CCU80_GPCHK_PISEL::_01_driver_output_connected_event_1_slice_0:
        result = "_01_driver_output_connected_event_1_slice_0";
        break;
    case CCU80_GPCHK_PISEL::_11_drive_output_connected_event_1_slice_1:
        result = "_11_drive_output_connected_event_1_slice_1";
        break;
    case CCU80_GPCHK_PISEL::_21_driver_output_connected_event_1_slice_2:
        result = "_21_driver_output_connected_event_1_slice_2";
        break;
    case CCU80_GPCHK_PISEL::_31_driver_output_connected_event_1_slice_3:
        result = "_31_driver_output_connected_event_1_slice_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GPCHK_PISEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GPCHK_PISEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_01_driver_output_connected_event_1_slice_0",
                           43)))
    {
        output =
            CCU80_GPCHK_PISEL::_01_driver_output_connected_event_1_slice_0;
    }
    else if ((result = !strncmp(
                  data, "_11_drive_output_connected_event_1_slice_1", 42)))
    {
        output = CCU80_GPCHK_PISEL::_11_drive_output_connected_event_1_slice_1;
    }
    else if ((result = !strncmp(
                  data, "_21_driver_output_connected_event_1_slice_2", 43)))
    {
        output =
            CCU80_GPCHK_PISEL::_21_driver_output_connected_event_1_slice_2;
    }
    else if ((result = !strncmp(
                  data, "_31_driver_output_connected_event_1_slice_3", 43)))
    {
        output =
            CCU80_GPCHK_PISEL::_31_driver_output_connected_event_1_slice_3;
    }

    return result;
}

}; // namespace XMC4700
