/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDStream : ASDObject {
    NSObject<OS_dispatch_queue> * _controlQueue;
    NSMutableArray * _controls;
    id /* block */  _convertInputBlock;
    id /* block */  _convertInputBlockUnretained;
    id /* block */  _convertMixBlock;
    id /* block */  _convertMixBlockUnretained;
    unsigned int  _direction;
    bool  _isActive;
    bool  _isTapStream;
    unsigned int  _latency;
    id /* block */  _mixOutputBlock;
    id /* block */  _mixOutputBlockUnretained;
    ASDStreamFormat * _physicalFormat;
    NSObject<OS_dispatch_queue> * _physicalFormatQueue;
    bool  _physicalFormatSettable;
    NSArray * _physicalFormats;
    id /* block */  _processInputBlock;
    id /* block */  _processInputBlockUnretained;
    id /* block */  _processMixBlock;
    id /* block */  _processMixBlockUnretained;
    id /* block */  _processOutputBlock;
    id /* block */  _processOutputBlockUnretained;
    id /* block */  _readInputBlock;
    id /* block */  _readInputBlockUnretained;
    unsigned int  _startingChannel;
    NSString * _streamName;
    unsigned int  _terminalType;
    id /* block */  _writeMixBlock;
    id /* block */  _writeMixBlockUnretained;
}

@property (nonatomic, copy) id /* block */ convertInputBlock;
@property (nonatomic, readonly) id /* block */*convertInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ convertMixBlock;
@property (nonatomic, readonly) id /* block */*convertMixBlockUnretainedPtr;
@property (nonatomic) unsigned int direction;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isTapStream;
@property (nonatomic) unsigned int latency;
@property (nonatomic, copy) id /* block */ mixOutputBlock;
@property (nonatomic, readonly) id /* block */*mixOutputBlockUnretainedPtr;
@property (nonatomic, copy) ASDStreamFormat *physicalFormat;
@property (getter=isPhysicalFormatSettable, nonatomic) bool physicalFormatSettable;
@property (nonatomic, copy) NSArray *physicalFormats;
@property (nonatomic, copy) id /* block */ processInputBlock;
@property (nonatomic, readonly) id /* block */*processInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ processMixBlock;
@property (nonatomic, readonly) id /* block */*processMixBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ processOutputBlock;
@property (nonatomic, readonly) id /* block */*processOutputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ readInputBlock;
@property (nonatomic, readonly) id /* block */*readInputBlockUnretainedPtr;
@property (nonatomic) unsigned int startingChannel;
@property (nonatomic, copy) NSString *streamName;
@property (nonatomic) unsigned int terminalType;
@property (nonatomic, copy) id /* block */ writeMixBlock;
@property (nonatomic, readonly) id /* block */*writeMixBlockUnretainedPtr;

- (void).cxx_destruct;
- (void)addControl:(id)arg1;
- (void)addPhysicalFormat:(id)arg1;
- (bool)changePhysicalFormat:(id)arg1;
- (id)channelCategoryForChannelIndex:(unsigned int)arg1;
- (id)channelNameForChannelIndex:(unsigned int)arg1;
- (id)channelNumberForChannelIndex:(unsigned int)arg1;
- (id /* block */)convertInputBlock;
- (id /* block */*)convertInputBlockUnretainedPtr;
- (id /* block */)convertMixBlock;
- (id /* block */*)convertMixBlockUnretainedPtr;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (bool)deviceChangedToSamplingRate:(double)arg1;
- (unsigned int)direction;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;
- (bool)isActive;
- (bool)isPhysicalFormatSettable;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isTapStream;
- (unsigned int)latency;
- (id /* block */)mixOutputBlock;
- (id /* block */*)mixOutputBlockUnretainedPtr;
- (id)physicalFormat;
- (id)physicalFormats;
- (id /* block */)processInputBlock;
- (id /* block */*)processInputBlockUnretainedPtr;
- (id /* block */)processMixBlock;
- (id /* block */*)processMixBlockUnretainedPtr;
- (id /* block */)processOutputBlock;
- (id /* block */*)processOutputBlockUnretainedPtr;
- (id /* block */)readInputBlock;
- (id /* block */*)readInputBlockUnretainedPtr;
- (void)removeControl:(id)arg1;
- (void)removePhysicalFormat:(id)arg1;
- (unsigned int)scope;
- (void)setConvertInputBlock:(id /* block */)arg1;
- (void)setConvertMixBlock:(id /* block */)arg1;
- (void)setDirection:(unsigned int)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsTapStream:(bool)arg1;
- (void)setLatency:(unsigned int)arg1;
- (void)setMixOutputBlock:(id /* block */)arg1;
- (void)setPhysicalFormat:(id)arg1;
- (void)setPhysicalFormatSettable:(bool)arg1;
- (void)setPhysicalFormats:(id)arg1;
- (void)setProcessInputBlock:(id /* block */)arg1;
- (void)setProcessMixBlock:(id /* block */)arg1;
- (void)setProcessOutputBlock:(id /* block */)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setReadInputBlock:(id /* block */)arg1;
- (void)setStartingChannel:(unsigned int)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTerminalType:(unsigned int)arg1;
- (void)setWriteMixBlock:(id /* block */)arg1;
- (void)startStream;
- (unsigned int)startingChannel;
- (void)stopStream;
- (id)streamName;
- (unsigned int)terminalType;
- (id /* block */)writeMixBlock;
- (id /* block */*)writeMixBlockUnretainedPtr;

@end
