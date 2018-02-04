/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVMicrophone : NSObject {
    id  _internalDevice;
}

@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *uniqueID;

- (id)_AVAudioDevice;
- (id)_initWithAVAudioDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (id)uniqueID;

@end
