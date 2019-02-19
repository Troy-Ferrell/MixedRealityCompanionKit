﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

#include "winrt/base.h"


static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180821.2"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/RealtimeStreaming.Network.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/RealtimeStreaming.Plugin.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/RealtimeStreaming.Media.2.h"

namespace winrt::impl {

template <typename D> winrt::event_token consume_RealtimeStreaming_Media_INetworkMediaSink<D>::Closed(Windows::Foundation::EventHandler<bool> const& handler) const
{
    winrt::event_token token{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSink)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> typename consume_RealtimeStreaming_Media_INetworkMediaSink<D>::Closed_revoker consume_RealtimeStreaming_Media_INetworkMediaSink<D>::Closed(auto_revoke_t, Windows::Foundation::EventHandler<bool> const& handler) const
{
    return impl::make_event_revoker<D, Closed_revoker>(this, Closed(handler));
}

template <typename D> void consume_RealtimeStreaming_Media_INetworkMediaSink<D>::Closed(winrt::event_token const& token) const noexcept
{
    WINRT_VERIFY_(0, WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSink)->remove_Closed(get_abi(token)));
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSink<D>::OnEndOfStream(uint32_t streamId) const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSink)->OnEndOfStream(streamId, put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSink<D>::HandleError(winrt::hresult const& hr) const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSink)->HandleError(get_abi(hr), put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSink<D>::CheckShutdown() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSink)->CheckShutdown(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSink<D>::SendDescription() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSink)->SendDescription(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSinkStream<D>::Start(int64_t start) const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSinkStream)->Start(start, put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSinkStream<D>::Restart() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSinkStream)->Restart(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSinkStream<D>::Stop() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSinkStream)->Stop(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSinkStream<D>::Pause() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSinkStream)->Pause(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_INetworkMediaSinkStream<D>::Shutdown() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::INetworkMediaSinkStream)->Shutdown(put_abi(result)));
    return result;
}

template <typename D> RealtimeStreaming::Network::Connection consume_RealtimeStreaming_Media_IRTSchemeHandler<D>::DataConnection() const
{
    RealtimeStreaming::Network::Connection value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRTSchemeHandler)->get_DataConnection(put_abi(value)));
    return value;
}

template <typename D> void consume_RealtimeStreaming_Media_IRTSchemeHandler<D>::DataConnection(RealtimeStreaming::Network::Connection const& value) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRTSchemeHandler)->put_DataConnection(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::VideoEncodingProperties> consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::InitAsync(RealtimeStreaming::Network::Connection const& connection) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::VideoEncodingProperties> operation{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaPlayer)->InitAsync(get_abi(connection), put_abi(operation)));
    return operation;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Play() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaPlayer)->Play(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Pause() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaPlayer)->Pause(put_abi(result)));
    return result;
}

template <typename D> winrt::hresult consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Stop() const
{
    winrt::hresult result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaPlayer)->Stop(put_abi(result)));
    return result;
}

template <typename D> winrt::event_token consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Closed(Windows::Foundation::EventHandler<RealtimeStreaming::Media::RealtimeMediaPlayer> const& handler) const
{
    winrt::event_token token{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaPlayer)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> typename consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Closed_revoker consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Closed(auto_revoke_t, Windows::Foundation::EventHandler<RealtimeStreaming::Media::RealtimeMediaPlayer> const& handler) const
{
    return impl::make_event_revoker<D, Closed_revoker>(this, Closed(handler));
}

template <typename D> void consume_RealtimeStreaming_Media_IRealtimeMediaPlayer<D>::Closed(winrt::event_token const& token) const noexcept
{
    WINRT_VERIFY_(0, WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaPlayer)->remove_Closed(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_RealtimeStreaming_Media_IRealtimeMediaSource<D>::InitAsync(RealtimeStreaming::Network::Connection const& connection) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaSource)->InitAsync(get_abi(connection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_RealtimeStreaming_Media_IRealtimeMediaSource<D>::MediaStreamSource() const
{
    Windows::Media::Core::MediaStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaSource)->get_MediaStreamSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_RealtimeStreaming_Media_IRealtimeMediaSource<D>::VideoProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeMediaSource)->get_VideoProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_RealtimeStreaming_Media_IRealtimeServer<D>::WriteFrame(uint32_t bufferSize, array_view<uint8_t const> pBuffer) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeServer)->WriteFrame(bufferSize, pBuffer.size(), get_abi(pBuffer)));
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_RealtimeStreaming_Media_IRealtimeServer<D>::VideoProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeServer)->get_VideoProperties(put_abi(value)));
    return value;
}

