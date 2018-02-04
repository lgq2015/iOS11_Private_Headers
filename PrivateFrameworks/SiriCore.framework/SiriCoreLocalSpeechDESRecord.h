/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreLocalSpeechDESRecord : NSObject <NSSecureCoding> {
    NSString * _UUIDString;
    NSMutableArray * _audioPackets;
    NSArray * _context;
    NSString * _language;
    NSURL * _originalAudioFileURL;
    NSData * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _samplingRate;
    NSString * _task;
    SiriCoreLocalSpeechUserData * _userData;
}

@property (nonatomic, readonly, copy) NSString *UUIDString;
@property (nonatomic, readonly, copy) NSMutableArray *audioPackets;
@property (nonatomic, readonly, copy) NSArray *context;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, copy) NSURL *originalAudioFileURL;
@property (nonatomic, copy) NSData *profile;
@property (nonatomic, readonly) unsigned long long samplingRate;
@property (nonatomic, readonly, copy) NSString *task;
@property (nonatomic, retain) SiriCoreLocalSpeechUserData *userData;

+ (void)DeleteAllRecordsWithCompletion:(id /* block */)arg1;
+ (id)recordsWithLanguage:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDString;
- (id)_init;
- (void)addAudioPacket:(id)arg1;
- (id)audioPackets;
- (id)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(bool)arg4;
- (id)language;
- (id)originalAudioFileURL;
- (id)profile;
- (id)recordData;
- (id)recordInfo;
- (unsigned long long)samplingRate;
- (void)setOriginalAudioFileURL:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)task;
- (id)userData;
- (void)writeToFileWithCompletionHandler:(id /* block */)arg1;

@end
