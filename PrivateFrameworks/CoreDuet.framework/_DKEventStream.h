/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventStream : NSObject <NSSecureCoding, _DKProtobufConverting> {
    _CDEventStreamProperties * _eventProperties;
    _DKObjectType * _eventValueType;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) _CDEventStreamProperties *eventProperties;
@property (readonly) _DKObjectType *eventValueType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)eventStreamWithName:(id)arg1;
+ (id)eventStreamWithName:(id)arg1 valueType:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventProperties;
- (id)eventValueType;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)toPBCodable;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
