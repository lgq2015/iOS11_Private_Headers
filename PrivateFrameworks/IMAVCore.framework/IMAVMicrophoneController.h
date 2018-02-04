/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVMicrophoneController : NSObject {
    id  _internal;
    NSMutableArray * _microphones;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) IMAVMicrophone *currentMicrophone;
@property (nonatomic, readonly, retain) NSArray *microphones;

+ (id)sharedInstance;

- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (id)currentMicrophone;
- (void)dealloc;
- (id)init;
- (id)microphones;
- (void)setCurrentMicrophone:(id)arg1;

@end
