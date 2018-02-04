/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioZeroFilter : NSObject {
    struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > { 
        struct __compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > { 
            struct CSAudioZeroFilterImpl<unsigned short> {} *__first_; 
        } __ptr_; 
    }  _audioZeroFilterImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id*)arg1;
- (unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id*)arg3;
- (id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(unsigned short)arg2 numHostTicksPerAudioSample:(double)arg3;
- (id)metrics;

@end
