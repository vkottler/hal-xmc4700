/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA1_CH0_CFGL_HS_SEL_DST : uint8_t
{
    hardware_handshaking_interface_software_initi_cont /*!< Hardware
                                                          handshaking
                                                          interface.
                                                          Software-initiated
                                                          transaction requests
                                                          are ignored. */
        ,
    software_handshaking_interface_hardware__init_cont =
        1 /*!< Software handshaking interface. Hardware- initiated transaction
             requests are ignored. */
};
static_assert(sizeof(GPDMA1_CH0_CFGL_HS_SEL_DST) == 1);

/**
 * Converts GPDMA1_CH0_CFGL_HS_SEL_DST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CH0_CFGL_HS_SEL_DST instance)
{
    const char *result = "UNKNOWN GPDMA1_CH0_CFGL_HS_SEL_DST";

    switch (instance)
    {
    case GPDMA1_CH0_CFGL_HS_SEL_DST::
        hardware_handshaking_interface_software_initi_cont:
        result = "hardware_handshaking_interface_software_initi_cont";
        break;
    case GPDMA1_CH0_CFGL_HS_SEL_DST::
        software_handshaking_interface_hardware__init_cont:
        result = "software_handshaking_interface_hardware__init_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CH0_CFGL_HS_SEL_DST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CH0_CFGL_HS_SEL_DST &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "hardware_handshaking_interface_software_initi_cont", 50)))
    {
        output = GPDMA1_CH0_CFGL_HS_SEL_DST::
            hardware_handshaking_interface_software_initi_cont;
    }
    else if ((result = !strncmp(
                  data, "software_handshaking_interface_hardware__init_cont",
                  50)))
    {
        output = GPDMA1_CH0_CFGL_HS_SEL_DST::
            software_handshaking_interface_hardware__init_cont;
    }

    return result;
}

}; // namespace XMC4700
