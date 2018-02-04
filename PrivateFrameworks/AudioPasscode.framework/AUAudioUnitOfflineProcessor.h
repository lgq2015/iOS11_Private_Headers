/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface AUAudioUnitOfflineProcessor : NSObject {
    long long  _assetLength;
    AUAudioUnit * _audioUnit;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList> > { 
        struct __compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > { 
            struct CABufferList {} *__first_; 
        } __ptr_; 
    }  _destBufferList;
    struct CAExtAudioFile { 
        int (**_vptr$CAExtAudioFile)(); 
        struct OpaqueExtAudioFile {} *mExtAudioFile; 
        struct CAStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } mFileDataFormat; 
        struct CAAudioChannelLayout { 
            struct RefCountedLayout {} *mLayout; 
        } mFileChannelLayout; 
        struct CAStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } mClientDataFormat; 
    }  _destFile;
    id /* block */  _pullInputBlock;
    id /* block */  _renderBlock;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList> > { 
        struct __compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > { 
            struct CABufferList {} *__first_; 
        } __ptr_; 
    }  _srcBufferList;
    struct CAExtAudioFile { 
        int (**_vptr$CAExtAudioFile)(); 
        struct OpaqueExtAudioFile {} *mExtAudioFile; 
        struct CAStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } mFileDataFormat; 
        struct CAAudioChannelLayout { 
            struct RefCountedLayout {} *mLayout; 
        } mFileChannelLayout; 
        struct CAStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } mClientDataFormat; 
    }  _srcFile;
}

@property (nonatomic, readonly) long long assetLength;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)assetLength;
- (id)initWithAudioUnit:(id)arg1 inputFileURL:(id)arg2 outputFileURL:(id)arg3 ioSampleRate:(long long)arg4;
- (bool)run;

@end
