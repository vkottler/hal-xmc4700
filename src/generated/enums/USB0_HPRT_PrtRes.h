/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtRes : uint8_t
{
    no_resume_driven /*!< No resume driven */,
    resume_driven = 1 /*!< Resume driven */
};
static_assert(sizeof(USB0_HPRT_PrtRes) == 1);

/**
 * Converts USB0_HPRT_PrtRes to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtRes instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtRes";

    switch (instance)
    {
    case USB0_HPRT_PrtRes::no_resume_driven:
        result = "no_resume_driven";
        break;
    case USB0_HPRT_PrtRes::resume_driven:
        result = "resume_driven";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtRes.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtRes &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_resume_driven", 16)))
    {
        output = USB0_HPRT_PrtRes::no_resume_driven;
    }
    else if ((result = !strncmp(data, "resume_driven", 13)))
    {
        output = USB0_HPRT_PrtRes::resume_driven;
    }

    return result;
}

}; // namespace XMC4700
