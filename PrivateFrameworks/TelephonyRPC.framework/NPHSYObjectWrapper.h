/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NPHSYObjectWrapper : NSObject <SYChange> {
    long long  _type;
    <SYObject> * _wrappedObject;
}

@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SYObject> *wrappedObject;

- (void).cxx_destruct;
- (long long)changeType;
- (id)initWithSYObject:(id)arg1 type:(long long)arg2;
- (id)objectIdentifier;
- (id)sequencer;
- (id)wrappedObject;

@end
