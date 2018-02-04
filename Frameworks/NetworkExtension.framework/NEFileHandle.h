/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFileHandle : NSObject {
    NSFileHandle * _handle;
    bool  _launchOwnerWhenReadable;
}

@property (readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) NSFileHandle *handle;
@property (readonly) bool launchOwnerWhenReadable;
@property (readonly) unsigned long long type;

+ (id)fileHandleFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionary;
- (id)handle;
- (id)initFromDictionary:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(bool)arg2;
- (bool)launchOwnerWhenReadable;
- (unsigned long long)type;

@end
