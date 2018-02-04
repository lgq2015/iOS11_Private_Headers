/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSConfig : NSObject

+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)channelForProcessedInput;
+ (int)csAudioProcessingQueuePriority;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)inputRecordingDurationInSecs;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned long long)inputRecordingProcessingChannelsBitset;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRate;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterWindowSizeInMs;

@end
