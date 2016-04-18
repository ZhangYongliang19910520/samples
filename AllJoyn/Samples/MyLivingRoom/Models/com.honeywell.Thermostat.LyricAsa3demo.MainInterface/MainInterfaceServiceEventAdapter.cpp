//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace com::honeywell::Thermostat::LyricAsa3demo::MainInterface;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
IAsyncOperation<MainInterfaceSetTemperatureResult^>^ MainInterfaceServiceEventAdapter::SetTemperatureAsync(_In_ AllJoynMessageInfo^ info, _In_ double interfaceMemberTargetTemperatureTemperatureScale, _In_ int16 interfaceMemberInputArg)
{
    auto args = ref new MainInterfaceSetTemperatureCalledEventArgs(info, interfaceMemberTargetTemperatureTemperatureScale, interfaceMemberInputArg);
    SetTemperatureCalled(this, args);
    return MainInterfaceSetTemperatureCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MainInterfaceSetTemperature68Result^>^ MainInterfaceServiceEventAdapter::SetTemperature68Async(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MainInterfaceSetTemperature68CalledEventArgs(info);
    SetTemperature68Called(this, args);
    return MainInterfaceSetTemperature68CalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MainInterfaceSetTemperature70Result^>^ MainInterfaceServiceEventAdapter::SetTemperature70Async(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MainInterfaceSetTemperature70CalledEventArgs(info);
    SetTemperature70Called(this, args);
    return MainInterfaceSetTemperature70CalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MainInterfaceSetTemperature72Result^>^ MainInterfaceServiceEventAdapter::SetTemperature72Async(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MainInterfaceSetTemperature72CalledEventArgs(info);
    SetTemperature72Called(this, args);
    return MainInterfaceSetTemperature72CalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MainInterfaceSetTemperature74Result^>^ MainInterfaceServiceEventAdapter::SetTemperature74Async(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MainInterfaceSetTemperature74CalledEventArgs(info);
    SetTemperature74Called(this, args);
    return MainInterfaceSetTemperature74CalledEventArgs::GetResultAsync(args);
}

// Property Reads
// Property Writes