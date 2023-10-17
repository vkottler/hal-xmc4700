/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH0_CFGL_HS_SEL_SRC : uint8_t
{
    hardware_handshaking_interface_software_initi_cont /*!< Hardware
                                                          handshaking
                                                          interface.
                                                          Software-initiated
                                                          transaction requests
                                                          are ignored. */
        ,
    software_handshaking_interface_hardware_initi_cont =
        1 /*!< Software handshaking interface. Hardware-initiated transaction
             requests are ignored. */
};
static_assert(sizeof(GPDMA0_CH0_CFGL_HS_SEL_SRC) == 1);

/**
 * Converts GPDMA0_CH0_CFGL_HS_SEL_SRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CFGL_HS_SEL_SRC instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CFGL_HS_SEL_SRC";

    switch (instance)
    {
    case GPDMA0_CH0_CFGL_HS_SEL_SRC::
        hardware_handshaking_interface_software_initi_cont:
        result = "hardware_handshaking_interface_software_initi_cont";
        break;
    case GPDMA0_CH0_CFGL_HS_SEL_SRC::
        software_handshaking_interface_hardware_initi_cont:
        result = "software_handshaking_interface_hardware_initi_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CFGL_HS_SEL_SRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CFGL_HS_SEL_SRC &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "hardware_handshaking_interface_software_initi_cont", 50)))
    {
        output = GPDMA0_CH0_CFGL_HS_SEL_SRC::
            hardware_handshaking_interface_software_initi_cont;
    }
    else if ((result = !strncmp(
                  data, "software_handshaking_interface_hardware_initi_cont",
                  50)))
    {
        output = GPDMA0_CH0_CFGL_HS_SEL_SRC::
            software_handshaking_interface_hardware_initi_cont;
    }

    return result;
}

}; // namespace XMC4700