template <typename D> RealtimeStreaming::Media::RealtimeServer consume_RealtimeStreaming_Media_IRealtimeServerFactory<D>::CreateInstance(RealtimeStreaming::Network::Connection const& connection, winrt::guid const& inputMediaType, Windows::Media::MediaProperties::MediaEncodingProfile const& mediaEncodingProperties) const
{
    RealtimeStreaming::Media::RealtimeServer value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Media::IRealtimeServerFactory)->CreateInstance(get_abi(connection), get_abi(inputMediaType), get_abi(mediaEncodingProperties), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, RealtimeStreaming::Media::INetworkMediaSink> : produce_base<D, RealtimeStreaming::Media::INetworkMediaSink>
{
    int32_t WINRT_CALL add_Closed(void* handler, winrt::event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Closed, WINRT_WRAP(winrt::event_token), Windows::Foundation::EventHandler<bool> const&);
            *token = detach_from<winrt::event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::EventHandler<bool> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL remove_Closed(winrt::event_token token) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        WINRT_ASSERT_DECLARATION(Closed, WINRT_WRAP(void), winrt::event_token const&);
        this->shim().Closed(*reinterpret_cast<winrt::event_token const*>(&token));
        return 0;
    }

    int32_t WINRT_CALL OnEndOfStream(uint32_t streamId, winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(OnEndOfStream, WINRT_WRAP(winrt::hresult), uint32_t);
            *result = detach_from<winrt::hresult>(this->shim().OnEndOfStream(streamId));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL HandleError(winrt::hresult hr, winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HandleError, WINRT_WRAP(winrt::hresult), winrt::hresult const&);
            *result = detach_from<winrt::hresult>(this->shim().HandleError(*reinterpret_cast<winrt::hresult const*>(&hr)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CheckShutdown(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CheckShutdown, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().CheckShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL SendDescription(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SendDescription, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().SendDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Media::INetworkMediaSinkStream> : produce_base<D, RealtimeStreaming::Media::INetworkMediaSinkStream>
{
    int32_t WINRT_CALL Start(int64_t start, winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Start, WINRT_WRAP(winrt::hresult), int64_t);
            *result = detach_from<winrt::hresult>(this->shim().Start(start));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Restart(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Restart, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Restart());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Stop(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Stop, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Stop());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Pause(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Pause, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Pause());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Shutdown(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Shutdown, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Shutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Media::IRTSchemeHandler> : produce_base<D, RealtimeStreaming::Media::IRTSchemeHandler>
{
    int32_t WINRT_CALL get_DataConnection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DataConnection, WINRT_WRAP(RealtimeStreaming::Network::Connection));
            *value = detach_from<RealtimeStreaming::Network::Connection>(this->shim().DataConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_DataConnection(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DataConnection, WINRT_WRAP(void), RealtimeStreaming::Network::Connection const&);
            this->shim().DataConnection(*reinterpret_cast<RealtimeStreaming::Network::Connection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Media::IRealtimeMediaPlayer> : produce_base<D, RealtimeStreaming::Media::IRealtimeMediaPlayer>
{
    int32_t WINRT_CALL InitAsync(void* connection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InitAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::VideoEncodingProperties>), RealtimeStreaming::Network::Connection const);
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::VideoEncodingProperties>>(this->shim().InitAsync(*reinterpret_cast<RealtimeStreaming::Network::Connection const*>(&connection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Play(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Play, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Play());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Pause(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Pause, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Pause());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Stop(winrt::hresult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Stop, WINRT_WRAP(winrt::hresult));
            *result = detach_from<winrt::hresult>(this->shim().Stop());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL add_Closed(void* handler, winrt::event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Closed, WINRT_WRAP(winrt::event_token), Windows::Foundation::EventHandler<RealtimeStreaming::Media::RealtimeMediaPlayer> const&);
            *token = detach_from<winrt::event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::EventHandler<RealtimeStreaming::Media::RealtimeMediaPlayer> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL remove_Closed(winrt::event_token token) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        WINRT_ASSERT_DECLARATION(Closed, WINRT_WRAP(void), winrt::event_token const&);
        this->shim().Closed(*reinterpret_cast<winrt::event_token const*>(&token));
        return 0;
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Media::IRealtimeMediaSource> : produce_base<D, RealtimeStreaming::Media::IRealtimeMediaSource>
{
    int32_t WINRT_CALL InitAsync(void* connection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InitAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), RealtimeStreaming::Network::Connection const);
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InitAsync(*reinterpret_cast<RealtimeStreaming::Network::Connection const*>(&connection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_MediaStreamSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(MediaStreamSource, WINRT_WRAP(Windows::Media::Core::MediaStreamSource));
            *value = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().MediaStreamSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_VideoProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(VideoProperties, WINRT_WRAP(Windows::Media::MediaProperties::VideoEncodingProperties));
            *value = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().VideoProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Media::IRealtimeServer> : produce_base<D, RealtimeStreaming::Media::IRealtimeServer>
{
    int32_t WINRT_CALL WriteFrame(uint32_t bufferSize, uint32_t __pBufferSize, uint8_t* pBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(WriteFrame, WINRT_WRAP(void), uint32_t, array_view<uint8_t const>);
            this->shim().WriteFrame(bufferSize, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(pBuffer), reinterpret_cast<uint8_t const *>(pBuffer) + __pBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_VideoProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(VideoProperties, WINRT_WRAP(Windows::Media::MediaProperties::VideoEncodingProperties));
            *value = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().VideoProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Media::IRealtimeServerFactory> : produce_base<D, RealtimeStreaming::Media::IRealtimeServerFactory>
{
    int32_t WINRT_CALL CreateInstance(void* connection, winrt::guid inputMediaType, void* mediaEncodingProperties, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateInstance, WINRT_WRAP(RealtimeStreaming::Media::RealtimeServer), RealtimeStreaming::Network::Connection const&, winrt::guid const&, Windows::Media::MediaProperties::MediaEncodingProfile const&);
            *value = detach_from<RealtimeStreaming::Media::RealtimeServer>(this->shim().CreateInstance(*reinterpret_cast<RealtimeStreaming::Network::Connection const*>(&connection), *reinterpret_cast<winrt::guid const*>(&inputMediaType), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&mediaEncodingProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::RealtimeStreaming::Media {

inline RTSchemeHandler::RTSchemeHandler() :
    RTSchemeHandler(impl::call_factory<RTSchemeHandler>([](auto&& f) { return f.template ActivateInstance<RTSchemeHandler>(); }))
{}

inline RealtimeMediaPlayer::RealtimeMediaPlayer() :
    RealtimeMediaPlayer(impl::call_factory<RealtimeMediaPlayer>([](auto&& f) { return f.template ActivateInstance<RealtimeMediaPlayer>(); }))
{}

inline RealtimeMediaSource::RealtimeMediaSource() :
    RealtimeMediaSource(impl::call_factory<RealtimeMediaSource>([](auto&& f) { return f.template ActivateInstance<RealtimeMediaSource>(); }))
{}

inline RealtimeServer::RealtimeServer(RealtimeStreaming::Network::Connection const& connection, winrt::guid const& inputMediaType, Windows::Media::MediaProperties::MediaEncodingProfile const& mediaEncodingProperties) :
    RealtimeServer(impl::call_factory<RealtimeServer, RealtimeStreaming::Media::IRealtimeServerFactory>([&](auto&& f) { return f.CreateInstance(connection, inputMediaType, mediaEncodingProperties); }))
{}

}

namespace winrt::impl {

struct property_RealtimeStreaming_Media_IRTSchemeHandler
{ struct named {
    struct DataConnection
    {
        struct name { static constexpr std::wstring_view value{ L"DataConnection"sv }; };
        using property_type = winrt::RealtimeStreaming::Network::Connection;
        using target_type = winrt::RealtimeStreaming::Media::IRTSchemeHandler;

        using is_readable = std::true_type;
        using is_writable = std::true_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.DataConnection();
            }
        };
        struct setter
        {
            template <typename Value>
            void operator()(target_type const& target, Value&& value) const
            {
                target.DataConnection(std::forward<Value>(value));
            }
        };
    };};
    struct list { using type = impl::typelist<named::DataConnection>; };
};

struct property_RealtimeStreaming_Media_IRealtimeMediaSource
{ struct named {
    struct MediaStreamSource
    {
        struct name { static constexpr std::wstring_view value{ L"MediaStreamSource"sv }; };
        using property_type = winrt::Windows::Media::Core::MediaStreamSource;
        using target_type = winrt::RealtimeStreaming::Media::IRealtimeMediaSource;

        using is_readable = std::true_type;
        using is_writable = std::false_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.MediaStreamSource();
            }
        };
    };
    struct VideoProperties
    {
        struct name { static constexpr std::wstring_view value{ L"VideoProperties"sv }; };
        using property_type = winrt::Windows::Media::MediaProperties::VideoEncodingProperties;
        using target_type = winrt::RealtimeStreaming::Media::IRealtimeMediaSource;

        using is_readable = std::true_type;
        using is_writable = std::false_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.VideoProperties();
            }
        };
    };};
    struct list { using type = impl::typelist<named::MediaStreamSource, named::VideoProperties>; };
};

struct property_RealtimeStreaming_Media_IRealtimeServer
{ struct named {
    struct VideoProperties
    {
        struct name { static constexpr std::wstring_view value{ L"VideoProperties"sv }; };
        using property_type = winrt::Windows::Media::MediaProperties::VideoEncodingProperties;
        using target_type = winrt::RealtimeStreaming::Media::IRealtimeServer;

        using is_readable = std::true_type;
        using is_writable = std::false_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.VideoProperties();
            }
        };
    };};
    struct list { using type = impl::typelist<named::VideoProperties>; };
};

struct property_RealtimeStreaming_Media_RTSchemeHandler
{ struct named {
    struct DataConnection
    {
        struct name { static constexpr std::wstring_view value{ L"DataConnection"sv }; };
        using property_type = winrt::RealtimeStreaming::Network::Connection;
        using target_type = winrt::RealtimeStreaming::Media::RTSchemeHandler;

        using is_readable = std::true_type;
        using is_writable = std::true_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.DataConnection();
            }
        };
        struct setter
        {
            template <typename Value>
            void operator()(target_type const& target, Value&& value) const
            {
                target.DataConnection(std::forward<Value>(value));
            }
        };
    };};
    struct list { using type = impl::typelist<named::DataConnection>; };
};

struct property_RealtimeStreaming_Media_RealtimeMediaSource
{ struct named {
    struct MediaStreamSource
    {
        struct name { static constexpr std::wstring_view value{ L"MediaStreamSource"sv }; };
        using property_type = winrt::Windows::Media::Core::MediaStreamSource;
        using target_type = winrt::RealtimeStreaming::Media::RealtimeMediaSource;

        using is_readable = std::true_type;
        using is_writable = std::false_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.MediaStreamSource();
            }
        };
    };
    struct VideoProperties
    {
        struct name { static constexpr std::wstring_view value{ L"VideoProperties"sv }; };
        using property_type = winrt::Windows::Media::MediaProperties::VideoEncodingProperties;
        using target_type = winrt::RealtimeStreaming::Media::RealtimeMediaSource;

        using is_readable = std::true_type;
        using is_writable = std::false_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.VideoProperties();
            }
        };
    };};
    struct list { using type = impl::typelist<named::MediaStreamSource, named::VideoProperties>; };
};

struct property_RealtimeStreaming_Media_RealtimeServer
{ struct named {
    struct VideoProperties
    {
        struct name { static constexpr std::wstring_view value{ L"VideoProperties"sv }; };
        using property_type = winrt::Windows::Media::MediaProperties::VideoEncodingProperties;
        using target_type = winrt::RealtimeStreaming::Media::RealtimeServer;

        using is_readable = std::true_type;
        using is_writable = std::false_type;
        using is_static = std::false_type;
        struct getter
        {
            auto operator()(target_type const& target) const
            {
                return target.VideoProperties();
            }
        };
    };};
    struct list { using type = impl::typelist<named::VideoProperties>; };
};

}

WINRT_EXPORT namespace winrt::experimental::reflect {
template <> struct named_property<RealtimeStreaming::Media::IRTSchemeHandler> : impl::property_RealtimeStreaming_Media_IRTSchemeHandler::named {};
template <> struct properties<RealtimeStreaming::Media::IRTSchemeHandler> : impl::property_RealtimeStreaming_Media_IRTSchemeHandler::list {};
template <> struct named_property<RealtimeStreaming::Media::IRealtimeMediaSource> : impl::property_RealtimeStreaming_Media_IRealtimeMediaSource::named {};
template <> struct properties<RealtimeStreaming::Media::IRealtimeMediaSource> : impl::property_RealtimeStreaming_Media_IRealtimeMediaSource::list {};
template <> struct named_property<RealtimeStreaming::Media::IRealtimeServer> : impl::property_RealtimeStreaming_Media_IRealtimeServer::named {};
template <> struct properties<RealtimeStreaming::Media::IRealtimeServer> : impl::property_RealtimeStreaming_Media_IRealtimeServer::list {};
template <> struct named_property<RealtimeStreaming::Media::RTSchemeHandler> : impl::property_RealtimeStreaming_Media_RTSchemeHandler::named {};
template <> struct properties<RealtimeStreaming::Media::RTSchemeHandler> : impl::property_RealtimeStreaming_Media_RTSchemeHandler::list {};
template <> struct named_property<RealtimeStreaming::Media::RealtimeMediaSource> : impl::property_RealtimeStreaming_Media_RealtimeMediaSource::named {};
template <> struct properties<RealtimeStreaming::Media::RealtimeMediaSource> : impl::property_RealtimeStreaming_Media_RealtimeMediaSource::list {};
template <> struct named_property<RealtimeStreaming::Media::RealtimeServer> : impl::property_RealtimeStreaming_Media_RealtimeServer::named {};
template <> struct properties<RealtimeStreaming::Media::RealtimeServer> : impl::property_RealtimeStreaming_Media_RealtimeServer::list {};
template <> struct get_enumerator_names<RealtimeStreaming::Media::SinkStreamOperation>
{
    static constexpr std::array<std::wstring_view, 8> value{{ 
        {L"SetMediaType", 12},
        {L"Start", 5},
        {L"Restart", 7},
        {L"Pause", 5},
        {L"Stop", 4},
        {L"ProcessSample", 13},
        {L"PlaceMarker", 11},
        {L"Count", 5}, }};
};
template <> struct get_enumerator_values<RealtimeStreaming::Media::SinkStreamOperation>
{
    static constexpr std::array<RealtimeStreaming::Media::SinkStreamOperation, 8> value{{ 
        RealtimeStreaming::Media::SinkStreamOperation::SetMediaType,
        RealtimeStreaming::Media::SinkStreamOperation::Start,
        RealtimeStreaming::Media::SinkStreamOperation::Restart,
        RealtimeStreaming::Media::SinkStreamOperation::Pause,
        RealtimeStreaming::Media::SinkStreamOperation::Stop,
        RealtimeStreaming::Media::SinkStreamOperation::ProcessSample,
        RealtimeStreaming::Media::SinkStreamOperation::PlaceMarker,
        RealtimeStreaming::Media::SinkStreamOperation::Count, }};
};
template <> struct get_enumerator_names<RealtimeStreaming::Media::SinkStreamState>
{
    static constexpr std::array<std::wstring_view, 6> value{{ 
        {L"NotSet", 6},
        {L"Ready", 5},
        {L"Started", 7},
        {L"Stopped", 7},
        {L"Paused", 6},
        {L"Count", 5}, }};
};
template <> struct get_enumerator_values<RealtimeStreaming::Media::SinkStreamState>
{
    static constexpr std::array<RealtimeStreaming::Media::SinkStreamState, 6> value{{ 
        RealtimeStreaming::Media::SinkStreamState::NotSet,
        RealtimeStreaming::Media::SinkStreamState::Ready,
        RealtimeStreaming::Media::SinkStreamState::Started,
        RealtimeStreaming::Media::SinkStreamState::Stopped,
        RealtimeStreaming::Media::SinkStreamState::Paused,
        RealtimeStreaming::Media::SinkStreamState::Count, }};
};
template <> struct get_enumerator_names<RealtimeStreaming::Media::SourceStreamState>
{
    static constexpr std::array<std::wstring_view, 7> value{{ 
        {L"Invalid", 7},
        {L"Opening", 7},
        {L"Starting", 8},
        {L"Started", 7},
        {L"Stopped", 7},
        {L"Shutdown", 8},
        {L"Count", 5}, }};
};
template <> struct get_enumerator_values<RealtimeStreaming::Media::SourceStreamState>
{
    static constexpr std::array<RealtimeStreaming::Media::SourceStreamState, 7> value{{ 
        RealtimeStreaming::Media::SourceStreamState::Invalid,
        RealtimeStreaming::Media::SourceStreamState::Opening,
        RealtimeStreaming::Media::SourceStreamState::Starting,
        RealtimeStreaming::Media::SourceStreamState::Started,
        RealtimeStreaming::Media::SourceStreamState::Stopped,
        RealtimeStreaming::Media::SourceStreamState::Shutdown,
        RealtimeStreaming::Media::SourceStreamState::Count, }};
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::RealtimeStreaming::Media::INetworkMediaSink> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::INetworkMediaSink> {};
template<> struct hash<winrt::RealtimeStreaming::Media::INetworkMediaSinkStream> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::INetworkMediaSinkStream> {};
template<> struct hash<winrt::RealtimeStreaming::Media::IRTSchemeHandler> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::IRTSchemeHandler> {};
template<> struct hash<winrt::RealtimeStreaming::Media::IRealtimeMediaPlayer> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::IRealtimeMediaPlayer> {};
template<> struct hash<winrt::RealtimeStreaming::Media::IRealtimeMediaSource> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::IRealtimeMediaSource> {};
template<> struct hash<winrt::RealtimeStreaming::Media::IRealtimeServer> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::IRealtimeServer> {};
template<> struct hash<winrt::RealtimeStreaming::Media::IRealtimeServerFactory> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::IRealtimeServerFactory> {};
template<> struct hash<winrt::RealtimeStreaming::Media::NetworkMediaSink> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::NetworkMediaSink> {};
template<> struct hash<winrt::RealtimeStreaming::Media::NetworkMediaSinkStream> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::NetworkMediaSinkStream> {};
template<> struct hash<winrt::RealtimeStreaming::Media::RTSchemeHandler> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::RTSchemeHandler> {};
template<> struct hash<winrt::RealtimeStreaming::Media::RealtimeMediaPlayer> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::RealtimeMediaPlayer> {};
template<> struct hash<winrt::RealtimeStreaming::Media::RealtimeMediaSource> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::RealtimeMediaSource> {};
template<> struct hash<winrt::RealtimeStreaming::Media::RealtimeServer> : winrt::impl::hash_base<winrt::RealtimeStreaming::Media::RealtimeServer> {};

}